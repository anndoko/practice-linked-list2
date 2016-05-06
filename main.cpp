
#include <iostream>
using namespace std;

//struct of a node
//store: (1)date; (2)link


struct Node{
    int data;
    Node* link; //declaring node*
    //pointer to node struct
};

struct Node* head;

//----------insert a number to the list----------//
void Insert(int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = head;
    head = temp;
}


//----------display the entire list----------//
void Print(){
    struct Node* temp = head; //collect the address stored in head
    cout << "List: ";
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

//----------MAIN----------//
int main() {
    
    head = NULL; //empty list
    cout << "How many numbers?" << endl;
    int n, i, x;
    cin >> n;
    for(i = 0; i < n; i++){
        cout << "Enter the number: " << endl;
        cin >> x;
        Insert(x);
        Print();
    }
    return 0;
}

