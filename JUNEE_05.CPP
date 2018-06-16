//OBJECTS CAN BE RETURNED FROM NON MEMBER FUNCTION
#include<iostream.h>
#include<conio.h>
class demo
{
public:
int x,y;
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
demo add()
{
demo d1(1,2),d2(4,6),d3(0,0);
d3.x=d1.x+d2.x;
d3.y=d1.y+d2.y;
return d3;
}
void main()
{
demo d(0,0);
clrscr();
d=add();
d.show();
getch();
}
