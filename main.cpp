#include <iostream>
#include <stack>

using namespace std;

void stackElements(stack<int>stack){
    while(!stack.empty()){
        cout<<stack.top()<<endl;
        stack.pop();
    }
}

int main()
{ 
    stack<int>myStack;
    int a;
    cout<<"Input the number ";
    cin>>a;
    cout<<"Input "<<a<<" numbers\n";
    for(int i=0; i<a; i++){
        cout<<"Input the number to put inside the stack: ";
        int number;
        cin>>number;
        myStack.push(number);
    }
    stackElements(myStack);
    
    if(!myStack.empty()){
        cout<<"Your stack is not empty:"<<endl;
    }
    else{
        cout<<"Your stack is empty\n";
    }
   
    
    return 0;
}
