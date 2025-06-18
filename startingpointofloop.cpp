
#include <iostream>
using namespace std;

bool Checkloop(Node* head)
{

    Node *fast = head;
    Node *slow = head;

    while (fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        if(slow == fast){
            return true;
        }


    }

    return false;
}

Node* Startingpoinofloop(Node* head){

      


}





int main
()
{
}