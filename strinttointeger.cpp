
#include<bits/stdc++.h>
using namespace std;
int convert(string &str){
    int ans=0;
    for(int i=0;i<str.length();i++){
        if(str[i]-'0'>=0 && str[i]-'0'<=9){
            ans=ans*10+str[i]-'0';
            
        }
        else{
            return -1;
        }

    }
    return ans;
}


int main(){
    string str="43";
    
    cout<<convert(str);


    
    return 0;
}