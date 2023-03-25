#include<iostream>
using namespace std;
int main(){
    
    int arr[10000];
    int size;
    cin>>size;
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
   for(int i =0; i<size-1; i++){
    int small =i;
    for(int j=i+1;j<size;j++){
       if(arr[j]<arr[small]){
        small=j;
   
     }
      swap(arr[small],arr[i]);
     

    }

    
   }

    for(int i =0;i<size;i++){
       cout<<arr[i]; 
    }

}