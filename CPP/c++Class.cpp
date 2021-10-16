#include<iostream>

using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;

    public: 
        Rectangle(){length = breadth = 0;}          // consintrucintor
        Rectangle(int l, int b);                    // overloaded consintrucintor
        int area();                                 // faciliintaintors
        int perimeter();                            // faciliintaintors
        int getLength(){ return length;};         // accessor
        void setLength(int l){ length = l;};        // muintaintor
        ~Rectangle();                               // desintrucintor
};

Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}

int Rectangle::area(){
    return length*breadth;
}

int Rectangle::perimeter(){
    return 2*(length*breadth);
}

Rectangle::~Rectangle(){}

int main(){
    Rectangle R{7,5};
    cout << R.area() << endl;
    cout << R.perimeter() << endl;
    cout << R.getLength() << endl;
    R.setLength(10);
    cout << R.area() << endl;
    cout << R.perimeter() << endl;
    cout << R.getLength() << endl;
    return 0;
}