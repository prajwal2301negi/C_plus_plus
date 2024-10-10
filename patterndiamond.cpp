#include<iostream>
using namespace std;

int main(){
    int n=9;
    int m=n-n/2;
    int i=1;
    while(i<=m){
        int k=1;
        while(k<=m-i){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=2*i-1){
            cout<<"*";
            j++;

        }
        
        
        int r=1;
        while(r<=m){
            cout<<" ";
            r++;
        }
        
        
        int p=1;
        while(p<=2*(m-i)-1){
            cout<<"*";
            
            p++;

        }
        
        i++;
        cout<<endl;


    }

    return 0;
}