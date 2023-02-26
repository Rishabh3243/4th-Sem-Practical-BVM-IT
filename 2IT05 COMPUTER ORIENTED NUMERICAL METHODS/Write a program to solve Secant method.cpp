#include<iostream>
#include<cmath>
using namespace std;
float fun(double x)
{
    return (pow(x,3) - 5*x + 1);
}
double fun2(double x, double y)
{
    return (x*fun(y)-y*fun(x))/(fun(y)-fun(x));
}
int z()
{
    int a=0;
    while (a>=0)
    {
        if (fun(a)*fun(a+1)<=0)
            break;
        a++;
    }
    return a;
}
float secant()
{
    float m,l=0,x=z(),y=1+z();
    while(l>=0)
    {
        if (x==y)
            break;
        m=y;
        y=fun2(x,y);
        cout<<"Iteration "<<l<<" = "<<y<<endl;
        x=m;
        l++;
    }
    return x;
}
int main()
{
    cout<<"Function f(x) : x^3 - 5*x + 1"<<endl;
    cout<<"Root lies Between "<<z()<<" and "<<z()+1<<endl;
    double d=secant();
    cout<<"Root for the above equation is : "<<d<<endl;
    return 0;
}