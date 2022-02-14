#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,w,h,n;
    cin>>l;
    cin>>n;
    while(n-->0){
        cin>>w>>h;
        if(w<l || h<l){
            cout<<"UPLOAD ANOTHER"<<endl;
        }else{
            if(h==w){
                cout<<"ACCEPTED"<<endl;
            }else{
                cout<<"CROP IT"<<endl;
            }
        }
    }
    return 0;
}