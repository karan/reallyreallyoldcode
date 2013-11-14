#include<iostream.h>
#include<conio.h>

struct node
{
int data;
node *next;
};

class stack
{
node *top;
int underflow();
public:
stack(){top=NULL;}
~stack(){}
void push(int);
int pop();
void disp();
}s;

int stack::underflow()
{
if(top==NULL)
return 1;
else
return 0;
}

void stack::push(int val)
{
node *p=NULL;
p=new node;
p->next=top;
p->data=val;
top=p;
}

int stack::pop()
{
int val;
node *p=NULL;
if(!underflow())
{
	p=top;
	top=top->next;
	p->next=NULL;
	val=p->data;
}
return val;
}

void stack::disp()
{
node *p;
p=top;
while(p!=NULL)
{
	cout<<p->data<<"->";
	p=p->next;
}
}

void main()
{
clrscr();
int ch, val;
char op;

do{
cout<<"1. Push\n2. Pop\n3. Display\n";
cin>>ch;

switch(ch)
{
	case 1: cout<<"Val: "; cin>>val;
		s.push(val);
		break;
	case 2: val=s.pop();
		cout<<val<<" is deleted";
		break;
	case 3: s.disp();
		break;
}
cout<<"\nCont: "; cin>>op;
}while(op=='y');
}