#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i=1;
    while(i<=n){
    
        int k=1;
        int num=1;
        while(k<=i){
            cout<<num;
            num++;
            k++;

        }
        int j=1;
        while(j<=7-2*i){
            cout<<" ";
            j++;
        }
        
    
        
            

        
        i++;
        cout<<endl;
    }
    return 0;
}