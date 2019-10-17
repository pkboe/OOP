/***********************Problem Statement******************************************
Assignment no:GroupB:15
Write a menu driven program that will create a data file containing the list of telephone numbers in the following form
John 23456 
Ahmed 9876
........... .........
Use a class object to store each set of data, access the file created and implement the following tasks
I. Determine the telephone number of specified person
II. Determine the name if telephone number is known
III. Update the telephone number, whenever there is a change.

*******************************************************************/

#include<iostream>              //invoke standard input/output libraries
#include<fstream>               //invokes standard classes functions to read/write from/to the file
#include<string.h>               //invokes standard string libraries
#include<iomanip>             //invokes library functions to perform input/output manipulations
using namespace std;            //invokes standard library functions

class person
{                                                  //creation of class
    public:                                   //use of public access specifier
        char name[10];                //declaration of variables
        int phno;
        void input_data()            //creation of function
        {
            cout<<"\nEnter Name: ";                         //definition of function
            cin>>name;
            cout<<"\nEnter telephone number: ";
            cin>>phno;
        }                                   //termination of function
        void put_data()
        {                                                                                                //function definition
           cout<<setw(20)<<name<<setw(10)<<phno<<endl;             //setw() function allows i/o manipulations
        }
};                                              //termination of class

int main()
{                                                              //opening of main() function
    person rec;                                                //creating object
    int phone, pos, ch, offset, i;                            //declaration of int  variables
    char nm[10];
    char ans;                                                     //declaration of char variables
    fstream fp;                                                   //creating object of class fstream
    ifstream in;                                                  //creating object of class ifstream
    ofstream out;                                                //creating object of class ofstream
    do
    {                                                          //opening of do-while loop
         cout<<"\n\t\tMain Menu";                    //display menu
         cout<<"\n1.Read file\n2.Write file";
         cout<<"\n3.Determine name if telephone no. is specified";
         cout<<"\n4.Determine telephone no. if name is specified";
         cout<<"\n5.Update telephone number";
         cout<<"\nEnter your choice: ";
         cin>>ch;                                                 //read choice
         switch(ch)
         {                                                                //opening of switch case
             case 1 :
                     in.open("test.txt", ios::in | ios::binary);             //open file in integer & binary mode
                     cout<<"\nThe contents of file are: ";                //displaying file contents
                  while(in.read((char *)&rec, sizeof(rec)))         //standard read function read(memory block, size block)
                     {   
                         rec.put_data();                                           //function call
                     }
                     in.close();                                                       //file closing function
                     break;
                   
              case 2 :
                     rec.input_data();                                  //function call
                    // char ch;
                     //cin.get(ch);                                          //call get()
                     out.open("test.txt", ios::out | ios::app | ios::binary );        //open file in binary mode
                     out.write((char *)&rec, sizeof(rec));            //standard write function write(memory block, size block)
                     out.close();                                                       //file closing function
                     break;
                   
              case 3  :
                     cout<<"\nEnter telephone no.: ";
                     cin>>phone;                                                   //read phone
                     fp.open("test.txt", ios::ate | ios::in | ios::out | ios:: binary);     //open file in int & binary mode
                     fp.seekg(0, ios::beg);                                    //seekg() used to set the offset & refernce pointer
                                                                          //here offset is 0 & reference pointer points to the beginning
                     pos=-1; i=0;
                    while(fp.read((char *)&rec, sizeof(rec)))   //standard read function    read(memory block, size block)
                     {                                                                            //opening of while loop
                          if(phone==rec.phno)
                          {                                                                      //opening of if statement
                              pos=i;
                              break;
                          }                                                                     //closing of if statement
                          i++;
                    }                                                                          //termination of while loop
                    offset=pos*sizeof(rec);                                    //setting of offset
                    fp.seekg(offset);                          //seekp() used to get pointer of specific location for writing into file
                    cout<<"offset val"<<offset;
                    fp.read((char *)&rec, sizeof(rec));                 //standard read function    read(memory block, size block)
                    cout<<"\nName is: "<<rec.name;               //display name
                    fp.close();                                                          //file closing function
                    break; 
                   
              case 4 :
                     cout<<"\nEnter name: ";
                     cin>>nm;                                                              //read nm
                     fp.open("test.txt", ios::ate | ios::in | ios::out | ios:: binary);    //open file in int & binary mode
                     fp.seekg(0, ios::beg);                                            //seekg() used to set the offset & reference pointer
                                                                            //here offset is 0 & reference pointer points to the beginning
                     pos=-1; i=0;
                     while(fp.read((char *)&rec, sizeof(rec)))      //standard read function    read(memory block, size block)
                     {                                                                      //opening of while loop
                          if((strcmp(nm,rec.name))==0)
                          {                                                                            //opening of if statement
                              pos=i;
                              break;
                          }                                                                          //closing of if statement
                          i++;
                    }                                                                              //termination of while loop
                    offset=pos*sizeof(rec);                                         //setting of offset
                    fp.seekg(offset);                            //seekp() used to get pointer of specific location for writing into file
                    fp.read((char *)&rec, sizeof(rec));                 
                    cout<<"\nTelephone number is: "<<rec.phno;
                    fp.close();                                                                  //closing of file
                    break; 
                   
              case 5 :
                     cout<<"\nEnter name: "; 
                     cin>>nm;                                                            //read nm
                     fp.open("test.txt", ios::ate | ios::in | ios::out | ios:: binary);     //open file in int & binary mode
                     fp.seekg(0, ios::beg);                             //seekg() used to get pointer of specific location 
                                                                                     //ios::beg is flag for beginning location
                     pos=-1; i=0;
                     while(fp.read((char *)&rec, sizeof(rec)))      //standard read function read(memory block, size block) 
                     {
                          if((strcmp(nm,rec.name))==0)                      //compare name using string function
                          {                                                                      //opening of if statement
                              pos=i;
                              break;
                          }                                                                //closing of if statement
                          i++;
                    }                                                                    //closing of while loop
                    offset=pos*sizeof(rec);                              //setting of offset
                    fp.seekg(offset);                               //seekp() used to get pointer of specific location for writing into file
                    cout<<"\nCurrent phone no.: "<<rec.phno;
                    cout<<"\nEnter new phone no.: ";
                    cin>>phone;                                         //read new phone no.
                    rec.phno=phone;
                    fp.write((char *)&rec, sizeof(rec))<<flush;           //flush is used to clear the previous data
                    cout<<"\nRecord is updated";
                    fp.seekg(0);                                                //seekg() used to get pointer of specific location 
                    while(fp.read((char *)&rec, sizeof(rec)))      //standard read function read(memory block, size block)
                    {
                        rec.put_data();                   //function call
                    }
                    fp.close();                                //file closing function
                    break;                               
           }                                                         //termination of switch case
           cout<<"\nDo you want to continue ? ";
           cin>>ans;                                       //read ans
       }while(ans=='y' || ans =='Y');        //termination of do-while loop
       return 0;
  } 
