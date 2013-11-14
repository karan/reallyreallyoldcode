#include<iostream.h>
#include<conio.h>

class stack
{
int st[100], top;
public:
stack(){top=-1;}
~stack(){}
int underflow();
int overflow();
void insert(int);
int del();
void disp();
}s;

int stack::underflow()
{
if(top==0)
return 1;
else
return 0;
}

int stack::overflow()
{
if(top==99)
return 1;
else
return 0;
}

void stack::insert(int val)
{
if(!overflow())
{
	top++;
	st[top]=val;
	cout<<"Value Inserted!";
}
}

int stack::del()
{
int val;
if(!underflow())
{
	val=st[top];
	top--;
}
return val;
}

void stack::disp()
{
cout<<"Stack is: \n";
for(int i=0; i<=top; i++)
cout<<st[i]<<"->";
}

void main()
{
clrscr();
int ch, val;
char op;

do{
cout<<"1. Insert\n2. Delete\n3. Display\n";
cin>>ch;

switch(ch)
{
	case 1: cout<<"Val: "; cin>>val;
		s.insert(val);
		break;
	case 2: val=s.del();
		cout<<val<<" is deleted\n";
		break;
	case 3: s.disp();
		break;
}
cout<<"\n\nCont: "; cin>>op;
}while(op=='y');
}