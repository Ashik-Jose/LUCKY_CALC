#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

void main()
{
 clrscr();
 int a=0,b=0,x,y,rem,count=1;
 cout<<"\n\nEnter the two numbers with each number in the reverse order:(Example:If you want to insert 93 type 33)\n";
 cout<<"Enter the first number: ";
 cin>>x;
 cout<<"\nEnter the second number: ";
 cin>>y;
 while(x)
 {
  rem=x%10;
  a=a*10+rem;
  x=x/10;
 }
 while(y)
 {
  rem=y%10;
  b=b*10+rem;
  y=y/10;
 }
 char n3,op,l;
 srand((unsigned) time(0));
 cout<<"\n Enter the third letter of your name: ";
 cin>>n3;
 cout<<"\n\n\t Enter the operator for the operation you want to perform after reading the note below\n";
 cout<<"\n Note: The operator should be entered assuming the following meaning for each of them\n";
 cout<<" + -> division \t -  -> mutilpication \t * -> subtraction \t / -> addition\n";
 cin>>op;
 char q= (rand()%26)+65;
 char w=(rand()%26)+97;
 do
 {
 cout<<"\n\n Enter the lucky  unknown character to do the operation after reading the note below ";
 cout<<"\nThis must be between A-Z (all uppercase alphabets including A and Z) and between 0 - 9 (including 0 and 9)\n\t  ";
 cin>>l;
 if ((l==q)||(l==w))
 {
  cout<<"You are so lucky that you got it right!!!!!";
  switch(op)
  {
   case '+':cout<<"The answer is "<<(float)a/b;break;
   case '-':cout<<"The answer is "<<a*b;break;
   case '*':cout<<"The answer is "<<a-b;break;
   case '/':cout<<"The answer is "<<a+b;break;
   default:cout<<"Invalid Operator!!!";
  }
  cout<<"\nHope your luck may stand with you forever######\n\tExiting...";
  delay(3000);
  exit(0);
 }
 else
 {
  cout<<"\n\n\t The lucky character you entered is ";
  delay(3000);
  cout<<"Wrong!!! \t Better luck next time\n";
 }
 delay(2000);
 if (count==(n3)%10)
 {
  cout<<"\nSorry!!!This was your last chance.Start from the beginning to try your luck again\n";
  delay(7000);
  exit(0);
 }
 else
 {
  cout<<"\n Maybe you are not so lucky to find answer.But you are so lucky to \n to have a sweet name with third letter "<<n3<<"\n";
  cout<<"\n\t You can try it again!!!\n\n";
 }
 delay(2000);
 count=count+1;
 }while (count<=((n3)%10));
 getch();
 clrscr();
}

