#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    string rev = string(str.rbegin(),str.rend());
    if(rev==str){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}