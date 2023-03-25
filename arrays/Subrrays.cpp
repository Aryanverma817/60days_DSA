#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
      for(int k=i;k<size;k++){
          for(int j=i;j<=k;j++){
            cout<<arr[j];  
        }
 cout<<endl;
      }
      
    }
}