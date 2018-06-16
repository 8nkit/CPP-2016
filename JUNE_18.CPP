//CONSTRUCTOR TYPES (PARAMETERISED CONSTRUCTOR)
#include<iostream.h>
#include<conio.h>
class demo
{
int x;
public:
demo(int p)
{
x=p;
}
void show()
{
cout<<"\n x is  "<<x;
}
};
void main()
{
int n;
clrscr();
demo d(66),d1(99);
d.show();
d1.show();
cout<<"\nEnter the value of n ";
cin>>n;
demo d2(n);
d2.show();
getch();
}
