/*
Write C++ program using STL to add binary numbers (assume one bit as one number); use
STL stack.
*/
#include<stack>
#include<iostream>
using namespace std;

int main()
{
     stack<int>A;
     stack<int>B;
     stack<int>C;
     char first[10], sec[10];
     int a=0,b=0;
     
     cout<<"\n Enter the first binary number";
     cin>>first;
     for(int i=0;first[i]!='\0';i++)
     {
          if(first[i]=='0')
          {
              A.push(0);
          }
          else
          {
              A.push(1);
          }
    }
    
    cout<<"\n Enter the second binary number";
    cin>>sec;
    for(int i=0;sec[i]!='\0';i++)
    {
           if(sec[i]=='0')
           {
                 B.push(0);
            }
            else
            {
                 B.push(1);
            }
       }
       
       
       int carry=0;
       while(!A.empty() || !B.empty())
       {
            int a=0,b=0;
            if(!A.empty())
            {
              a=A.top();
              A.pop();
            }
            if(!B.empty())
            {
                b=B.top();
                B.pop();
             }
             
             int sum=carry+a+b;
             C.push(sum%2);
             carry=sum/2;
         }
         
         if(carry==1)
        C.push(carry);
        cout<<"\n Addition of two binary numbers is :";
        while(!C.empty())
        {
            cout<<C.top();
            C.pop();
        }
        cout<<"endl";
        
        return 0;
   }

/*
-------------------OUTPUT--------------------------
 Enter the first binary number
1000

 Enter the second binary number
0111

 Addition of two binary numbers is :1111
*/
