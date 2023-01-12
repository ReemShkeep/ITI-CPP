#include <iostream>
using namespace std;

// point
class Point{

private:
    int x;
    int y;

public:

//constructor
    Point();
    Point(int Num1, int Num2){

        x = Num1;
        y = Num2;
        cout<<"This is Point"<<endl;
    };

    ~Point(){

        cout<<"This is Destructor Point"<<endl;
    }

//prototype for stand alone function
    void setx(int Num1);
    void sety(int Num2);
    int getx();
    int gety();


};

//stand alone funtions
void Point::setx(int Num1){

    x = Num1;

}

void Point::sety(int Num2){

    y = Num2;

}

int Point::getx(){

    return x;

}

int Point::gety(){

    return y;

}

///////////////////////////////////////////////////////////////

// Line
class Line{

private:

    Point start;
    Point eNd;

public:

//constructor
    Line() : start(), eNd()
    {
        cout<<"This is Default Constructor."<<endl;
    }

    Line(int x1, int y1, int x2, int y2) : start(x1, y1), eNd(x2, y2)
    {
        cout<<"This is Double Constructor (Line)."<<endl;
        cout<<"This is Line."<<endl;
    }

    ~Line(){

        cout<<"This is Destructor Line"<<endl;
    }
/*
    void draw()
    {
        line(start.getx(), start.gety(), eNd.getx(), eNd.gety());
    }
*/

};


///////////////////////////////////////////////////////////////

//rectangle
class Rect{

private:

    Point rec;
    Point re;

public:

//constructor
    Rect() : rec(), re()
    {
        cout<<"This is Default Constructor."<<endl;
    }

    Rect(int x1, int y1, int x2, int y2) : rec(x1, y1), re(x2, y2)
    {
        cout<<"This is Double Constructor (Rect)."<<endl;
        cout<<"This is Rect."<<endl;
    }

    ~Rect(){

        cout<<"This is Destructor (Rect)"<<endl;
    }

/*
    void draw()
    {
        rectangle(start.getx(), start.gety(), eNd.getx(), eNd.gety());
    }
*/
};

///////////////////////////////////////////////////

//circle
class Circle{

private:

    Point center;
    int radius;

public:

//constructor
    Circle() : center()
    {
        radius = 0;
        cout<<"This is Default Constructor (Circle)."<<endl;
    }

    Circle(int Num1, int Num2, int rad) : center(Num1, Num2)
    {
        radius = rad;
        cout<<"This is Double Constructor (Circle)."<<endl;
        cout<<"This is Circle."<<endl;
    }

    ~Circle(){

        cout<<"This is Destructor (Circle)"<<endl;
    }

/*
    void draw()
    {
        circle(center.getx(), center.gety, radius);
    }
*/

};

/////////////////////////////////////////////////////////////////

//picture
class Picture{

private:

    int l_num;
    int r_num;
    int c_num;
// to refer other classes
    Line *ptr_line;
    Rect *ptr_rect;
    Circle *ptr_cir;


public:

//constructor
// when print default constructor , don't use ();
    Picture()
    {
        int l_num = 0;
        int r_num = 0;
        int c_num = 0;
        Line *ptr_line = NULL;
        Rect *ptr_rect = NULL;
        Circle *ptr_cir = NULL;
        cout<<"This is Default Constructor (Picture)."<<endl;
    }

    Picture(int line_n1, int rect_n2, int cir_n3, Line *l, Rect *r, Circle *c)
    {
        int l_num = line_n1;
        int r_num = rect_n2;
        int c_num = cir_n3;
        Line *ptr_line = l;
        Rect *ptr_rect = r;
        Circle *ptr_cir = c;
        cout<<"This is Double Constructor (Picture)."<<endl;
        cout<<"This is Circle."<<endl;
    }

    ~Picture(){

        cout<<"This is Destructor (Picture)"<<endl;
    }
// prototype
    void setLine(int, Line *);
    void setRect(int, Rect *);
    void setCircle(int, Circle *);
};

void Picture::setLine(int array_l, Line *ptr_l){

    l_num = array_l;
    ptr_line = ptr_l;
};

void Picture::setRect(int array_r, Rect *ptr_r){

    r_num = array_r;
    ptr_rect = ptr_r;

}

void Picture::setCircle(int array_c, Circle *ptr_c){

    c_num = array_c;
    ptr_cir = ptr_c;

}

int main()
{
    cout << "Hello" << endl;
/*
    cout<<endl;
    cout<<endl;
    Line l1(1, 2, 3, 4);
    cout<<endl;
    Rect r1(1, 2, 3, 4);
    cout<<endl;
    Circle c1(1, 2, 3.5);
    cout<<endl;
    Picture p1;
*/

    cout<<endl;
    Picture p2;
    cout<<endl;
    Line arr_li[2]={Line(1, 2, 3, 4), Line(5, 6, 7, 8)};
    Rect arr_re[3]={Rect(11, 12, 13, 14), Rect(15, 16, 17, 18), Rect(15, 16, 17, 18)};
    Circle arr_cir[4]={Circle(21, 22, 23), Circle(24, 25, 26), Circle(27, 28, 29), Circle(30, 31, 32)};
    cout<<endl;
    cout<<endl;
    p2.setLine(2, arr_li);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    p2.setRect(3, arr_re);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    p2.setCircle(4, arr_cir);






    return 0;
}