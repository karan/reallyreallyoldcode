// DiaVolo

#include <iostream.h>
#include <conio.h>
#include <process.h> //for exit()
//#include <windows.h> //Let life be colourful
//#include <stdlib.h>
#include <stdio.h>

void main()
{
clrscr();

int choice;

cout<<"\n\n";
cout<<"##############################\n";
cout<<"# Welcome to DiaVolo\n";
cout<<"# The mini-game pack contains 2 games:\n";
cout<<"# 1. U Guess\n";
cout<<"# 2. I Guess\n";
cout<<"##############################\n";
cout<<"\nEnter 1 or 2 to play the game, or 3 to exit.";
cout<<"\nYour choice: ";
	cin>>choice;

switch(choice)
{
	case 1: cout<<"\n\nWelcome to U Guess.\nI will pick a number between 0 and 100.\n";
			  cout<<"You must try to guess it within 7 guesses.!";
				break;

	case 2: cout<<"\n\nWelcome to I Guess.\nThis is an amazing game.\n";
			  cout<<"You must choose a number from the following.!";
				break;

	case 3: exit(0);   //Exit game
				break;

	default: cout<<"Enter the correct choice... "; //For invalid input
}

getch();
}
