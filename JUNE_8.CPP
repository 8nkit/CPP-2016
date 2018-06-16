#include<iostream.h>
#include<conio.h>
void main()
{
void swap(int,int);
int x,y;
clrscr();
cout<<"Enter the value of x & y";
cin>>x>>y;
cout<<"\nBefore Swap\n";
cout<<"\nx is "<<x;
cout<<"\ny is "<<y;
swap(x,y);
cout<<"\nAfter swap";
cout<<"\nx is"<<x;
cout<<"\ny is"<<y;
getch();
}
void swap(int p,int q)
{
int temp;
temp=p;
p=q;
q=temp;
cout<<"\nInside the swap\n";
cout<<"\nx is "<<p;
cout<<"\ny is "<<q;
}
