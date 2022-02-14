#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,cg,cp,part,tc1=0,tc2=0;
    cin>>t;
    while(t-->0){
        cin>>cg>>cp;
        cin>>part;
        int q1[part],q2[part];
        for(int i=0;i<part;i++){
            cin>>q1[i]>>q2[i];
        }
        //for q1=green and q2=purple
        for(int i=0;i<part;i++){
            if(q1[i]==1){
                tc1+=cg;
            }
            if(q2[i]==1){
                tc1+=cp;
            }
        }

        //for q1=purple, q2=green
        for(int i=0;i<part;i++){
            if(q1[i]==1){
                tc2+=cp;
            }
            if(q2[i]==1){
                tc2+=cg;
            }
        }
        if(tc2>tc1){
            cout<<tc1<<endl;
        }else{
            cout<<tc2<<endl;
        }
        tc1=0;
        tc2=0;
    }
    return 0;
}