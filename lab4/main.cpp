#include <iostream>

using namespace std;

class Main {


private:

    float Num1;
    float Num2;

// will hide because it's a private
public:


    Main(){

        cout<<"This is a default Complex, zero argument"<<endl;

    }


//constructor

    Main(int num1){

        cout<<"This is a Single Constructor, one argument"<<endl;

    }


    Main(float num1, float num2){

        Num1 = num1;
        Num2 = num2;
        cout<<"This is a Double Constructor, two argument"<<endl;

    }


    ~Main(){

        cout<<"Object Destructor, delete"<<endl;

    }


// functions

    void setNum1(int x){

        Num1 = x;

    }

    void setNum2(int y){

        Num2 = y;

    }

    int getNum1(){

        return Num1;

    }

    int getNum2(){

        return Num2;

    }

    Main add(Main obj)
    {

        Main obj1;
        obj1.Num1 = Num1 + obj.Num1;
        obj1.Num2 = Num2 + obj.Num2;
        return obj1;

    }

    Main subtract(Main obj)
    {

        Main obj1;
        obj1.Num1 = Num1 - obj.Num1;
        obj1.Num2 = Num2 - obj.Num2;
        return obj1;

    }

// c3 = comp2 + comp2
    Main operator + (Main comp2){

        Main comp1;
        comp1.Num1= this-> Num1 + comp2.Num1;
        comp1.Num2= this-> Num2 + comp2.Num2;
        return comp1;
    }

// c3 = comp1 - comp2
    Main operator - (Main comp2){

        Main comp1;
        comp1.Num1= Num1 - comp2.Num1;
        comp1.Num2= Num2 - comp2.Num2;
        return comp1;
    }

// c3 = comp1 + 5
    Main operator + (float x){

        Main comp1;
        comp1.Num1= this-> Num1 + x;
        comp1.Num2= this-> Num2 + x;
        return comp1;
    }

// c3 = comp1 - 5
    Main operator - (float x){

        Main comp1;
        comp1.Num1= Num1 - x;
        comp1.Num2= Num2 - x;
        return comp1;
    }

// c3 = 5 + comp1
    friend Main operator + (float x, Main comp2);

// c3 = comp1 - 5
    friend Main operator - (float x,Main comp2);

// comp1 = comp2
    int operator==(Main comp2){
        if(Num1 == comp2.Num1 && Num2 == comp2.Num2)
        {
            cout << "Equal" << endl;
            return 0;
        }
        else{
            cout << "NOT Equal" <<endl;
            return -1;
        }
    }

    void operator+= (Main comp2){


        this->Num1= this->Num1 + comp2.Num1;
        this->Num2= this->Num2 + comp2.Num2;
    }

//prefix
//a = ++b
    void operator++ (){
        Num1++;
    }

    void operator-- (){
        Num1 --;
    }

//postfix
//to return object before print
// a = b++
    Main operator++ (int){
        Main comp1 = *this;
        Num1 ++;
        return comp1;
    }

    Main operator-- (int){
        Main comp1 = *this;
        Num1 --;
        return comp1;
    }

    operator float(){
        return Num1;
    }

    void print()
    {
        if(Num2 < 0)
        {
            cout<<Num1<<" - "<<abs(Num2)<<" i"<<endl;
        }
        else
        {
            cout<<Num1<<" + "<<Num2<<" i"<<endl;
        }
    }

    void setComplex(float x, float y){
        Num1 = x;
        Num2 = y;

    }
    void setComplex(float x){
        Num1 = Num2 = x;

    }

};

// c3 = 5 + comp1
Main operator + (float x, Main comp2){

    Main comp1;
    comp1.Num1= comp2.Num1 + x;
    comp1.Num2= x;
    return comp1;
}

// c3 = comp1 - 5
Main operator - (float x, Main comp2){

    Main comp1;
    comp1.Num1= comp2.Num1 - x;
    comp1.Num2= x;
    return comp1;

}


int main()
{
    cout<<endl;
    Main c1(6.12,1);
    cout<<endl;
    //Main c2(2,3);
    cout<<endl;
    //Main com;
    cout<<endl;
    /*
    com =c1+c2;
    cout<<endl;
    com =c1-c2;
*/
    /*
    cout<<endl;
    com=5+c2;
    com.print();
    cout<<endl;
    com=c2+5;
    com.print();
    cout<<endl;
    com=5-2;
    com.print();
    cout<<endl;
    com=c2-5;
    com.print();
    cout<<endl;
*/

/*
    cout<<endl;
    c1==c2;
    c1.print();
    cout<<endl;
*/
/*
    cout<<endl;
    c1+=c2;
    c1.print();
    cout<<endl;
*/

/*
//prefix
    cout<<endl;
    ++c1;
    c1.print();
    cout<<endl;

    cout<<endl;
    --c1;
    c1.print();
    cout<<endl;

    cout<<endl;
    --c1;
    c1.print();
    cout<<endl;
*/
/*
//postfix
    cout<<endl;
    c1++;
    c1.print();
    cout<<endl;

    cout<<endl;
    c1--;
    c1.print();
    cout<<endl;

    cout<<endl;
    c1--;
    c1.print();
    cout<<endl;
*/

    cout<<endl;
    cout<<(float)c1<<endl;

    return 0;
}