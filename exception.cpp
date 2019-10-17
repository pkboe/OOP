/*Crete User defined exception to check the following conditions and throw the exception if the criterion does not meet.
                 a.User has age between 18 and 55 : Yes /NO 
                 b.User stays has income between Rs. 50,000 –Rs. 1,00,000 per month
                 c.User stays in Pune/ Mumbai/ Bangalore / Chennai
                d.User has 4-wheeler 
    Accept age, Income, City, Vehicle from the user and check for the conditions mentionedabove.
    If any of the condition not met then throw the exception. */
#include<iostream>
#include<stdexcept>
#include<typeinfo>
#include<string>
#include<cstring>
using namespace std;
int main()
 {
  int age;
  char car[5];
  double income;
  char city[10];
  cout<<"Enter Your Age"<<endl;
  cin>>age;
  try   
   {
    if(age>18||age<55)
    cout<<"Age is : "<<age<<endl;
    else
    throw age; 
   }
  catch(int samruddhi)
   {
    cout<<"Entered Age is not in the range of 18-55"<<endl;
   }
  cout<<"Enter Your Income"<<endl;
  cin>>income;
  try
   {
    if(income<50000||income>100000)
    throw income;
    else
    cout<<"Income per month is : "<<income<<endl;
   }
  catch(double i)
   {
    cout<<"Entered Income is not in the range of 50,000-1,00,000"<<endl;
   }
  cout<<"Enter Your City Name"<<endl;
  cin>>city;
  try
   {
    if(strcmp(city , "Pune") &&  strcmp(city , "Bangalore") &&  strcmp(city , "Chennai") &&  strcmp(city , "Mumbai") )
    throw city;
    else
    cout<<"City is : "<<city<<endl;
   }
  catch(char a[])
   {
    cout<<"Only Enter Pune or Mumbai or Bangalore or Chennai City "<<endl;
   }
  cout<<"Do You Own a Car Yes/No?"<<endl;
  cin>>car;
   try
   {
    if(strcmp(car,"no")==0)
    throw car;
    else
    cout<<"You Own a Car "<<endl;
   }
  catch(char i[])
   {
    cout<<"You Need to have a Car"<<endl;
   }
  return 0;
 }


/*

------------------OUTPUT-----------------
Enter Your Age
19
Age is : 19
Enter Your Income
50000
Income per month is : 50000
Enter Your City Name
Mumbai
City is : Mumbai
Do You Own a Car Yes/No?
y
You Own a Car 

-------------------------------------
EXAMPLE 2
Enter Your Age
17
Entered Age is not in the range of 18-55
Enter Your Income
20000
Entered Income is not in the range of 50,000-1,00,000
Enter Your City Name
Nashik
Only Enter Pune or Mumbai or Bangalore or Chennai City 
Do You Own a Car Yes/No?
no
You Need to have a Car


*/
