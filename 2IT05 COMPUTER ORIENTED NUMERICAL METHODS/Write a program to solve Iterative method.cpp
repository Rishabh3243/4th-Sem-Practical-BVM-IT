#include<iostream>
#include<cmath>
using namespace std;
float fun(double x)
{
    return (pow(x,3) + pow(x,2) -1);
}
double g(double x)
{
    return (1/(sqrt(x+1)));
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
float iter()
{
    float t=(2*z()+1)/2.0;
    cout<<t<<endl;
    float k,s=g(t),l=0;
    while (l>=0)
    {
        if (k==s)
            break;
        k=s;
        cout<<"Iteration "<<l<<" = "<<s<<endl;
        s=g(k);
        l++;
    }
    return s;
}
int main()
{
    cout<<"Function : x^3 + x^2 - 1"<<endl;
    cout<<"G = 1/(x+1)^(1/2)"<<endl;
    cout<<"Root lies Between "<<z()<<" and "<<z()+1<<endl;
    double d=iter();
    cout<<"Root for the above equation is : "<<d<<endl;
    return 0;
}