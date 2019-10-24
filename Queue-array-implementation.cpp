#include<bits/stdc++.h>

using namespace std;

class Queue
{
    private:
        int front, rear, size;
        unsigned capacity;
        int* array;

    public :
        Queue(unsigned capacity){
            this->capacity = capacity;
            array = new int[capacity];
            size = 0;
            front = rear = 0;
        }

        void enqueue(int value){

            if( capacity == size ){
                printf("Error : Queue is FULL.\n");
                return ;
            }

            array[rear] = value;
            rear = (rear + 1) % capacity;
            size++;
        }

        int dequeue(){

            if(size==0){
                printf("Error : Queue is Empty\n");
                return -1;
            }
            int value = array[front];
            front = (front + 1) % capacity;
            size--;

            return value;
        }

        int getSize()
        {
            return size;
        }
};

int main()
{
    int n = 2;
    Queue ob = Queue(n);

    int value = ob.dequeue();
    cout<<"Size is : "<<ob.getSize()<<" Value is : "<<value<<endl;

    ob.enqueue(5);
    cout<<"Size is : "<<ob.getSize()<<endl;

    ob.enqueue(6);
    cout<<"Size is : "<<ob.getSize()<<endl;

    ob.enqueue(7);
    cout<<"Size is : "<<ob.getSize()<<endl;

     value = ob.dequeue();
    cout<<"Size is : "<<ob.getSize()<<" Value is : "<<value<<endl;

    value = ob.dequeue();
    cout<<"Size is : "<<ob.getSize()<<" Value is : "<<value<<endl;

    value = ob.dequeue();
    cout<<"Size is : "<<ob.getSize()<<" Value is : "<<value<<endl;


    ob.enqueue(7);
    cout<<"Size is : "<<ob.getSize()<<endl;

    value = ob.dequeue();
    cout<<"Size is : "<<ob.getSize()<<" Value is : "<<value<<endl;


    return 0;
}
