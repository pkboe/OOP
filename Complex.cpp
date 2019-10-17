/*
  Implement a class Complex which represents the Complex Number data type. Implement the
following operations:
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read Complex Numbers.
*/
#include<iostream>
using namespace std;
class complex
{
public:
int real , img;
complex()
{
real=0;
img=0;
}
complex operator+(complex);
complex operator*(complex);
friend istream& operator>>(istream&,complex&);
friend ostream& operator<<(ostream&,complex&);
};
complex complex::operator+(complex obj)
{
complex temp;
temp.real=real+obj.real;
temp.img=img+obj.img;
return temp;
}
complex complex::operator*(complex obj)
{
complex temp;
temp.real=real*obj.real-img*obj.img;
temp.img=real*obj.img+img*obj.real;
return temp;
}
istream& operator>>(istream& is,complex& obj)
{
is>>obj.real;
is>>obj.img;
return is;
}
ostream& operator<<(ostream& os,complex& obj)
{
os<<obj.real;
os<<"+"<<obj.img<<"i";
return os;
}
int main()
{
complex a,b,c,d,e;
cout<<"Enter First Complex No."<<endl;
cout<<"Enter Real and Img part"<<endl;
cin>>a;
cout<<"Enter Second Complex No."<<endl;
cout<<"Enter Real and Img part"<<endl;
cin>>b;
cout<<"The Arithmatic Operations are"<<endl;
c=a+b;
cout<<"Addition is"<<endl<<c;
d=a*b;
cout<<endl<<"Multiplication is"<<endl<<d<<endl;
return 0;
}



/*
----------------OUTPUT------------------
 Enter First Complex No.
Enter Real and Img part
25 23
Enter Second Complex No.
Enter Real and Img part
10 10
The Arithmatic Operations are
Addition is
35+33i
Multiplication is
20+480i

*/
