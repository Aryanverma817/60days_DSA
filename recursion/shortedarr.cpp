#include<iostream>
using namespace std;
int checkSort(int *arr, int size,int s,int e, int t){
if(s>e){
    return -1;
}
int mid=s+(e-s)/2;
if(arr[mid]==t){
    return mid;
}

if(arr[mid]<t){
    
    return checkSort(arr,size,mid+1,e,t);
}
else{
   return checkSort(arr,size,s,mid-1,t);
}
}
int main(){
    int arr[]={10,20,30,40,50};
    int size =sizeof(arr)/sizeof(int);
    int t=20;
    int i=0;
    int start=0;
    int end=size-1;
    
    cout<<checkSort(arr,size,start,end,t);

}