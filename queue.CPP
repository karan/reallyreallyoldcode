#include<iostream.h>
#include<conio.h>

class que
{
int q[100], f, r;
int overflow();
int underflow();
public:
que(){f=-1;r=-1;}
~que(){}
void insert(int);
int del();
void disp();
}q1;

void que::insert(int val)
{
if(r==-1)
{f=r=0;
q[r]=val;}
else
{r++;
q[r]=val;}
cout<<"Insertion Done"<<endl;
}

int que::del()
{
int val;
val=q[f];
f++;
return val;
}

void que::disp()
{
for(int i=f; i<r; i++)
cout<<q[i]<<"<-";
cout<<q[r];
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
{	case 1: cout<<"val: "; cin>>val;
		q1.insert(val);
		break;
	case 2: val=q1.del();
		cout<<val<<" is deleted";
		break;
	case 3: q1.disp();
		break;
}
cout<<"Cont: "; cin>>op;
}while(op=='y');
}