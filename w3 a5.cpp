/* #include <iostream>
#include <cstdlib> 
#include <ctime> */ 


#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
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
int main(){
    srand((int)time(0));
    int a[30];
    for(int i = 0; i < 30; ++i){
        a[i] = random(1,100);
        
    }    
    for(int i = 0; i < 30; ++i){
        
        cout<<a[i]<<" ";
    }    
    cout<<"\n sau khi sap xep: "<<endl;
    sapxep(a,30);
    for(int i = 0; i < 30; ++i){
        
        cout<<a[i]<<" ";
    }    
    
}

