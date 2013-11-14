 #include<fstream.h>
 #include<stdio.h>
 #include<conio.h>
 #include<string.h>

 void main()
 {
 clrscr();
 char word[10],w[10], text[1000];
 int count=0;
 fstream file;

 file.open("File.txt", ios::in|ios::out);

 cout<<"Enter text\n";
 gets(text);
 for(int i=0;i<strlen(text);i++)
 file.put(text[i]);

 file.seekg(0);

 cout<<"Enter Word\n";
 gets(w);

 while(!file.eof())
 {
 file.getline(word,10,' ');
 if(strcmp(w,word)==0)
 count++;
 };

 cout<<"\nNo of words = "<<count;
 getch();
 }