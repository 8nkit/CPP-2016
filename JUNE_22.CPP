
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
};
void add(demo dd)
{
int c;
c=dd.x+dd.y;
cout<<"\n\t\t\t\tsum is "<<c;
}
void main()
{
clrscr();
demo d(6,3);
add(d);
getch();
}