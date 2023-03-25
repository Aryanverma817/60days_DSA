#include<iostream>
using namespace std;

int f(int* x,int n, int i,int t){
    if(i==-1){
    
    }

    if(x[i]==t){
       cout<<i;

    }
    f(x,0,i-1,t);
    
    
}

int main(){
    int x[]={10,20,30,20,30};
    int n= sizeof(x)/sizeof(int);
    int t=30;

    cout<<f(x,n,n-1,t);
}