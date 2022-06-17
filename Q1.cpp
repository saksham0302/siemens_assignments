#include<bits/stdc++.h>

using namespace std;

//represent a node of linked list
class Node {

    public:
    int input;
    Node* next;

    Node() {
        input = 0;
        next = NULL;
    }

    Node(int input) {
        this->input = input;
        this->next  = NULL;
    }

};

//implement linked list
class linkedList {
    Node* head;

    public:
    linkedList() {
        head = NULL;
    }

    //function to print linked list
    void printList();
    //function to insert node
    void insertNode(int);
    //function to print mid
    void printMid(int);
    //function to print square root element
    void printSqrt(int);
};

void linkedList :: insertNode (int input) {

    //create the new node
    Node* newNode = new Node(input);

    //assign new node to head
    if (head == NULL) {
        head = newNode;
        return;
    }

    //traverse till end
    Node* temp = head;
    while (temp -> next != NULL) {
        temp = temp->next;
    }

    //insert node at last
    temp -> next = newNode;
}

void linkedList :: printList() {
    Node* temp = head;

    //traverse till end i.e. till it reaches NULL
    while(temp != NULL) {
        cout<<temp->input<<" ";
        temp = temp -> next;
    }
}

void linkedList :: printMid(int mid) {
    Node* temp = head;

    //traverse till mid
    while(mid > 1) {
        --mid;
        temp = temp -> next;
    }
    cout<<temp->input<<" ";
}

void linkedList :: printSqrt(int Sqrt) {
    Node* temp = head;

    //traverse till sqrt(length) value
    while(Sqrt > 1) {
        --Sqrt;
        temp = temp -> next;
    }
    cout<<temp->input<<endl;
}

int main() {

    linkedList list;

    char choice;
    int input = 0, length = 0;
    
    //inserting nodes and asking the user whether he wants to add more node or not
    cout<<"Enter the data: ";
    do {
        cin>>input;
        list.insertNode(input);
        cout<<"Do you wish to add more (press y if yes else press any char): ";
        cin>>choice;
        length++;
    } while (choice == 'y' || choice == 'Y');

    //Print the list
    cout<<"\nElements of the list are: ";
    list.printList();

    cout<<endl;

    (length % 2 == 0) ? length : length++;

    //print the middle element of list
    int mid = length / 2;
    list.printMid(mid);

    //print the sqrt(length) element of list
    int Sqrt = 0;
    Sqrt = sqrt(length);
    list.printSqrt(Sqrt);
    
    return 0;
}