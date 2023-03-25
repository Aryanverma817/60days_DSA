#include<iostream>

using namespace std;


int main(){
int fL,sL,tL;
fL=INT16_MIN;
sL=INT16_MIN;
tL=INT16_MIN;
int arr[]={10,20,5,30,50,70};
int size=sizeof(arr)/4;
for(int i=0;i<size;i++){
if(arr[i] > fL) {
			tL = sL;
			sL = fL;
			fL = arr[i];
		} else if(arr[i] > sL) {
			tL = sL;
			sL = arr[i];
		} else if(arr[i] > tL) {
			tL = arr[i];
		}
}
cout<< fL*sL*tL;
}