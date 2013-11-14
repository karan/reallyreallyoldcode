#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>

class student
{
	char name[10];
	int rollno;
	public:
	void create();
	void append();
	void del();
	void disp();
	void modify();
}s;

void student::create()
{
fstream file;
char fname[12];
cout<<"Enter filename with extension: "; gets(fname);
file.open(fname, ios::out|ios::binary);
cout<<"Student Name: "; gets(name);
cout<<"Roll No: "; cin>>rollno;

file.write((char *)this, sizeof(student));
cout<<"File creation done!";
file.close();
}

void student::append()
{
fstream file;
char fname[12];
cout<<"Enter filename with extension: "; gets(fname);
file.open(fname, ios::app|ios::binary);
cout<<"Student Name: "; gets(name);
cout<<"Roll No: "; cin>>rollno;

file.write((char *)this, sizeof(s));
cout<<"Appending Done!";
file.close();
}

void student::del()
{
fstream file, tmp;
char fname[12];
int rn;
cout<<"Enter filename with entension: "; gets(fname);
file.open(fname, ios::in|ios::binary);
tmp.open("temp.dat", ios::out|ios::binary);

cout<<"Roll No of student to be deleted: "; cin>>rn;
file.read((char *)this, sizeof(s));
while(!file.eof())
{
	if(s.rollno!=rn)
	tmp.write((char *)this, sizeof(s));
	file.read((char *)this, sizeof(s));
}

remove(fname);
rename("temp.dat", fname);
cout<<"Deletion done!";
tmp.close();
file.close();
}

void student::disp()
{
fstream file;
char fname[12];
cout<<"Enter filename with entension: "; gets(fname);
file.open(fname, ios::in|ios::binary);
file.read((char *)this, sizeof(s));
while(!file.eof())
{
	cout<<"Name: "<<name<<endl;
	cout<<"Roll No: "<<rollno<<endl<<endl;
	file.read((char *)this, sizeof(s));
}
file.close();
}

void student::modify()
{
fstream file;         int flag=0;
char fname[12];
char n[10];
cout<<"Enter filename with entension: "; gets(fname);
file.open(fname, ios::in|ios::binary|ios::out);
cout<<"Name of student to edit: "; gets(n);

file.read((char *)this, sizeof(student));
while(!file.eof()&& !flag)
{
	if(strcmpi(name,n)==0)
	{       file.flush();
		cout<<"\nOld name: "; puts(name);
		cout<<"\nOld Roll no: "<<rollno;
		file.seekp(file.tellp()-sizeof(student));
		cout<<"\nNew Name: "; gets(name);
		cout<<"\nNew Roll No: "; cin>>rollno;
		file.write((char *)this, sizeof(student));
		cout<<"Modifying Done!";
		flag=1;
	}
file.read((char *)this, sizeof(student));
}
file.close();
}

void main()
{
clrscr();

char ch;
int op;

do{
clrscr();

cout<<"### MAIN MENU ###\n";
cout<<"# 1. Create a file\n";
cout<<"# 2. Append to existing file\n";
cout<<"# 3. Delete existing record\n";
cout<<"# 4. Display contents of file\n";
cout<<"# 5. Modify a file\n";
cout<<"# 6. Exit\n";
cout<<"#################\n\n";

cout<<"Enter choice: "; cin>>op;

switch(op)
{
	case 1: s.create();
		break;
	case 2: s.append();
		break;
	case 3: s.del();
		break;
	case 4: s.disp();
		break;
	case 5: s.modify();
		break;
	case 6: exit(0);
		break;
	default: cout<<"Invalid Entry!";
		break;
}

cout<<"\nContinue? "; cin>>ch;
}while(ch=='y'||ch=='Y');

getch();
}