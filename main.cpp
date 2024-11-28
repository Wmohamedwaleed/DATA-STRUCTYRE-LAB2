#include <iostream>
using namespace std;

class Queue {
private:
    int* items;
    int size;
    int front;
    int rear;

   int isEmpty(){
            if(front == -1){
                return 1;
            }
            return 0;
        }
        int isFull(){
            if (rear == size-1){
                return 1;
            }
            return 0;
        }
public:
    Queue(int size) {
        this->size = size;
        items = new int[size];
        front = rear = -1;
    }

    int enQueue(int data) {
        if (isFull()) {
            cout << "Queue is full, cannot enqueue." << endl;
            return 0;
        }

        if (front == -1) {
            front = 0;
        }

        rear++;
        items[rear] = data;
        return 1;
    }

    int deQueue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue." << endl;
            return -1;
        }

        int data = items[front];
           for (int i = front; i < rear; i++) {
            items[i] = items[i + 1];
        }

        rear--;

           if (rear == -1) {
            front = -1;
        }

        return data;
    }

    int getFront() {
            if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
           return items[front];
    }

     int getRear() {
          if (isEmpty()) {
      cout << "Queue is empty." << endl;
            return -1;
        }
        return items[rear];
    }

     void display() {
          if (isEmpty()) {
       cout << "Queue is empty." << endl;
             return;
        }

            for (int i = front; i <= rear; i++) {
            cout << items[i] << " ";
        }
        cout << endl;
    }


};

int main() {
    Queue q(5);

    q.enQueue(10);

    q.enQueue(20);


    q.display();

     q.display();

    q.enQueue(50);

      q.display();

     q.enQueue(70);

    q.display();

    return 0;
}
