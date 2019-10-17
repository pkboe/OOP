/*
Write C++ program using STL for Dqueue (Double ended queue)
*/

#include<iostream>
#include<deque>
using namespace std;
int main()
 {
   deque<int> dq;
   deque<int> :: iterator q;
   int value , choice;
   char ch;
   do
    {
      cout<<"**********Deque Menu**********"<<endl;
      cout<<"1.Insert at First"<<endl;
      cout<<"2.Insert at End"<<endl;
      cout<<"3.Delete First Element"<<endl;
      cout<<"4.Delete Last Element"<<endl;
      cout<<"5.Show First Element"<<endl;
      cout<<"6.Show Last Element"<<endl;
      cout<<"7.Show Whole Deque"<<endl;
      cout<<"Enter choice"<<endl;
      cin>>choice;
      switch(choice)
       {
         case 1:
                      cout<<"Enter Element to be  Inserted"<<endl;
                      cin>>value;
                      dq.push_front(value);
                      cout<<"Value Inserted at Front : "<<dq.front()<<endl;
                      break;
         case 2:
                      cout<<"Enter Element to be Inserted"<<endl;
                      cin>>value;
                      dq.push_back(value);
                      cout<<"Value Inserted at Front : "<<dq.back()<<endl;
                      break;
         case 3:
                      cout<<"Element to be Deleted at Front is : "<<dq.front()<<endl;
                      dq.pop_front();
                      break;
         case 4:
                      cout<<"Element to be Deleted at End is : "<<dq.back()<<endl;
                      dq.pop_back();
                      break;
         case 5:
                      cout<<"First Element is : "<<dq.front()<<endl;
                      break;
         case 6:
                      cout<<"Last Element is : "<<dq.back()<<endl;
                      break;
         case 7:
                      cout<<"Your Deque is : "<<endl<<endl;
                      for(q=dq.begin();q<dq.end();q++)
                       {
                         cout<<"["<<*q<<"]";
                       }
                      cout<<"\n";
                      break;
       }
      cout<<"Do You Wish to Try Again (Y/N)"<<endl;
      cin>>ch;
    }while(ch=='Y'||ch=='y');
   return 0;
 }


/*

------------------OUTPUT-------------------
**********Deque Menu**********
1.Insert at First
2.Insert at End
3.Delete First Element
4.Delete Last Element
5.Show First Element
6.Show Last Element
7.Show Whole Deque
Enter choice
1
Enter Element to be  Inserted
20
Value Inserted at Front : 20

Do You Wish to Try Again (Y/N)
y
**********Deque Menu**********
1.Insert at First
2.Insert at End
3.Delete First Element
4.Delete Last Element
5.Show First Element
6.Show Last Element
7.Show Whole Deque
Enter choice
1
Enter Element to be  Inserted
45
Value Inserted at Front : 45

Do You Wish to Try Again (Y/N)
y
**********Deque Menu**********
1.Insert at First
2.Insert at End
3.Delete First Element
4.Delete Last Element
5.Show First Element
6.Show Last Element
7.Show Whole Deque
Enter choice
2
Enter Element to be Inserted
56
Value Inserted at Front : 56

Do You Wish to Try Again (Y/N)
y
**********Deque Menu**********
1.Insert at First
2.Insert at End
3.Delete First Element
4.Delete Last Element
5.Show First Element
6.Show Last Element
7.Show Whole Deque
Enter choice
1
Enter Element to be  Inserted
23
Value Inserted at Front : 23

Do You Wish to Try Again (Y/N)
y
**********Deque Menu**********
1.Insert at First
2.Insert at End
3.Delete First Element
4.Delete Last Element
5.Show First Element
6.Show Last Element
7.Show Whole Deque
Enter choice
2
Enter Element to be Inserted
54
Value Inserted at Front : 54

Do You Wish to Try Again (Y/N)
y
**********Deque Menu**********
1.Insert at First
2.Insert at End
3.Delete First Element
4.Delete Last Element
5.Show First Element
6.Show Last Element
7.Show Whole Deque
Enter choice
1
Enter Element to be  Inserted
89
Value Inserted at Front : 89

Do You Wish to Try Again (Y/N)
y
**********Deque Menu**********
1.Insert at First
2.Insert at End
3.Delete First Element
4.Delete Last Element
5.Show First Element
6.Show Last Element
7.Show Whole Deque
Enter choice
2
Enter Element to be Inserted
45
Value Inserted at Front : 45

Do You Wish to Try Again (Y/N)
y
**********Deque Menu**********
1.Insert at First
2.Insert at End
3.Delete First Element
4.Delete Last Element
5.Show First Element
6.Show Last Element
7.Show Whole Deque
Enter choice
7
Your Deque is : 

[89][23][45][20][56][54][45]
Do You Wish to Try Again (Y/N)
n
*/
