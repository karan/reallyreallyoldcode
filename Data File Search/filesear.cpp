#include<fstream.h>
#include<conio.h>

struct{
int rollno;
char name[20];
char grade;
}s1;

void main()
{
clrscr();
int rn;
cout<<"Enter roll no to be searched";
cin>>rn;

ifstream file("file.dat", ios::in);

while(!file.eof())
{
file.read((char *)&s1, sizeof(s1));
if(s1.rollno==rn)
cout<<s1.name<<s1.rollno<<s1.grade;
else
cout<<"Not found";
}
getch();
}