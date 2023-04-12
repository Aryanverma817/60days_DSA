#include<iostream>
using namespace std;

void reverse(int *arr,int size){
    int i=0;
    int k=size-1;
    while(i<k){
        swap(arr[i],arr[k]);
        i++;
        k--;
    }

}


int main(){
    int arr[100];
    int arr3[100];
    int size1;
    cin>>size1;
    for(int i=0;i<size1;i++){
        cin>>arr[i];
    }
    int arr1[100];
    int size2;
    cin>>size2;
    for(int i=0;i<size2;i++){
        cin>>arr1[i];
    }
   int n=size1-1;
   int m=size2-1;
   int sum=0;
   int carry=0;
   int k=0;
   int value=0;
   while(n>=0 && m>=0){
    sum=arr[n]+arr[m]+carry;
    carry=sum/10;
    value=sum%10;
    arr3[k++]=value;
    n--;
    m--;
    
   }
 reverse(arr3,k);
 for(int out=0;out<k;out++){
       cout<<arr3[out]<<", ";
    }
    cout<< "end";


}
