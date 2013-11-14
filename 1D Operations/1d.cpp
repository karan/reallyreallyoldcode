 #include<iostream.h>
#include<conio.h>

class array
{
	public:
		void insert(int [], int, int);
		void del(int [], int, int);
		void app(int [], int, int [], int);
		void merge(int [], int, int [], int);
}a1;

void array::insert(int a[], int n1, int ele)
{
n1++;
a[n1-1]=ele;
cout<<"Done\n";
cout<<"New List:";
for(int i=0;i<n1;i++)
	cout<<a[i];
}

void array::del(int a[], int n1, int ele)
{
int pos;
for(int i=0;i<n1;i++)
	{if(a[i]==ele)
		pos=i;}

for(int k=pos;k<n1;k++)
	a[k]=a[k+1];

n1--;
cout<<"Done\n";
cout<<"New List:";
for(i=0;i<n1;i++)
	cout<<a[i];
}

void array::app(int a[], int n1, int b[], int n2)
{
int n;
n=n1+n2;
for(int j=n1,k=0;j<n, k<n1;j++,k++)
	a[j]=b[k];

cout<<"Done\n";
cout<<"New List:";
for(int i=0;i<n;i++)
	cout<<a[i];
}

void array::merge(int a[], int n1, int b[], int n2)
{
int n, x, y, z, c[100];
n=n1+n2;
for(x=0,y=n2-1,z=0;x<n1&&y>=0;)
	{
		if(a[x]<=b[y])
			c[z++]=a[x++];
		else
			c[z++]=b[y--];
	}

if(x<n1)
{
	while(x<n1)
		c[z++]=a[x++];
}
else
{
	while(y>=0)
		c[z++]=b[y--];
}

cout<<"Done\n";
cout<<"New List:";
for(int i=0;i<n;i++)
	cout<<c[i];
}

void main()
{
clrscr();

int a[50], b[50], n1, n2, ele, ch;
char op;

cout<<"Enter size of array: ";
cin>>n1;
cout<<"Enter Array Elements: ";
	for(int i=0;i<n1;i++)
	cin>>a[i];

do
{
	cout<<"\n1. Insert at last";
	cout<<"\n2. Delete an element";
	cout<<"\n3. Append a list";
	cout<<"\n4. Merge two lists";
   cout<<endl;
	cin>>ch;

	switch(ch)
	{
		case 1: cout<<"Enter element to insert: ";
				  cin>>ele;
				  a1.insert(a,n1,ele);
				  break;
		case 2: cout<<"Enter element to delete: ";
				  cin>>ele;
				  a1.del(a,n1,ele);
				  break;
		case 3: cout<<"Enter size of list 2: ";
				  cin>>n2;
				  cout<<"Enter elements: ";
				  {for(int l=0;l<n2;l++)
					cin>>b[l];}
				  a1.app(a,n1,b,n2);
				  break;
		case 4: cout<<"Enter size of list 2: ";
				  cin>>n2;
				  cout<<"Enter elements: ";
				  {for(int p=0;p<n2;p++)
					cin>>b[p];}
				  a1.merge(a,n1,b,n2);
				  break;
		default: cout<<"Invalid Entry\n";
					break;
	}
	cout<<"Continue?";
	cin>>op;
}while(op=='y'||op=='Y');

getch();
}