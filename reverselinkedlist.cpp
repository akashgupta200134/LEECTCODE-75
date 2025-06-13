
#include <iostream>
using namespace std;

//  function of reversing the linked list  using recursion  

Node* reverseusingrecursion(Node* head){

    Node *prev = NULL;
    Node *curr = head;

    if (curr == NULL)
    {
        return prev;
    }

    Node *nextnode = curr->next;

    curr->next = prev;
    prev = curr;
    curr = nextnode;


    Node* recursionAns = reverseusingrecursion(prev , curr);

    return recursionAns;

}




