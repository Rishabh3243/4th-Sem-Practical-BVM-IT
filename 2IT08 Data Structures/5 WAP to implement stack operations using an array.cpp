#include <bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int s[100], n=100, top=-1;

void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      s[top]=val;
   }
}

void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< s[top] <<endl;
      top--;
   }
}

void peep() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The top most element is "<< s[top] <<endl;
   }
}

void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<s[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}

int main()
{

    clock_t time;
    time = clock();
    int ch,val,m=0;
    while (m==0)
    {
        int t,l;
        cout<<"Select the operation : -\n";
        cout<<"1) Push in stack"<<endl;
        cout<<"2) Pop from stack"<<endl;
        cout<<"3) Display stack"<<endl;
        cout<<"4) Peep from Stack"<<endl;
        cout<<"5) Exit"<<endl;
        cout<<"Operation : ";
        cin>>t;
        if (t==1)
        {
            cout<<"\nEnter value to be pushed:";
            cin>>val;
            push(val);;

            cout<<endl<<"\nPress 1 to continue :\nPress 0 to exit :\n: - ";
            cin>>l;
            if (l==1)
              {
                system("CLS");
              }
            else
                break;
        }
        else if (t==2)
        {
            cout<<endl;
            pop();

            cout<<endl<<"\nPress 1 to continue :\nPress 0 to exit : \n: - ";
            cin>>l;
            if (l==1)
                system("CLS");
            else
                break;
        }
        else if (t==3)
        {
            cout<<endl;
            display();

            cout<<endl<<"\nPress 1 to continue :\nPress 0 to exit : \n: - ";
            cin>>l;
            if (l==1)
                system("CLS");
            else
                break;
        }
        else if (t==4)
        {
            cout<<endl;
            peep();

            cout<<endl<<"\nPress 1 to continue :\nPress 0 to exit : \n: - ";
            cin>>l;
            if (l==1)
                system("CLS");
            else
                break;
        }
        else if (t==5)
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
