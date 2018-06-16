//DERIVED CLASS CONSTRUCTOR
/*#include<iostream.h>
#include<conio.h>
class base
{
int x;
public:
base(int p)
{
x=p;
}
void show1()
{
cout<<"\nx is "<<x;
}
};
class derived:public base
{
int y;
public:
derived(int m,int n):base(m)
{
y=n;
}
void show2()
{
cout<<"\ny is "<<y;
}
};
void main()
{
derived d(2,3);
clrscr();
d.show1();
d.show2();
getch();
}*/

//DERIVED CLASS DEFAULT CONSTRUCTOR
#include<iostream.h>
#include<conio.h>
class base
{
int x;
public:
base()
{
x=5;
}
void show1()
{
cout<<"\nx is "<<x;
}
};
class derived:public base
{
int y;
public:
derived():base()
{
y=3;
}
void show2()
{
cout<<"\ny is "<<y;
}
};
void main()
{
derived d;
clrscr();
d.show1();
d.show2();
getch();
}