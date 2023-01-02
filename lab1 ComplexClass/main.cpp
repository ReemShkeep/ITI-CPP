#include <iostream>

using namespace std;

class complexNo
{
private:
    float real;
    float imag;
public:
    void setReal(float r);
    void setImag(float i);
    float getReal();
    float getImag();
    complexNo add(complexNo b);
    complexNo sub(complexNo b);
    void printcomplexNot();
};

void complexNo::setReal(float r)
{
    real = r;
};

void complexNo::setImag(float i)
{
    imag = i;
};

float complexNo::getReal()
{
    float r = real;
    return r;
};

float complexNo::getImag()
{
    float i = imag;
    return i;
};

void complexNo::printcomplexNot()
{
    if(imag<0)
        cout<<real<<"-"<<abs(imag)<<"i"<<endl;
    else if (imag>0)
        cout<<real<<"+"<<abs(imag)<<"i"<<endl;
    else
        cout<<real<<endl;
};

complexNo complexNo::add(complexNo b)
{
    complexNo temp;
    temp.real=real+b.real;
    temp.imag=imag+b.imag;
    return temp;
};

complexNo complexNo::sub(complexNo b)
{
    complexNo temp;
    temp.real=real-b.real;
    temp.imag=imag-b.imag;
    return temp;
};

int main()
{
    complexNo comp1, comp2, resultComp;
    float temp;

    cout << "enter your 1st real value: " << endl;
    cin >> temp;
    comp1.setReal(temp);
    cout << "enter your 1st imaginary value: " << endl;
    cin >> temp;
    comp1.setImag(temp);
    cout << "enter your 2nd real value: " << endl;
    cin >> temp;
    comp2.setReal(temp);
    cout << "enter your 2nd imaginary value: " << endl;
    cin >> temp;
    comp2.setImag(temp);

    comp1.printcomplexNot();
    comp2.printcomplexNot();

    resultComp = comp1.add(comp2);
    resultComp.printcomplexNot();

    resultComp = comp1.sub(comp2);
    resultComp.printcomplexNot();

    return 0;
}