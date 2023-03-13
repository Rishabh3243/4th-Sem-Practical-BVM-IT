#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int i, j ,n;
    cout<<"Enter the No of arguments : ";
    cin >>n;
	float x[n],y[n][n];
    for (i=0;i<n;i++)
    {
        cout<<"X - "<<i<<" : ";
        cin>>x[i];
    }
    for (i=0;i<n;i++)
    {
        cout<<"Y - "<<i<<" : ";
        cin>>y[i][0];
        for (int j=1;j<n;j++)
            y[i][j]=0;
    }
	
	float a;
	cout<<"Enter the Value at x : ";
	cin>>a;
	cout<<endl;
	float h, u, sum, p;
	for (int j = 1; j < n; j++) {
		for (int i = 0; i < n - j; i++) {
			y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
		}
	}
	printf("\n \n The forward difference table is:\n");
	for (int i = 0; i < n; i++) {
		printf("\n");
		for (int j = 0; j < n - i; j++) {
			printf("%f\t", y[i][j]);
		}
	}

	p = 1.0;
	sum = y[0][0];
	h = x[1] - x[0];
	u = (a - x[0]) / h;
	for (int j = 1; j < n; j++) {
		p = p * (u - j + 1) / j;
		sum = sum + p * y[0][j];
	}
	printf("\nThe value of y at x=%0.1f is %0.3f", a, sum);
	cout<<endl;
	for (int j = 1; j < n; j++) {
		for (int i = j; i < n; i++) {
			y[i][j] = y[i][j - 1] - y[i - 1][j - 1];
		}
	}
	printf("\nThe backward difference table is:\n");
	for (int i = 0; i < n; i++) {
		printf("\n");
		for (int j = 0; j <= i; j++) {
			printf("%f\t", y[i][j]);
		}
	}

	p = 1.0;
	sum = y[n - 1][0];
	h = x[1] - x[0];
	u = (a - x[n - 1]) / h;
	for (int j = 1; j < n; j++) {
		p = p * (u + j - 1) / j;
		sum = sum + p * y[n - 1][j];
	}

	printf("\nThe value of y at x=%0.1f is %0.3f", a, sum);
	return 0;
}
