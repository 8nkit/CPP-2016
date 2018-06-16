//CONSTRUCTOR TYPES (COPY CONSTRUCTOR)
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
demo(demo &d)
{
x=d.x;
}
void show()
{
cout<<"\n x is  "<<x;
}
};
void main()
{
clrscr();
demo a(2),b(a),c=b;
a.show();
b.show();
c.show();
getch();
}
