#include<iostream.h>
#include<conio.h>

void sort(int ar[ ], int size)
{
int low, tmp, pos;
for(int i=0;i<size;i++)
{
	low=ar[i];
	for(int j=i+1;j<size;j++)
		{if(ar[j]<low)
		{low=ar[j];
		 pos=j;
		}

	tmp=ar[i];
	ar[i]=ar[pos];
	ar[pos]=tmp;

cout<<"Array after pass - "<<i+1<<" - is: ";
for(j=0;j<size;j++)
cout<<ar[j]<<" ";

cout<<endl;
}
}

for(i=0;i<size;i++)
cout<<ar[i]<<" ";
}

void main()
{
clrscr();
int ar[5], n, item;

cout<<"Enter size of array\n"; cin>>n;

cout<<"Enter array elements\n";
for(int i=0;i<n;i++)
cin>>ar[i];

sort(ar, n);

getch();
}