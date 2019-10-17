/*
  Create employee bio-data using following classes i) Personal record ii)Professional record 
  iii)Academic record Assume appropriate data members and member function to accept required
  data & print bio-data. Create bio-data using multiple inheritance using C++.
*/



/*Enter All Inputs Without Giving Spaces*/
#include<iostream>
using namespace std;
class personal
{
protected:
char name[20];
char birthdate[10];
char gender;
char address[50];
public:
void display();
};
class academic
{
protected:
char course[10];
int marks;
float percent;
char grade[10];
public:
void display1();
};
class professional
{
protected:
int exp;
char organization[20];
char proname[10];
char prodetails[30];
 public:
 void display2();
};
class biodata:public personal , public academic , public professional
{
public:
void display3();
};
void personal::display()
{
cout<<"Enter Name"<<endl;
cin>>name;
cout<<"Birth date(dd/mm/yyyy):"<<endl;
cin>>birthdate;
cout<<"Gender(M/F/T):"<<endl;
cin>>gender;
cout<<"Address:"<<endl;
cin>>address;
}
void academic::display1()
{
cout<<"Last Course Passed:"<<endl;
cin>>course;
cout<<"Total Marks Obtained:"<<endl;
cin>>marks;
cout<<"Percentage:"<<endl;
cin>>percent;
cout<<"Passing Class(1st/2nd/Distinction):"<<endl;
cin>>grade;
}
void professional::display2()
{
cout<<"Years of Experience:"<<endl;
cin>>exp;
cout<<"Organization Name:"<<endl;
cin>>organization;
cout<<"Project Name:"<<endl;
cin>>proname;
cout<<"Project Details:"<<endl;
cin>>prodetails;
}
void biodata::display3()
{
cout<<"---------------------------------------Biodata-------------------------------------"<<endl;
cout<<endl;
cout<<"---------------------------------Personal--------------------------------"<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Birth Date:"<<birthdate<<endl;
cout<<"Gender:"<<gender<<endl;
cout<<"Address:"<<address<<endl;
cout<<endl;
cout<<"---------------------------------Academic-------------------------------"<<endl;
cout<<"Course Name:"<<course<<endl;
cout<<"Marks:"<<marks<<endl;
cout<<"Percentage:"<<percent<<endl;
cout<<"Passing Class:"<<grade<<endl;
cout<<endl;
cout<<"---------------------------------Professional-------------------------------"<<endl;
cout<<"Years of Experience:"<<exp<<endl;
cout<<"Organization Name:"<<organization<<endl;
cout<<"Project Name:"<<proname<<endl;
cout<<"Project Details:"<<prodetails<<endl;
cout<<endl;
}
int main()
{
biodata b;
b.display();
b.display1();
b.display2();
b.display3();
return 0;
}


/*
------------------OUTPUT-----------------

Enter Name
Rajat
Birth date(dd/mm/yyyy):
04102019
Gender(M/F/T):
M
Address:
ModelColony
Last Course Passed:
B-Tech
Total Marks Obtained:
400
Percentage:
80.96
Passing Class(1st/2nd/Distinction):
1
Years of Experience:
10
Organization Name:
GESCOE
Project Name:
OOPL   
Project Details:
AllOOPLprograms
---------------------------------------Biodata----------------------------------

---------------------------------Personal--------------------------------
Name:Rajat
Birth Date:04102019
Gender:M
Address:ModelColony

---------------------------------Academic-------------------------------
Course Name:B-Tech
Marks:400
Percentage:80.96
Passing Class:1

---------------------------------Professional-------------------------------
Years of Experience:10
Organization Name:GESCOE
Project Name:OOPL
Project Details:AllOOPLprograms

*/
