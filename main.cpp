
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
Pass the pointer to Node as return from this method.
Main has to collect the return.
*/

Node* Insert(Node* head, int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = head;
    head = temp;
    return head; //return head
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
        head = Insert(head, x); //head collects the return from the Insert function into head
        Print(head);
    }
    return 0;
}

