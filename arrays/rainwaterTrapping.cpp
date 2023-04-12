#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
    
    int arr[1000];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int left[1000];
    int right[1000];
    left[0]=arr[0];
    for(int i=0;i<size;i++){
        left[i]=max(left[i-1],arr[i]);
    }
    right[size-1]=arr[size-1];
    for(int i=size-2;i>=0;i--){
      right[i]=max(right[i+1],arr[i]);
    }
    int ans =0;
    for(int i=0;i<size;i++){
      ans = min(left[i],right[i])-arr[i]+ans;
    }
   
    cout<<ans;

}
    }


