/*Write a function template selection Sort. Write a program that 
    inputs, sorts and outputs an integerarray and a float array.*/
#include<iostream>
using namespace std;
template <class T>
void Selection(T a[20] , int n)
 {
   int i=0,j=0;
   T temp;
   int min;
   for(i=0;i<n;i++)
    {
      min=i;
      for(j=i+1;j<n;j++)
       {
         if(a[j]<a[min])
          {
            min=j;
          }
       }
      temp=a[i];
      a[i]=a[min];
      a[min]=temp; 
    }
   cout<<"Sorted List is :\n";
   for(i=0;i<n;i++)
    {
      cout<<a[i]<<"   ";
    }
 }
int main()
 {
   int k=0 , h=0;
   int g=0 , f=0;
   int m[20];
   float b[20];
   cout<<"**********************************Selection Sort********************************\n";
   cout<<"***************************Handling of Integer Numbers**************************\n";
   cout<<"Enter No. of Elements\n";
   cin>>k;
   cout<<"Enter Elements\n";
   for(g=0;g<k;g++)
    {
      cin>>m[g];
      cout<<"\n";
    }
   Selection(m , k);
   cout<<"\n";
   cout<<"***************************Handling of Float Numbers**************************\n";
   cout<<"Enter No. of Elements\n";
   cin>>h;
   cout<<"Enter Elements\n";
   for(f=0;f<h;f++)
    {
      cin>>b[f];
      cout<<"\n";
    }
   Selection(b , h);
   return 0;
 }


/*

-------------------OUTPUT-------------------
**********************************Selection Sort********************************
***************************Handling of Integer Numbers**************************
Enter No. of Elements
5
Enter Elements
23

56

45

12

37

Sorted List is :
12   23   37   45   56   
***************************Handling of Float Numbers**************************
Enter No. of Elements
6
Enter Elements
21.33

16.43

97.42

11.4

54.66

465.4

Sorted List is :
11.4   16.43   21.33   54.66   97.42   465.4  
*/
