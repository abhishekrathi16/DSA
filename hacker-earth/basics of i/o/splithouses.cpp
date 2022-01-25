#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]=='H'&&v[i+1]=='H'){
            cout<<"NO"<<endl;
            exit(0);
        }else if(v[i]=='.'){
            v[i]='B';
        }
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}