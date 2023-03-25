#include<iostream>
using namespace std;
int main(){
     int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
     int size=sizeof(arr)/4;
    
     int max=INT16_MIN;
     for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
             int sum=0;
            for(int k=i;k<=j;k++){
                sum=arr[k]+sum;
                if(max<=sum){
                    max=sum;
                }
              
               

            }
      }
    
   
     }
     cout<<endl;
 cout<<max;
}