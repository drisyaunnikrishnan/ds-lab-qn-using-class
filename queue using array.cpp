#include<iostream.h>
#include<conio.h>
class queueimp
{
public:
int queue[30];
int rear;
int front;
int num;
int n;
queueimp()
{
rear=-1;
front=-1;
}
void enqueue(int value)
{
num=value;
if(rear==n-1)
{
cout<<"\n Queue overflow\n";
}
else if(rear==-1&&front==-1)
{
front=rear=0;
queue[rear]=num;
}
else
{
rear++;
queue[rear]=num;
}
}
void dequeue()
{
if(front==-1&&rear==-1)
{
cout<<"\n queue is empty cannot perform deletion\n";
}
else if(front==rear)
{
front=rear=-1;
}
else
{
front++;
}
}
void display();
};
void queueimp::display()
{
if(front==-1&&rear==-1)
{
cout<<"\n thereare no elements in the queue\n";
}
else
{
cout<<"\n \n elements in the queue are\n";
for(int i=front;i<rear+1;i++)
{
cout<<queue[i]<<"\t";
}
}
}
void main()
{
int choice,item;
queueimp obj;
cout<<"\n Enter the size of the queue:";
cin>>obj.n;
clrscr();
 do
{
cout<<"\n1.enqueue";
cout<<"\n2.Dequeue";
cout<<"\n3.Display";
cout<<"\n4.Exit";
cout<<"\n\n Enter your choice:";
cin>>choice;
switch(choice)
{
case 1:cout<<"\n enter the element to be inserted:";
cin>>item;
obj.enqueue(item);
break;
case 2:obj.dequeue();
break;
case 3:obj.display();
break;
case 4:cout<<"\n Exiting the program.....\n";
break;
default:cout<<"\n Inval;id choice\n";
}
}while(choice!=4);
getch();
}
