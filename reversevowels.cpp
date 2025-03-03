#include<iostream>
#include<string>
using namespace std;



 bool checkvowels(char ch){
    if(ch == 'A' || ch == 'E' || ch == 'I'|| ch == 'O' || ch == 'U' ||ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||ch == 'u'){
      
        return true;
}
  else{
    return false;
   }

  }

 string reverseVowles(string s , int n  ){
    
   int i = 0 ; 
   int j = n-1; 


   while( i < j) {


       
    if(!checkvowels(s[i])){
    
        i++;
     
    }

           
    else if(!checkvowels(s[j])){
      
      j--;
  }

         
  else{
    swap(s[i] , s[j]);
    i++;
    j--;
}






   }
      
       
         return s; 
        
                 
          



    





}



int main(){
 
string s = "IceCreAm"; 
int n = s.length(); 

 
string result = reverseVowles(s ,n) ; 


cout << result << endl ;




}