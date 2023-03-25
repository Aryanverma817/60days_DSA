#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
     for(int i=0;i<size;i+=2){
     if(i+1<size){
        swap(arr[i],arr[i+1]);
        
     }
    }
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}