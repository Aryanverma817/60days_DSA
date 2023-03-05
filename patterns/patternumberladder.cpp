#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int value=1;
    while(i<=n){
int j=1;

while(j<=i-1){
cout<<value;
j++;
value++;
}
cout<<endl;
i++;
    }
}