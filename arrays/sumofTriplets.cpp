#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[100];
    int i,j,k;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    sort(arr,arr+size);
    for(i=0;i<size-2;i++){
        for(j=i+1;j<size-1;j++){
            for(k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                   cout<<arr[i]<<" "<<arr[j]<<" and "<<arr[k]<<endl;
                    }
                }
               
            }
        }
    }
