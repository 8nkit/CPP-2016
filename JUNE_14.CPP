//FUNCTION OVERLOADING PROGRAM NO. 1
#include<iostream.h>
#include<conio.h>
class demo
{
public:
int x;
void getdata()
{
cout<<"\nEnter the  value of x in terms of integers only ";
cin>>x;
}
void show()
{
cout<<"\n x is "<<x;
}
};
void main()
{
demo d;
clrscr();
d.getdata();
d.show();
d.x=55;
d.show();
getch();
}