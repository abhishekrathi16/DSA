#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m=n/2;
    string a[m],b[m],s1="",s2="",s3="";
    int e=0,o=0;
    for(int i=0;i<m;i++){
        cin>>a[i];
        s1+=a[i][0];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        s2+=b[i][b[i].size()-1];
    }
    s3=s1+s2;
    for(int i=0;i<s3.size();i++){
        if(i%2==0){
            e+=s3[i];
        }else{
            o+=s3[i];
        }
    }
    if((e-o)==0 || (e-o)%11==0){
        cout<<"OUI"<<endl;
    }else{
        cout<<"NON"<<endl;
    }
    return 0;
}