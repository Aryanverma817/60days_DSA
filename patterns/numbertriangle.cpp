#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
  
       int first=0;
     int second=1;
     int bucket;

for(int i=1;i<=n;i++){
   

for(int j=1;j<=n-i+1;j++){
cout<<j<<" ";
}
for(int k=1;k<=i-1;k++){
    cout<<"*"<<" ";
}
for(int k=1;k<=i-2;k++){
    cout<<"*"<<" ";
}

cout<<endl;

}


}