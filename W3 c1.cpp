#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int n;
	cout<<"nhap so luong so can nhap n= ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if (a[i]==a[j])
			{
				cout<<"Yes";
				break;
			}
			
			else if(i==(n-1))
			{
				cout<<"No";
			}
		}
	}
}
