#include<iostream>
#include<vector>
using namespace std;
int uniqocc(int *arr,int n){
    int arr1[100];
    int k=0;
     vector<bool> visited(n, false);

for(int i=0;i<n;i++){
    if (visited[i]==true)
    continue;
    int count=1;
    for(int j=0;j<n;j++){
        if(i!=j && arr[i]==arr[j]){
            visited[j]=true;
         count++;
          
        }
        

    }
    cout << arr[i] << " " << count << endl;
   
    
}

}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<uniqocc(arr,size);

}