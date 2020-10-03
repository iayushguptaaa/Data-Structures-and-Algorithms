#include<iostream>
using namespace std;
const int stksize = 10000;
class Stack
{
public:
    int top;
    int stk[stksize];
    Stack()
    {
        top = -1;
    }
};
class Stack s;
void push(int a)
{
    if(s.top == stksize-1)
        cout<<"Stack Overflow"<<endl;
    else
    {
        s.top = s.top +1;
        s.stk[s.top] = a;
    }
}
void pop()
{
    if(s.top == -1)
        cout<<"Stack Underflow"<<endl;
    else
    {
        s.top--;
    }
}
void searchVal(int a)
{
    int i;
    if(s.top != -1)
    {
        for(i=s.top;i>=0;i--)
            if(s.stk[i] == a)
            {
                cout<<"Value is present at "<<i+1<<endl;
                break;
            }
        if(i == -1)
            cout<<"Value is not present"<<endl;
    }
    else
        cout<<"Stack is empty"<<endl;
}
void display()
{
    if(s.top != -1)
    {
        for(int i=s.top;i>=0;i--)
            cout<<s.stk[i]<<" ";
        cout<<endl;
    }
    else
        cout<<"Stack is empty"<<endl;
}
int main()
{
    int ch, a;
    do
    {
        cout<<"Enter: \n 1 - To push an element \n 2 - To pop an element \n 3 - To view the stack \n 4 - To search a value \n 5 - To exit"<<endl;
        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter a element:";
            cin>>a;
            push(a);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout<<"Enter a number to search:";
            cin>>a;
            searchVal(a);
            break;
        case 5:
            break;
        default:
            cout<<"INVALID CHOICE"<<endl;;
        }
    }while(ch!=5);
    return 0;
}
