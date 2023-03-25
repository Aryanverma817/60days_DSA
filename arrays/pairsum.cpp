#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int size;
    cin>>size;
     for(int i=0;i<size;i++)
    {
      cin>>arr[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++){
            if((arr[i]+arr[j])==target){
             if (arr[i]>arr[j])
             {
                  cout<<arr[j]<<" and "<<arr[i];
             }
             else{
                 cout<<arr[i]<<" and "<<arr[j];
             }
             
                cout<<endl;
            }
        }
    } 
}