/*Create a class template to represent a generic vector. Include following member functions:
   1.To create the vector.                          2.To modify the value of a given element.
   3.To multiply by a scalar value.                 4.To display the vector in the form (10,20,30,...).*/
#include<iostream>
using namespace std;
template <class T>
class vector
 {
  T v[50];
  int j=0;
  public:
  void create();
  void modify();
  void multiply();
  void display();
 };
template <class T>
void vector<T>::create()
 {
  int i=0;
  cout<<"Enter Total Number of Elements"<<endl;
  cin>>j;
  cout<<"Enter Elements for Vector"<<endl;
  for(i=0;i<j;i++)
   {
    cin>>v[i];
   }
 }
template <class T>
void vector<T>::modify()
 {
  int i=0;
  char k;
  T val;
  char ans;
  cout<<"Do You wish to change any values Y/N"<<endl;
  cin>>k;
  if(k=='y' || k=='Y')
   {
    do
    {
     cout<<"Enter Index and New Value"<<endl;
     cin>>i>>val;
     v[i]=val;
     cout<<"Do You want to change any other Values Y/N"<<endl;
     cin>>ans;
    }while(ans=='y'||ans=='Y');
   }
 }
template <class T >
void vector<T>::multiply()
 {
  int i=0,scaler=0;
  char ans;
  cout<<"Do You want to multiply any Scaler Value Y/N"<<endl;
  cin>>ans;
  if(ans=='y'||ans=='Y')
   {
    cout<<"Enter a Scaler Value for multiplication"<<endl;
    cin>>scaler;
    for(i=0;i<j;i++)
     {
      v[i]=v[i]*scaler;
     }
   }
 }
template<class T>
void vector<T>::display()
 {
  int i=0;
  cout<<"Size of Vector is : "<<j<<endl;
  cout<<"Your Final Vector is :"<<endl;
  cout<<"(";
  for(i=0;i<j;i++)
   {
    cout<<v[i]<<" , ";
   }
  cout<<")"<<endl;
 }
int main()
 {
  vector<int> obj;
  char an;
  do
   {
    obj.create();
    obj.modify();
    obj.multiply();
    obj.display();
    cout<<"Do You wish to perform it again Y/N"<<endl;
    cin>>an;
   }while(an=='y'||an=='Y');
  return 0;
 }



/*

-----------------OUTPUT------------------
Enter Total Number of Elements
5
Enter Elements for Vector
10
20
30
40
50
Do You wish to change any values Y/N
y
Enter Index and New Value
2 68
Do You want to change any other Values Y/N
n
Do You want to multiply any Scaler Value Y/N
y
Enter a Scaler Value for multiplication
7
Size of Vector is : 5
Your Final Vector is :
(70 , 140 , 476 , 280 , 350 , )
Do You wish to perform it again Y/N
n
*/
