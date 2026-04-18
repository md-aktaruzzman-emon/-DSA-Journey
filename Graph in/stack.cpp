#include <iostream> 
using namespace std;

class stack{
    private : 
    int arr[5];
    int top ;

} 

public stack (){
    top = -1 ;

}

bool inEmpty(){
    return top == -1 ;
     
} 

bool isFull(){
    return top == 4;

}

void push (int value ){
    if (isFull()){
        cout << "stack is full\n";
       return;
    }
    top++ ;
    arr[top] = value ;
    cout << value << "pushed into stack\n";

}

void pop(){
    if (isEmpty()){
        cout << "stack is empty:\n";return;
    }
    c
}