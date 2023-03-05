#include<iostream>
using namespace std;
int fact(int x){
//base case
if(x==0){
    return 1;
}
//recursive case
int a=fact(x-1);
return a*x;
}
int main(){
    int x;
    cin>>x;
   cout<<fact(x);
}