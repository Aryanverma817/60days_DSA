#include<iostream>
#include<cstdlib>
#include<climits>

using namespace std;
int main() {
	int testcase;
	cin>>testcase;
	while(testcase!=0){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	int money;
	int ans[2]={0};
	cin>>money;
	int diff=INT_MAX;
	int mindiff=INT_MAX;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==money){
				diff = abs(arr[i]-arr[j]);
				if(mindiff>diff){
					mindiff=diff;
					ans[0]=min(arr[i],arr[j]);
					ans[1]=max(arr[i],arr[j]);
				}				
			}
		}
	}
	if(ans[0]==0 and ans[1]==0){
		for(int i=0;i<n;i++){
			if(money==arr[i]){
				ans[0]=arr[i];
			}
		}
	}
	cout<<"Deepak should buy roses whose prices are "<<ans[0]<<" and "<<ans[1]<<".";
	cout<<endl;
	testcase--;
	}

	return 0;
}