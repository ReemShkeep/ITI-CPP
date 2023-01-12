#include <iostream>

using namespace std;
class Stack{

private:
    int top;
    int Size;
    int *st;
    static int counter;

public:

    Stack(int n=10)
    {
        top = 0;
        Size = n;
        st = new int[Size];
        counter++;
        cout<<"This is constructor of stack object with size"<<endl;
    }

    ~Stack(){
        delete[]st;
        cout<<"This is Destructor"<<endl;
    }

    int push(int num){

        int x = num;
        if(top==Size){

            cout<<"stack Full"<<endl;
        }else{

            st[top] = num;
            top++;

        }
        return x;
    }

    int pop(){

        int retValue;

        if(top==0){

            cout<<"stack Empty"<<endl;
            retValue = -1;
        }else{

            top--;
            retValue = st[top];

        }

        return retValue;
    }

    static int getcounter()
    {

        return counter;
    }

    void operator= (Stack com){

        delete[]this->st;
        this->top=com.top;
        this->Size=com.Size;
        this->st=new int [Size];
        for(int i=0;i<top;i++){

            this->st[i]=com.st[i];
        }

    }
};

int Stack::counter=0;

int main()
{
    cout << "Hello Mina bey ^^ " << endl;
    cout<<endl;
    cout<<endl;
    Stack s1(6);
    cout<<endl;
    s1.push(1);
    cout<<endl;
    s1.push(2);
    cout<<endl;
    s1.push(3);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    Stack s2(2);
    cout<<endl;
    s2=s1;
    cout<<endl;
    cout<<s2.pop()<<endl;


    return 0;
}