#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i=1;
    int num=i;
    while(i<=n){
        int p=1;
        while(p<=n-i){
            cout<<" ";
            p++;
        }
        int j=1;
        
        while(j<=i){
            cout<<num;
            j++;
            num++;


        }

        int k=1;
        while(k<=i-1){
            num=num-2;
            cout<<num;
            num++;
            k++;

        }

        i++;
        cout<<endl;
    }    return 0;
}