#include<iostream>
using namespace std;
int maxNumber(int * arr,int n){
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    return max;
}
int main(){
    int arr[10000];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<maxNumber(arr,size);
}