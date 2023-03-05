#include<iostream>
using namespace std;
int fibo(int x){
if(x==0){
    return 0;
}
if(x==1){
    return 1;
}
int a=fibo(x-1);
int b=fibo(x-2);
return a+b;
}
int main(){
    int x;
    cin>>x;
  cout <<fibo(x);
}