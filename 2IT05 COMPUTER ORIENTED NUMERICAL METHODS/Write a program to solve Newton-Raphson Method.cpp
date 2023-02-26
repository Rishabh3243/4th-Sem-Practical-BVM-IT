#include<iostream>
#include<cmath>
using namespace std;
float fun(double x)
{
    return (pow(x,3) + pow(x,2) -1);
}
double fun2(double x)
{
    return (3*pow(x,2) + 2*x);
}
double fun3(double t)
{
    return (t-fun(t)/fun2(t));
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
float nep()
{
    float t=(2*z()+1)/2.0;
    float k,s=fun3(t),l=0;
    while(l>=0)
    {
        if (k==s)
            break;
        k=s;
        cout<<"Iteration "<<l<<" = "<<k<<endl;
        s=fun3(k);
        l++;
    }
    return s;
}
int main()
{
    cout<<"Function f(x) : x^3 + x^2 - 1"<<endl;
    cout<<"Function f'(x): 3*x^2 + 2*x"<<endl;
    cout<<"Root lies Between "<<z()<<" and "<<z()+1<<endl;
    double d=nep();
    cout<<"Root for the above equation is : "<<d<<endl;
    return 0;
}