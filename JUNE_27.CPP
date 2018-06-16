/*//BASE CLASS CONSTRUCTOR
#include<iostream.h>
#include<conio.h>
class base
{
int x;
protected:
int y;
public:
int z;
void getd1()
{
cout<<"\nEnter the values of x,y & z";
cin>>x;
}
void show1()
{
cout<<"\nx is "<<x;
}
};
class derived:public base
{
private:
int p;
protected:
int q;
public:
int r;
void getd2()
{
cout<<"\nnter the values of y,z,p,q & r";
cin>>y>>z>>p>>q>>r;
}
void show2()
{
cout<<"\ny is "<<y;
cout<<"\nz is "<<z;
cout<<"\np is "<<p;
cout<<"\nq is "<<q;
cout<<"\nr is "<<r;
}
};
void main()
{
derived d;
clrscr();
d.getd1();
d.getd2();
d.show1();
d.show2();
getch();
}
    */

//BASE CLASS(METHOD 2)
#include<iostream.h>
#include<conio.h>
class base
{
int x;
protected:
int y;
public:
int z;
void getd1()
{
cout<<"\nEnter the values of x";
cin>>x;
}
void show1()
{
cout<<"\nx is "<<x;
}
};
class derived:public base
{
private:
int p;
protected:
int q;
public:
int r;
void getd2()
{
cout<<"\nnter the values of y,z,p,q & r";
cin>>y>>z>>p>>q>>r;
}
void show2()
{
cout<<"\ny is "<<y;
cout<<"\nz is "<<z;
cout<<"\np is "<<p;
cout<<"\nq is "<<q;
cout<<"\nr is "<<r;
}
};
void main()
{
derived d;
clrscr();
d.getd1();
d.getd2();
d.show1();
d.show2();
getch();
}
