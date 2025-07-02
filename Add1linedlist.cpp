/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
  
  Node* Reverselinkedlist(Node* &head){
       
       Node* prev = NULL;
       Node* curr = head; 
      
       
      if(curr == NULL ){
          return prev; 
      }
      
       
       while(curr != NULL){
           
       Node* NextNode = curr -> next;  
       curr -> next = prev; 
       prev = curr ; 
       curr = NextNode; 
     
       }
      
      head = prev; 
      return head;

       
    
      
  }
 
  
    Node* addOne(Node* head) {
        
       head = Reverselinkedlist(head);
       Node* temp = head; 
       
        
        int carry = 1 ; 
        
         while(temp -> next != NULL){
             
             int totalsum = temp-> data + carry;
             int digit = totalsum % 10 ; 
             carry = totalsum / 10;
             
             temp -> data = digit; 
             temp = temp ->next ;
             
             
             if(carry == 0 ){
                 break ;
             }
             
         }
         
         
         if(carry != 0 ){
             
             int totalsum = temp -> data + carry;
             
             int digit = totalsum % 10 ;
             carry = totalsum / 10;
             
             
             temp -> data = digit; 
             
             if(carry != 0){
                 
                Node* Newnode = new Node(carry);
                temp -> next = Newnode; 
             }
         }
         
            Node* Ans = Reverselinkedlist(head);
            
            return Ans;
    }
};