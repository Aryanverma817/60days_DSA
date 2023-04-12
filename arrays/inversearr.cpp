#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int brr[100];
    int size;
    cin>>size;
    bool flag=0;
     for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    for(int i=0;i<size;i++){
        brr[arr[i]]=i;
    }
    for(int i=0;i<size;i++){
       
       if(arr[i]==brr[i]){
        flag=1;
       }
       else {
        flag=0;
        break;
        }

    }
    if(flag){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
}