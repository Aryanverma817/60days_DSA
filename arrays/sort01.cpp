#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=size-1;
    while(i<=j){
       if(arr[i]==0 ){
            i++; 
        }
        if(arr[j]==1 ){
            j--;
        }
         if(arr[i]==1&&arr[j]==0&&i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}