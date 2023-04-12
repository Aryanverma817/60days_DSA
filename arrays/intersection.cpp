#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[100];
    int arr1[100];
    int size;
    cin>>size;
    int count=0;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    } 
   
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
     for(int i=0;i<size;i++){
      for(int j=0;j<size;j++){
       if(arr[i]==arr1[j]){
        arr[count]=arr1[j];
        arr1[j]=-1;
        count++;
        break;
       }
    } 
sort(arr,arr+count);
    }
    cout<<"[";
       cout<<arr[0];
      for(int i=1;i<count;i++){
        cout<<","<<arr[i];
    }
     cout<<"]";

    
   
}