#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
int n;
cout<< "Enter the no elements to initialize the Array : ";
cin >> n;
int arr[n],i,m=0,position;
cout<<"Enter the elements : -\n";
for(i = 0; i < n; i++)
{
    cout<<"Element "<<i+1<<" : ";
    cin >> arr[i];
}
system("CLS");
while (m==0)
{
    int t,l;
    cout<<"Select the operation : -\n";
    cout<<"1) Insertion \n";
    cout<<"2) Deletion \n";
    cout<<"3) Exit \n";
    cout<<"Operation : ";
    cin>>t;
    if (t==1)
    {
        int pos;
        cout<<"\nEnter the Position where you want to insert the Element : ";
        cin >> pos;
        int ele;
        cout<<"Enter the value you want to insert : ";
        cin >> ele;
        if(pos > n)
            cout << "Invalid Input";
        else
        {
            for (i=(n-1);i>=(pos-1);i--)
                arr[i+1] = arr[i];
            arr[pos-1] = ele;
            n++;
            cout << "Array after insertion is:\n";
            for (i=0;i<n;i++)
                cout<<arr[i]<< " ";
        }
        cout<<endl<<"\nPress 1 to continue :\nPress 0 to exit :\n: - ";
        cin>>l;
        if (l==1)
            system("CLS");
        else
            break;
    }
    else if (t==2)
    {
        cout <<"\nEnter the position : ";
        cin >> position;
        if (position >= n+1)
            cout << "\nDeletion not possible.\n";
        else
        {
            for (i=(position-1);i<(n);i++)
                arr[i] = arr[i+1];
            n--;
            cout <<"\nArray after deletion : ";
            for (i=0;i<(n);i++)
                cout <<arr[i]<<" ";
        }
        cout<<endl;
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
return 0;
}
