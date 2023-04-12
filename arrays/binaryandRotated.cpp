#include<iostream>
using namespace std;
int pivort(int *arr, int n){
int low=0;
int high=n-1;
int mid=low+(high-low)/2;
while(low<high){
if(arr[mid]>=arr[0]){
    low=mid+1;
}
else{
    high=mid;
}
mid=low+(high-low)/2;
}
return high;
}
int binary(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
     
        if (arr[m] == x)
            return m;
 
     
        if (arr[m] < x)
            l = m + 1;
 
        
        else
            r = m - 1;
    }
 
 
    return -1;
}

int main(){
    int arr[10000];
    int  size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
  int pivot=pivort(arr,size);
 
  if(k>=arr[pivot] && k<=arr[size-1]){
    cout<<binary(arr,pivot,size-1,k);
  }
  
  else{
      cout<<binary(arr,0,pivot-1,k);
  }
  


}