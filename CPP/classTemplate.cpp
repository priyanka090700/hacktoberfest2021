#include<iostream>

using namespace std;

template<class T>
class Airthmatic{
    private:
        T a;
        T b;

    public: 
        Airthmatic(T a, T b); 
        T add(); 
        T multiply(); 
        // output();
        ~Airthmatic(){};
};

template<class T>
Airthmatic<T>::Airthmatic(T x, T y){
    a = x;
    b = y;
}

template<class T>
T Airthmatic<T>::add(){
    return a+b;
}

template<class T>
T Airthmatic<T>::multiply(){
    return a*b;
} 

// Airthmatic::output(){
//     cout << 
// }


int main(){
    Airthmatic<int> I{2,4};
    Airthmatic<float> F{1.2, 5.0};
    cout << I.add() << endl;
    cout << I.multiply() << endl;
    cout << F.add() << endl;
    cout << F.multiply() << endl;
    return 0;
}