#include <iostream>

using namespace std;

class Stack
{
private:

    int Size;
    int tos;
    int* st;

    static int counter;

public:

    Stack()
    {
        tos = 0;
        Size = 0;
        st = NULL;
        counter++;
        cout<<"Stack "<<counter<<" has been created"<<endl;
    };

    Stack(int s)
    {
        tos = 0;
        Size = s;
        st = new int[Size];
        counter++;
        cout<<"Stack "<<counter<<" has been created"<<endl;
    };

    ~Stack()
    {
        delete[] st;
        counter--;
        cout<<"Stack has been discarded. Total is "<<counter<<endl;
    };

    void setSize(int s)
    {
        Size = s;
        cout<<"Stack size was changed"<<endl;
    }

    void push(int x)
    {
        if (st == NULL)
        {
            st = new int[Size];
        }
        if(tos == Size)
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
            tos++;
            st[tos] = x;
            cout<<"Item was pushed"<<endl;
        }
    };

    int pop()
    {
        int top = -1;
        if(tos == 0)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            top = st[tos];
            tos--;
        }
        return top;
    };

    friend int getCounter();

};

int Stack::counter = 0;

int getCounter()
{
    return Stack::counter;
};

int main()
{
    cout<<getCounter()<<endl;
    // ps :: haven't declared anything yet

    Stack s1(2);

    s1.push(5);
    s1.push(14);
    s1.push(20);

    cout<<s1.pop()<<endl;// ps ::pops 14

    Stack s2;// ps ::allocated

    s2.push(3);// ps ::stack is full

    s2.setSize(5);

    s2.push(3);

    cout<<getCounter()<<endl;

    cout<<"Gimme size of s3:"<<endl;
    int sz3;
    cin>>sz3;

    Stack s3(sz3);

    int i = 0;

    while(i<sz3)
    {
        i++;
        s3.push(i);
    }

    cout<<"Let's count down!"<<endl;

    i = 0;

    while(i<sz3)
    {
        cout<<s3.pop()<<endl;
        i++;
    }

    cout << "process's been ended " << endl;

    return 0;
}