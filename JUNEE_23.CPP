#include<iostream.h>
#include<conio.h>
class demo
{
int x,y;
public:
demo()
{
x=0;
y=0;
}
demo(int p)
{
x=p;
y=p*2;
}
demo(int p,int q)
{
x=p;
y=q;
}
void show()
{
cout<<"\nx is "<<x;
cout<<"\ny is "<<y;
}
};
void main()
{
demo d(5),d1(2,3),d2;
clrscr();
d.show();
d1.show();
d2.show();
getch();
}