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
    int length = 0;
    char choice;
    int input = 0;

    public:
    linkedList() {
        head = NULL;
    }

    //function to print linked list
    void printList();
    //function to insert node
    void insertNode();
    //function to print mid and sqrt element
    void printMidAndSqrt();
};

void linkedList :: insertNode () {

    //inserting nodes and asking the user whether he wants to add more node or not
    cout<<"Enter the data: ";

    do {
        cin>>input;
        //create the new node
        Node* newNode = new Node(input);

        //assign new node to head
        if (head == NULL) {
            head = newNode;
        }

        else {
            Node* temp = head;
            while (temp -> next != NULL) {
                temp = temp->next;
            }

            //insert node at last
            temp -> next = newNode;
        }
        cout<<"Do you wish to add more (press y if yes else press any char): ";
        cin>>choice;
    } while (choice == 'y' || choice == 'Y');
}

void linkedList :: printList() {
    Node* temp = head;

    //traverse till end i.e. till it reaches NULL
    while(temp != NULL) {
        cout<<temp->input<<" ";
        temp = temp -> next;
        length++;
    }
}

void linkedList :: printMidAndSqrt() {
    Node* temp = head;
    int i=1;
    
    int Sqrt = sqrt(length);

    int Mid = (length%2 == 0) ? length/2 : length/2 + 1;

    //traverse till mid
    while (temp != NULL) {
        if (i == Mid) {
            cout<<temp->input<<" ";
            break;
        }
        i++;
        temp = temp -> next;
    }

    temp = head;
    i=1;

    while (temp != NULL) {
        if (i == Sqrt) {
            cout<<temp->input;
            break;
        }
        i++;
        temp = temp -> next;
    }
}

int main() {

    linkedList list;

    list.insertNode();

    //Print the list
    cout<<"\nElements of the list are: ";
    list.printList();

    cout<<endl;

    //print the middle element of list
    list.printMidAndSqrt();
    
    return 0;
}