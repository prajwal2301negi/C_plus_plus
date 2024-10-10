#include<iostream>
using namespace std;
int main(){
    int n,i=1,sum=0;
    cout<<"enter number";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"sum is"<<sum;
    return 0;
}