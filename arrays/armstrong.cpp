#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int digit;
    cin>>digit;
    int ndigit=digit;
    int orginal=digit;
    int num;
    int armstrong=0;
    int count=0;

    while(digit>0){
       
       digit=digit/10;
     count++;
       
    }



cout<<n;
    while(ndigit>0){
       num=ndigit%10;
       ndigit=ndigit/10;
       armstrong=pow(num,n)+armstrong;  
    }

   if(orginal==armstrong){
    cout<<"true";
   }
   else{
    cout<<"false";
   }
}