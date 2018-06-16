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
cout<<"\n x is "<<x;
}
};
void main()
{
demo a(2),b=4;
clrscr();
a.show();
b.show();
getch();
}