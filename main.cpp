
#include <iostream>
using namespace std;

//struct of a node
//store: (1)data; (2)link


struct Node{
    int data;
    Node* link; //declaring node*
    //pointer to node struct
};

/*----------insert a number to the list----------
Receive pointer to pointer.
*/

void Insert(Node** pointerToHead, int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = NULL;
    if(*pointerToHead != NULL) temp->link = *pointerToHead;
    *pointerToHead = temp;
}


//----------display the entire list----------//
void Print(Node* head){
    cout << "List: ";
    while(head != NULL){
        cout << head->data << " ";
        head = head->link;
    }
    cout << endl;
}

//----------MAIN----------//
int main() {
    Node* head = NULL; //empty list
    cout << "How many numbers?" << endl;
    int n, i, x;
    cin >> n;
    for(i = 0; i < n; i++){
        cout << "Enter the number: " << endl;
        cin >> x;
        Insert(&head, x); // pass the variable head by reference
        Print(head);
    }
    return 0;
}

