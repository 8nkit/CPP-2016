//FUNCTION OVERLOADING PROGRAM NO. 1
#include<iostream.h>
#include<conio.h>
class demo
{
public:
void add()
{
int x,y,z;
x=5;
y=3;
z=x+y;
cout<<"\nSum of integers is  "<<z;
}
float add (float p,float q)
{
float r;
r=p+q;
return r;
}
};
void main()
{
float a,b,res;
demo d;
a=5.4;
b=3.2;
clrscr();
d.add();
res=d.add(a,b);
cout<<"\nSum of floats is  "<<res;
getch();
}
