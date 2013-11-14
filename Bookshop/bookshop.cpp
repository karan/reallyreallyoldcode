#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class bookshop
{
	public:
	char author[30], title[50], publisher[50];
	int price, stockpos;
	void inputbooks();
	void issuebook(int);
}b[100];

void bookshop::inputbooks()
{
cout<<"Title: "; gets(title);
cout<<"Author: "; gets(author);
cout<<"Publisher: "; gets(publisher);
cout<<"Price: "; cin>>price;
cout<<"Stock: "; cin>>stockpos;
cout<<endl;
}

void bookshop::issuebook(int issue)
{
if(stockpos<issue)
	cout<<"Sorry! These many sopies are not in stock.";
else
	{
		stockpos=stockpos-issue;
		cout<<issue<<" copies have now been issued!!"<<endl;
		cout<<"New stock for the book: "<<stockpos;
	}
}

void main()
{
clrscr();
int nobooks, issue;
char issuetitle[50], issueauth[30], ch;

cout<<"Enter number of books you want to enter information about: ";
cin>>nobooks;
cout<<endl;
for(int i=0;i<nobooks;i++)
	{
		cout<<"Information about book "<<i+1<<endl;
		b[i].inputbooks();
	}

do
{
	cout<<"Enter the name of book to issue: "; gets(issuetitle);
	cout<<"Enter the name of author of book: "; gets(issueauth);

	for(i=0;i<nobooks;i++)
	{
		if(strcmpi(b[i].author,issueauth)==0)
			if(strcmpi(b[i].title,issuetitle)==0)
			{
				cout<<"Book available!\n";
				cout<<"In Stock: "<<b[i].stockpos<<endl;
				cout<<"How many do you want to issue? ";
				cin>>issue;
				b[i].issuebook(issue);
			}
		else
		cout<<"Sorry! The book you entered in not in out database!"<<endl;
	}
cout<<endl<<endl<<"Continue?";
cin>>ch;
}while(ch=='y'||ch=='Y');

getch();
}
