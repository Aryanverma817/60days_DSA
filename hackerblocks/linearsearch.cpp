#include<iostream>
using namespace std;


int linearsS(int *arr,int size,int key ){
   for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
        
       
    }
   return -1;
}

int main(){
    int arr[100000];
    int size;
    cin>>size;
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key: ";
    cin>>key;
    cout<<linearsS(arr,size,key);

   
}