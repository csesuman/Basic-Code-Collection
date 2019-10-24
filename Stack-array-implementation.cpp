#include<bits/stdc++.h>

using namespace std;

class Stack
{
    private:
        unsigned size;
        unsigned capacity;
        int* array;

    public :
        Stack(unsigned capacity){
            this->capacity = capacity;
            array = new int[capacity];
            size = 0;
        }

        void push(int value){

            if(size==capacity){
                printf("Error : Stack is Full\n");
                return ;
            }

            array[size] = value;
            size = size + 1;
        }

        int pop(){

            if(size==0){
                printf("Error : Stack is Empty\n");
                return -1;
            }
            int value = array[size-1];
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
    Stack ob = Stack(n);

    int value = ob.pop();
    cout<<"Size is : "<<ob.getSize()<<" Value is : "<<value<<endl;

    ob.push(5);
    cout<<"Size is : "<<ob.getSize()<<endl;

    ob.push(6);
    cout<<"Size is : "<<ob.getSize()<<endl;

    ob.push(7);
    cout<<"Size is : "<<ob.getSize()<<endl;

     value = ob.pop();
    cout<<"Size is : "<<ob.getSize()<<" Value is : "<<value<<endl;

    value = ob.pop();
    cout<<"Size is : "<<ob.getSize()<<" Value is : "<<value<<endl;

    value = ob.pop();
    cout<<"Size is : "<<ob.getSize()<<" Value is : "<<value<<endl;


    ob.push(7);
    cout<<"Size is : "<<ob.getSize()<<endl;

    value = ob.pop();
    cout<<"Size is : "<<ob.getSize()<<" Value is : "<<value<<endl;


    return 0;
}
