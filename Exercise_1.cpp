// Time Complexity : push - O(1), pop - O(1), peek - O(1), isEmpty - O(1)
// Space Complexity : O(1)
// Did this code successfully run on Leetcode : -
// Any problem you faced while coding this : None


// Your code here along with comments explaining your approach
#include <bits/stdc++.h> 
  
using namespace std; 
  
#define MAX 1000 
  
class Stack {
  //Please read sample.java file before starting.
  //Kindly include Time and Space complexity at top of each file
    int top; 
  
public: 
    int a[MAX]; // Maximum size of Stack 
  
    Stack() { top = -1;} //intitializing the pointer to -1, means stack is empty
    bool push(int x); 
    int pop(); 
    int peek(); 
    bool isEmpty(); 
}; 
  
bool Stack::push(int x) 
{ 
    //Your code here
    //Check Stack overflow as well
    if(top >= (MAX-1)){ // if the pointer reaches more than max value
        cout<<"Stack Overflow"<<endl;
        return false;
    } 
    a[++top] = x;
    return true;
} 
  
int Stack::pop() 
{ 
    //Your code here
    //Check Stack Underflow as well 
    if(top < 0){ // if the pointer is less than 0 , than the stack is empty
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    return a[top--];
} 
int Stack::peek() 
{ 
    //Your code here
    //Check empty condition too
    if(top < 0){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    return a[top];
} 
  
bool Stack::isEmpty() 
{ 
    //Your code here 
    if(top < 0){
        return true;
    }
    else return false;
} 
// Driver program to test above functions 
int main() 
{ 
    class Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << s.pop() << " Popped from stack\n"; 
  
    return 0; 
} 
