#include<iostream>
using namespace std;
int pattern(int x){
    if(x==0){
        return;
    }
   
   for (int i=1;i<=x;i++){
    cout<<i;
   }
   cout<<endl;
    pattern(x-1);
}

int main(){
    int x;
    cin>>x;

}