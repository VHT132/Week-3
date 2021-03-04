#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
void nhap(double a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
double tong(double a[],int n)
{
	double tong=0;
	for(int i=0;i<n;i++)
	{
		tong=tong+a[i];
	}
	return tong;
}
double phuongsai(double a[],int n)
{	
	int ps=0;
	for(int i=0;i<n;i++)
	{
		ps=ps + (1/n) * (a[i])
	}
}
int main()
{
	int n;
	cout<<"nhap so so hang n= ";
	cin>>n;
	double a[n];
	nhap(a,n);
	cout<<tong(a,n)/n;
	double tb=tong(a,n);

}