/*
--------------------OUTPUT----------------------
		Main Menu
1.Read file
2.Write file
3.Determine name if telephone no. is specified
4.Determine telephone no. if name is specified
5.Update telephone number
Enter your choice: 
1

The contents of file are: 
Do you want to continue ? y

		Main Menu
1.Read file
2.Write file
3.Determine name if telephone no. is specified
4.Determine telephone no. if name is specified
5.Update telephone number
Enter your choice: 2

Enter Name: aaa

Enter telephone number: 11

Do you want to continue ? y

		Main Menu
1.Read file
2.Write file
3.Determine name if telephone no. is specified
4.Determine telephone no. if name is specified
5.Update telephone number
Enter your choice: 2

Enter Name: bbb

Enter telephone number: 22

Do you want to continue ? y

		Main Menu
1.Read file
2.Write file
3.Determine name if telephone no. is specified
4.Determine telephone no. if name is specified
5.Update telephone number
Enter your choice: 3

Enter telephone no.: 11 
offset val0
Name is: aaa
Do you want to continue ? y

		Main Menu
1.Read file
2.Write file
3.Determine name if telephone no. is specified
4.Determine telephone no. if name is specified
5.Update telephone number
Enter your choice: 5

Enter name: bbb

Current phone no.: 22
Enter new phone no.: 88

Record is updated                 aaa        11
                 bbb        88

*/
