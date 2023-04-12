#include<iostream>
using namespace std;
void insertionsort(int *arr,int n){
for(int i=0;i<n;i++){
    int temp=arr[i];
    int j=i-1;
    while(j>=0&& arr[j]>temp){
arr[j+1]=arr[j];
j--;

    }
    arr[j+1]=temp;
}

}
void print(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    insertionsort(arr,size);
    print(arr,size);
    return 0;

}