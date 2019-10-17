/*
Write a function in C++ to count and display the number of lines not starting with
alphabet 'A' present in a text file "STORY.TXT".
Example:
If the file "STORY.TXT" contains the following lines,
The roses are red.
A girl is playing there.
There is a playground.
An aeroplane is in the sky.
Numbers are not allowed in the password.
The function should display the output as 3
*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("test.txt");
    char str[60];
    int count1=0;
    int count2=0;
    while(!fin.eof())
      {
         fin.getline(str,60);
         if(str[0]!='A')
           {
             count1++;
           }
         else if(str[0]=='A' && str[1]==' ')
           {
             count2++;
            }
     }
   cout<<"the lines not starting with A are:"<<count1<<endl;
   cout<<"the lines starting with A are:"<<count2<<endl;
   return 0;
}
/*
Lines in txt File are :
  The roses are red.
  A girl is playing there.
  There is a playground.
  An aeroplane is in the sky.
  Numbers are not allowed in the password.
  The function should display the output as 3.
*/

/*
----------------OUTPUT-----------------
 the lines not starting with A are:5
the lines starting with A are:1

*/
