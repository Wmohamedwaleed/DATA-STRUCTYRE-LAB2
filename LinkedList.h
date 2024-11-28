#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList {
private:
    Node* top;
    Node* temp;

public:
    LinkedList() {
        top = NULL;
         temp = NULL;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->Prev = top;
        top = newNode;
    }

    int pop() {
        if (top == NULL) {
            cout << "Error: List is empty, cannot pop." << endl;
            return -1;
        }

        temp = top;
        int data = temp->Data;
        top = top->Prev;
        delete temp;

        return data;
    }
        int peek() {
        if (top == NULL) {
            cout << "Error: List is empty, cannot finf the peak." << endl;
            return -1;
        }
        int data = top->Data;
        return data;
    }


      int display() {
        if (top == NULL) {
            cout << "Error: List is empty, cannot display." << endl;
            return -1;
        }
        temp = top;
        while(temp != NULL){
       // temp = top;
        cout<<temp->Data<<"\t";
        temp = temp->Prev;
         }
         cout<< endl;
         return 0;



    }



protected:
};

#endif // LINKEDLIST_H
