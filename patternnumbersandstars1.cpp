#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    while(i<=n){
        int num=1;
        int j=1;
        while(j<=n+1-i){
            cout<<num;
            num++;
            j++;
        }
        int k=1;
        while(k<=i-1){
            int j=1;
            while(j<=2*i-3){
                cout<<"*";
                j++;

            }
            break;
            k++;
            cout<<endl;


        }
        i++;
        cout<<endl;
    }


    return 0;
}

