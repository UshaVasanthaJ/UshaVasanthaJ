#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void addition();
void subtraction();
void multiplication();
void division();
void square();
int power();
void sqroot();
void exit();
void main()
{
clrscr();
int operation;
do
{
cout<<"Select any Arithmetic Operation from the Calucalator:"
"\n1=Addition"
"\n2=Subtraction"
"\n3=Multiplication"
"\n4=Division"
"\n5=Square"
"\n6=power"
"\n7=Square Root"
"\n8=Exit"
"\n\nChoose your Arithmetical Operation to be performed:";
cin>>operation;
switch(operation)
{
case 1:
addition();
break;
case 2:
subtraction();
break;
case 3:
multiplication();
break;
case 4:
division();
break;
case 5:
square();
break;
case 6:
power();
break;
case 7:
sqroot();
break;
case 8:
exit(0);
break;
default:
cout<<"Something is wrong...!!!";
break;
}
cout<<"\n\n......................\n\n";
}
while(operation!=7);
getch();
}
void addition()
{
int n,i;
float num,sum=0;
cout<<"How many numbers you want to be add;";
cin>>n;
cout<<"Please enter the numbers one by one order:\n";
for(i=1;i<=n;i++)
{
cin>>num;
sum=sum+num;
}
cout<<"Sum of the numbers are ="<<sum;
}
void subtraction()
{
int n,i;
float num,sub=0;
cout<<"How many numbers you want to be subtract:";
cin>>n;
cout<<"Please enter the numbers one by one:\n";
for(i=1;i<=n;i++)
{
cin>>num;
sub=sub-num;
}
cout<<"\n Subtraction of numbers are="<<sub;
}
void multiplication()
{
int n,i;
float mul=1,num;
cout<<"How many numbers you want to be multiplication:";
cin>>n;
cout<<"Please enter the numbers one by one:\n";
for(i=1;i<=n;i++)
{
cin>>num;
mul=mul*num;
}
cout<<"\n Multiplication of numbers are:"<<mul;
}
void division()
{
int num1,num2,div=0;
cout<<"Enter first number:";
cin>>num1;
cout<<"\n Enter Second number:";
cin>>num2;
while(num2==0)
{
cout<<"\n Divisor cannot be 0"
"\n Please enter the divisor once again";
cin>>num2;
}
div=num1/num2;
cout<<"\n Division of 2 numbers="<<div;
}
void square()
{
int num1;
float sq;
cout<<"\n Enter a number to find the square:";
cin>>num1;
sq=num1*num1;
cout<<"\n Square of:"<<num1<<"is:"<<sq;
}
int power()
{
float num1,num2,res;
cout<<"\n Enter base number:";
cin>>num1;
cout<<"\n Enter Power number:";
cin>>num2;
res=pow(num1,num2);
cout<<"\n The value of "<<num1<<"^"<<num2<<"is:"<<res;
return 0;
}

void sqroot()
{
float sqr;
int num;
cout<<"\n Enter the number to find the square root:";
cin>>num;
sqr=sqrt(num);
cout<<"Square root of"<<num<<"is:"<<sqr;
}
