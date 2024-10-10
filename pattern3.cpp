#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter number";
    cin>>n;
    int num=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<num;
        j++;
        num++;
    }
    i++;
    cout<<endl;

}
return 0;
}

