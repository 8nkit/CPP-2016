//OBJECT CAN BE PASSED & RETURNED IN THE NON MEMBER FUNCTION
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
demo add(demo d1,demo d2)
{
demo d3(0,0);
d3.x=d1.x+d2.x;
d3.y=d1.y+d2.y;
return d3;
}
void main()
{
demo a(2,3),b(9,7),c(0,0);
clrscr();
c=add(a,b);
c.show();
getch();
}
