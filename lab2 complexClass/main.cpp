#include <iostream>


    using namespace std;
    
    class complexNo
    {
    private:
    
        float real;
        float imag;
    
    public:
        complexNo()
        {
            real = 0;
            imag = 0;
        };
    
        complexNo(float x)
        {
            real = x;
            imag = x;
        };
    
        complexNo(float r, float i)
        {
            real = r;
            imag = i;
        };
    
        ~complexNo()
        {
            cout<<"complexNo has been dropped"<<endl;
        };
    
        void setReal(float r)
        {
            real = r;
        };
    
        void setImag(float i)
        {
            imag = i;
        };
    
        void setcomplexNo(float r, float i)
        {
            real = r;
            imag = i;
        };
    
    
        float getReal()
        {
            float r = real;
            return r;
        };
    
        float getImag()
        {
            float i = imag;
            return i;
        };
    
        complexNo add(complexNo b)
        {
            complexNo temp;
            temp.real=real+b.real;
            temp.imag=imag+b.imag;
            return temp;
        };
    
        complexNo sub(complexNo b)
        {
            complexNo temp;
            temp.real=real-b.real;
            temp.imag=imag-b.imag;
            return temp;
        };
    
        void printcomplexNot()
        {
            if(imag<0)
                cout<<real<<"-"<<abs(imag)<<"i"<<endl;
            else if (imag>0)
                cout<<real<<"+"<<abs(imag)<<"i"<<endl;
            else
                cout<<real<<endl;
        };
    
    };
    
    
    int main()
    {
        complexNo comp1(1), comp2(1,2), resultComp;


//        if you want to print themm
        
//        comp1.printcomplexNot();
//        comp2.printcomplexNot();
    
        float temp, temp1, temp2;
    
        cout << "enter your 1st real value: " << endl;
        cin >> temp1;
    
        cout << "enter your 1st imaginary value: " << endl;
        cin >> temp2;
    
        comp1.setcomplexNo(temp1, temp2);
    
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

