//Copy content of file to another file

#include<fstream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
clrscr();
char a[20], b[20], text[100];
cout<<"Enter name of original file";
gets(a);
cout<<"Enter name of new file";
gets(b);

fstream file1(a, ios::in);
fstream file2(b, ios::out);

while(!file1.eof())
{
for(int i=0;i<100;i++)
file1.get(text[i]);
}

puts(text);


for(int i=0;i<100;i++)
file2.put(text[i]);

cout<<"Done!!";
getch();
}
