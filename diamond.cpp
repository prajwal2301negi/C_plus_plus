#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter number";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=2*i-1){
            cout<<"*";
            k++;

        }
        i++;
        cout<<endl;

    }
    int p=1;
    while(p<=n){
        int r=1;
        while(r<=p){
            cout<<" ";
            r++;

        }
        int s=1;
        while(s <=n+4 - 2*p){
            cout<<"*";
            s++;

        }
        p++;
        cout<<endl;
    }
    return 0;
}