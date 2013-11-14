#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
char date[10];
int year[4], yr;

cout<<"Enter Date (dd-mm-yyyy)"; cin>>date;

year[0]=date[6]-48;
year[1]=date[7]-48;
year[2]=date[8]-48;
year[3]=date[9]-48;

yr=(year[0]*1000)+(year[1]*100)+(year[2]*10)+year[3];

cout<<"\n\nYear is "<<yr;

if(yr%400==0 || (yr%100!=0 && yr%4==0))
cout<<"\n\nLeap Year";
else
cout<<"\n\nNot a leap year";
getch();
}