#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter number";
    cin>>n;
    while(i<=n){
        //print n-i spaces
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        //print i stars
        int k=1;
        while(k<=i){
            cout<<"*";
            k++;

        }
        i++;
        cout<<endl;
    }
    return 0;
}