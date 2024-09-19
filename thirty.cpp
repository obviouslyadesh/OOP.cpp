#include<iostream>
using namespace std;

class Complex{
    private:
    int real, img;
    public:
    void input();
    void display();
    void sum(Complex c1, Complex c2);
};
void Complex::input(){
    cout<<"Enter the real and imaginary part"<<endl;
    cin>>real>>img;
}
void Complex::display(){
    cout<<"Complex Number: "<<real<<" + "<<img<<" i"<<endl;
}
void Complex::sum(Complex c1, Complex c2){
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    cout<<"Sum of Complex Numbers: "<<c3.real<<" + "<<c3.img<<" i"<<endl;
}
int main(){
    Complex c1, c2, c3;
    c1.input();
    c2.input();
    c1.display();
    c2.display();
    c3.sum(c1, c2);
    return 0;
}