#include <iostream>
using namespace std;
int queue[5];
int front = -1;
int rear = -1;

void enqueue(int x);
void display();
void dequeue(int x);
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue(10);
    display();
}

void enqueue(int x) {
    if (rear == 4) {
        cout << "Queue full" << endl;
        return;
    }

    if (front == -1) {
       front=0;
    }
    rear++;
    queue[rear] = x;
}
void dequeue(int x){
    if (front == -1 || front > rear){
        cout<<"empty queue"<<endl;
    }
    else
        front++;
    
}
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return;
    }

    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}