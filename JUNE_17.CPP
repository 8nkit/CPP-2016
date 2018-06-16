//CONSTRUCTOR TYPES (DEFAULT CONSTRUCTOR)
#include<iostream.h>
#include<conio.h>
class demo
{
int x;
public:
demo()
{
x=5;
}
void show()
{
cout<<"\n x is  "<<x;
}
};
void main()
{
clrscr();
demo d;
d.show();
getch();
}
