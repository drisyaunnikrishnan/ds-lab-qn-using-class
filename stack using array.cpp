#include<iostream.h>
#include<conio.h>
#include<process.h>

class Stackimp
{
     public:
     int stack[12];
     int top;
     int n;

     void arrsize(int size)
     {
	 n = size;
     }

     void push()
     {
	 int num;

	 cout<<"\n enter the element to be inserted into the stack : ";
	 cin>>num;


	 if(top==n-1)

	 {
	     cout<<"\n stack overflow\n";
	 }

	 else
	 {
	     top++;
	     stack[top]=num;
	 }
     }


     void pop()
     {
	 int item;

	 if(top==-1)
	 {
	     cout<<"\n stack is empty \n";

	 }
	 else
	 {
	     item=stack[top];
	     top--;
	     cout<<"\n deleted element is "<<item;

	 }

     }
    void display();

};

  void Stackimp:: display()
     {

	 cout<<"\n\n elements in the stack are : \n";
	 for(int i=top;i>=0;i--)
	 {
	     cout<<stack[i]<<"\t";
	 }
     }

void main()
{
    int ch;

   Stackimp obj;
    obj.top=-1;
    int size;

    cout<<"\n enter the size of the array : ";
	 cin>>size;

	 obj.arrsize(size);
    do{

	   cout<<"1.psuh \n";
	   cout<<"2.pop \n";
	   cout<<"3.Display  \n";
	   cout<<"4.exit  \n";

	   cout<<"\n\n enter your choice : ";
	   cin>>ch;

	   switch(ch)
	   {
	       case 1:
	       obj.push();
	       break;

	       case 2:
	       obj.pop();
	       break;

	       case 3:
	       obj.display();
	       break;

	       case 4:
	       exit(1);
	       break;

	       default:
	       cout<<"\n invalid output ";

	   }



    }while(ch!=0);

    getch();
}

