#include<iostream>
using namespace std;
int main(){
    int n=7;
    int i=1;
    while(i<=n){
        int num=1;
        int j=1;
        while(j<=i){
            cout<<num;
            j++;
            num++;

        }
        int k=1;
        while(k<=n-i){
            cout<<"*";
            k++;
        }

        i++;
        cout<<endl;

    }
    return 0;
}