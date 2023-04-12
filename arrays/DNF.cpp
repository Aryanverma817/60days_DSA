#include<iostream>
#include<algorithm>
using namespace std;
void dnf(int *arr,int n){
    int low=0;
    int high=n;
    int mid=0;
    while(high>mid){
        if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++; mid++;
        }
      else { // arr[mid] == 2
			high--;
			swap(arr[mid], arr[high]);
		}
    }
}
int main(){

    int arr[100000];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    dnf(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }

}