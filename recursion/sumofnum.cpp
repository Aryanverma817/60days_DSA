#include<iostream> 
using namespace std;
int sum(int x){
    //base case
    if(x==1){
        return 1;
    }
    //recursive case

int a=sum(x-1);
    
 return a+x;
}
int main(){
    int x;
    cin>>x;
    cout<<sum(x);
}