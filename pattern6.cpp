#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter no";
    cin>>n;
    while(i<=n){
        //print n-i stars

        int j=1;
    

        while(j<=n-i){
            cout<<" ";
            j++;

            
        
            
        }
        //print i numbersstarting with i in increasing order
        int num=i;
        int k=1;
        while(k<=i){
            cout<<num;
            k++;
            num++;
        }
        i++;
        cout<<endl;

    }

    return 0;

}