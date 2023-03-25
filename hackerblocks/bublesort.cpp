#include<iostream>
using namespace std;
int main(){
int arr[1000];
int n;
cin>>n;
for(int i=0;i<n;i++){
 cin>>arr[i];   
}
for(int j=0;j<n;j++){
for(int i=0;i<n-1;i++){
 if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
 }
}
}

for(int i=0;i<n;i++){
 cout<<arr[i]<<" "; 
}
}