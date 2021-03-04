#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int tongchan(int a[],int n)
{
	double tongchan=0;
	for(int i=0;i<n;i++)
	{
		if(a[i] % 2 == 0)
		{
			tongchan=tongchan+a[i];
		}
	}
	return tongchan;
}
int sole(int a[],int n)
{
	double count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i] % 2 != 0)
		{
			count=count+1;
		}
	}
	return count;
}
void doi(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void sapxep(int a[], int n){	
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
	        if(a[i] > a[j])  
		        doi(a[i], a[j]);
}
int main()
{
	int n;
	cout<<"nhap so so hang n= ";
	cin>>n;
	int a[n];
	nhap(a,n);
	sapxep(a,n);
	cout<<"Min = "<<a[0]<<endl;
	cout<<"Max = "<<a[n-1]<<endl;
	cout<<"tong cac so chan = "<<tongchan(a,n);
	cout<<"\nso so le = "<<sole(a,n)<<endl;


}
