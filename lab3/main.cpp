
#include <iostream>

using namespace std;
class Stack
{
    int tos;
    int sos;
    int * st;
    static int counter;
public:

    static int getCounter()
    {
        return counter;
    }

    Stack (int n)
    {
        sos= n;
        st=new int[sos];
        tos =0;
        counter++;
        cout<<"this is stack object number: "<<counter<<endl;
    }
    ~Stack ()
    {
        delete [] st; // delete array that st points to
        cout<<"This is the destructor"<<endl;
        counter--;
        cout<<"this is stack object number: "<<counter<<endl;
    }
    void push(int n)
    {
        if (tos == sos)
        {
            cout<<"stack is full"<<endl;
        }
        else
        {
            st[tos]=n;
            tos++;
        }
    }
    void pop()
    {
        int retVal;
        if (tos == 0)
        {
            cout<<"Stack is empty"<<endl;
            retVal = -1;
        }
        else
        {

            retVal = st[tos];
            tos--;

        }
    }
    void print()
    {
        int i=0;
        for (i=0; i<tos; i++)
        {
            cout<<st[i]<<endl;

        }
    }
    friend void viewContent( Stack x );

    Stack (Stack &z)
    {
        tos = z.tos;
        sos =z.sos;
        st = new int [sos]; // new allocation
        for( int i=0 ; i < tos ; i ++)
        {
            st[i] = z.st[i]; // only copy values
        }
        counter++;
    }
};


/*
void viewContent( Stack x ){ //this=new=x , Stack x is new object w/o constructor but by BW, and have a destructor.
int t = x.tos;
while ( t !=0){
cout<< x.st[--t]<< endl;
cout << "viewContent function call by value, this is stack object number: " <<Stack::counter<< endl;
}
}
*/

//Call by Reference
/*void viewContent( Stack &x ){
int t = x.tos;
while ( t !=0){
cout<< x.st[--t]<< endl;
cout << "viewContent function call by Reference, this is stack object number: " <<Stack::counter<< endl;
}
}
*/

//call by value + copy constructor

void viewContent( Stack x ) //stack x will call the copy constructor
{
    int t = x.tos;
    while ( t !=0)
    {
        cout<< x.st[--t]<< endl;
        cout << "viewContent function call by value + copy constructor, this is stack object number: " <<Stack::counter<< endl;
    }
}

//inizilization
int Stack::counter=0;
//main begins
int main()
{

    //5 is the default size of stack (sos)
    Stack s1(5);
    // cout<<s1.getCounter()<<endl;
    s1.push(14);
    s1.push(23);
    s1.push(2);
    s1.push(27);
    s1.push(29);
    s1.pop();
    s1.print();
    //viewContent(s1); //call by value
    //viewContent(s1); //call by Reference
    viewContent(s1); //call by value + copy constructor

    /*Stack s2(5);
    //cout<<s2.getCounter()<<endl;
    s2.push(2);
    s2.push(14);
    s2.push(23);
    s2.push(27);
    s2.push(29);
    s2.pop();
    s2.print();*/
    return 0;
}
