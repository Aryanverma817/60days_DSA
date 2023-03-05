#include<iostream>
using namespace std;
int digit(int x){
    if(x==0){
        return 0;
    }
    
    int num=x%10;
    int rem=digit(x/10);
 
    return num+rem;

}
int main(){
    int x;
    cin>>x;
    cout<<digit(x);
}