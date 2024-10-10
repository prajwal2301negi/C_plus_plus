#include<iostream>
using namespace std;
int main(){
     int n,i=1,sum=0;
     cout<<"enter number";
     cin>>n;
     while(n>0){
        //1.extract the dgit at one's place of n
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
     }
     cout<<sum<<endl;







    return 0;
} 