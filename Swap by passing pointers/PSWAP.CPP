//Swap nos by passing pointers

#include<iostream.h>
#include<conio.h>

void swap(int *x, int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}

void main()
{
clrscr();
int a,b;
cout<<"Enter number 1 (a)"; cin>>a;
cout<<"Enter number 2 (b)"; cin>>b;
cout<<endl<<endl;
cout<<"Old values\na="<<a<<"\tb="<<b;
swap(&a,&b);
cout<<"\n\nNew values\na="<<a<<"\tb="<<b;
getch();
}