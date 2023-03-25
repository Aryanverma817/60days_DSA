#include<iostream>
using namespace std;
int search(int *arr,int n,int target){
    int start=0;
    int end=n-1;
    int mid=(start + end)/2;
    while(end>=start){
       if(arr[mid]==target){
        return mid;
       }
       else if(arr[mid]<target){
        start=mid+1;
       }
       else{
        end=mid-1;
       }
        mid=(start+end)/2;

    }
return 0;
}
int main(){
   int arr[100];
     int target;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
 
   cin>>target;
    cout<<search(arr,n,target);
}