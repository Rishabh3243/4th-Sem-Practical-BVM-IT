#include<bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if(c=='^')
        return 4;
    else if(c=='%')
        return 3;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='+' || c=='-')
        return 1;
    else
        return -1;
}
void postfix(string s)
{
    stack<char> a;
    string ans;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
        {
            ans += s[i];
        }
        else if(s[i]=='(')
        {
            a.push(s[i]);
        }
        else if(s[i]==')')
        {
            while(a.top()!='(')
            {
                ans += a.top();
                a.pop();
            }
            a.pop();
        }
        else
        {
            while(!a.empty() && prec(s[i])<=prec(a.top()))
            {
                ans+=a.top();
                a.pop();
            }
            a.push(s[i]);
        }
    }
    while(!a.empty())
    {
        ans+=a.top();
        a.pop();
    }
    cout<<"Infix to Postfix conversion is : \n";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
}
void prefix(string s)
{
    stack<char> a;
    string ans;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
        {
            ans += s[i];
        }
        else if(s[i]==')')
        {
            a.push(s[i]);
        }
        else if(s[i]=='(')
        {
            while(a.top()!=')')
            {
                ans+=a.top();
                a.pop();
            }
            a.pop();
        }
        else
        {
            while(!a.empty() && prec(s[i])<prec(a.top()))
            {
                ans+=a.top();
                a.pop();
            }
            a.push(s[i]);
        }
    }
    while(!a.empty())
    {
        ans+=a.top();
        a.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<"Infix to Prefix conversion is : \n";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
}
int main()
{
    clock_t time;
    time = clock();
    int m=0;
    while (m==0)
    {
        int t,l;
        cout<<"Select the operation : -\n";
        cout<<"1) Infix to Postfix \n";
        cout<<"2) Infix to Prefix \n";
        cout<<"3) Exit \n";
        cout<<"Operation : ";
        cin>>t;
        if (t==1)
        {
            string s;
            cout<<"Enter the expression : ";
            cin>>s;
            postfix(s);
            cout<<endl<<"Press 1 to continue :\nPress 0 to exit : \n: - ";
            cin>>l;
            if (l==1)
                system("CLS");
            else
                break;
        }
        else if (t==2)
        {
            string s;
            cout<<"Enter the expression : ";
            cin>>s;
            prefix(s);
            cout<<endl<<"Press 1 to continue :\nPress 0 to exit : \n: - ";
            cin>>l;
            if (l==1)
                system("CLS");
            else
                break;
        }
        else if (t==3)
            break;
        else
        {
            cout<<"You have entered the wrong value ";
            cout<<endl<<"Press 1 to continue :\nPress 0 to exit : \n: - ";
            cin>>l;
            if (l==1)
                system("CLS");
            else
                break;
        }
    }
    system("CLS");
    cout<<"Thank you, see you in next program ";
    cout<<endl<<"Time Complexity :"<<endl;
    cout<<(float)time<<"seconds"<<endl;
    return 0;
}
