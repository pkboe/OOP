/*
Write C++ program using STL for implementation of stack & queue using STL
*/
#include<iostream>
#include<queue>
#include<stack>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
stack<int> st;
queue<int> qu;
int choice, item,ch;
char yn;
Start:

cout<<"\n\t\tImplementation of Stack and Queue using STL.\n";
cout<<"\n 1) Stack\n 2)Queue\n";
cout<<"Enter your choice:";
cin>>ch;

if(ch==1)
{
while (1)
{
cout<<"Stack Implementation in STL"<<endl;
cout<<"1.Insert Element into the Stack"<<endl;
cout<<"2.Delete Element from the Stack"<<endl;
cout<<"3.Size of the Stack"<<endl;
cout<<"4.Top Element of the Stack"<<endl;
cout<<"5.Exit"<<endl;
cout<<"Enter your Choice: ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter value to be inserted: ";
cin>>item;
st.push(item);
break;
case 2:
item = st.top();
st.pop();
cout<<"Element "<<item<<" Deleted"<<endl;
break;
case 3:
cout<<"Size of the STACK: ";
cout<<st.size()<<endl;
break;
case 4:
cout<<"Top Element of the Stack: ";
cout<<st.top()<<endl;
break;
case 5:
exit(1);
break;
default:
cout<<"Wrong Choice"<<endl;
}
}
}

else if(ch==2)
{
while(1)
{
cout<<"\n Queue Implementation in STL"<<endl;
cout<<"\n1.Insert Element into the queue";

cout<<"1.Insert Element into the Queue"<<endl;
cout<<"2.Delete Element from the Queue"<<endl;
cout<<"3.Size of the Queue"<<endl;
cout<<"4.Front Element of the Queue"<<endl;
cout<<"5.Last Element of the Queue"<<endl;
cout<<"6.Exit"<<endl;
cout<<"Enter your Choice: ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter value to be inserted: ";
cin>>item;
qu.push(item);
break;
case 2:
item = qu.front();
qu.pop();
cout<<"Element "<<item<<" Deleted"<<endl;
break;
case 3:
cout<<"Size of the Queue: ";
cout<<qu.size()<<endl;
break;
case 4:
cout<<"Front Element of the Queue: ";
cout<<qu.front()<<endl;
break;
case 5:
cout<<"Back Element of the Queue: ";
cout<<qu.back()<<endl;
break;
case 6:
exit(1);
break;
default:
cout<<"Wrong Choice"<<endl;
}

}
}

else
{
cout<<"\n Ooopss...Wrong choice.\1";
goto Start;
}

cout<<"\nDo you want to continue? Yes(y) No(n):";
cin>>yn;

if(yn=='y')
{
goto Start;
}
return 0;
}

//----------------OUTPUT------------------	
/*
		Implementation of Stack and Queue using STL.

 1) Stack
 2)Queue
Enter your choice:1
Stack Implementation in STL
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 1
Enter value to be inserted: 20

Stack Implementation in STL
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 1
Enter value to be inserted: 20

Stack Implementation in STL
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 1
Enter value to be inserted: 30

Stack Implementation in STL
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 1
Enter value to be inserted: 40

Stack Implementation in STL
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 1
Enter value to be inserted: 50

Stack Implementation in STL
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 1
Enter value to be inserted: 60

Stack Implementation in STL
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 3
Size of the STACK: 6

Stack Implementation in STL
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 4
Top Element of the Stack: 60


Stack Implementation in STL
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 2
Element 60 Deleted
*/
/*
		Implementation of Stack and Queue using STL.

 1) Stack
 2)Queue
Enter your choice:2

 Queue Implementation in STL

1.Insert Element into the queue1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 1
Enter value to be inserted: 10

 Queue Implementation in STL

1.Insert Element into the queue1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 1
Enter value to be inserted: 20

 Queue Implementation in STL

1.Insert Element into the queue1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 1
Enter value to be inserted: 30

 Queue Implementation in STL

1.Insert Element into the queue1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 3
Size of the Queue: 3

 Queue Implementation in STL

1.Insert Element into the queue1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 4
Front Element of the Queue: 10

 Queue Implementation in STL

1.Insert Element into the queue1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 5
Back Element of the Queue: 30

 Queue Implementation in STL

1.Insert Element into the queue1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 2
Element 10 Deleted

 Queue Implementation in STL

1.Insert Element into the queue1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit


*/
