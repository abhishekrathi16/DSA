#include<iostream>
#include<bits/stdc++.h>
#include<limits>
using namespace std;

#define max 100000

int main(){
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    if(a[N-1]%10==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}