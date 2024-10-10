#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n";
    cin>>n;
    float m=n/2;
    int i=1;
    while(i<=m){
        float j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        float k=1;
        while(k<=m-i){
            cout<<" ";
            k++;
        }
        float p=1;
        while(p<=m-i){
            cout<<" ";
            p++;

        }
        float r=1;
        while(r<=i){
            cout<<"*";
            r++;
        }
        i++;
        cout<<endl;
    }
    float s=1;
    while(s<=m){
        float q=1;
        while(q<=m+1-s){
            cout<<"*";
            q++;

        }
        float w=1;
        while(w<=s-1){
            cout<<" ";
            w++;
        }
        float e=1;
        while(e<=s-1){
            cout<<" ";
            e++;
        }
        float t=1;
        while(t<=m+1-s){
            cout<<"*";
            t++;
        }
        s++;
        cout<<endl;
    }


    return 0;
}