#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    int arr[]={10,20,30,40,50,60,70};
    int size=sizeof(arr)/4;
    for(int i=0;i<3;i++){
        int temp=arr[size-1];
        for(int j=size-2;j>=0;j--){
            arr[j+1]=arr[j];
        }
        arr[0]=temp;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}