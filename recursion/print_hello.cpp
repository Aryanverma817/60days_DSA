#include<iostream>
using namespace std;
void print(int x){
if(x==0){
    return;
}    
cout<<"hello"<<x<<"\n";
print(x-1);
}
int main(){
    int x;
    cin>>x;
    print(x);
}