#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else{
       return gcd((b%a),a);
    }
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
int a,b;
cin>>a>>b;
//passing values to function LCM
cout<<lcm(a,b);
}

