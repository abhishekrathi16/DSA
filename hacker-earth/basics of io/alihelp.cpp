#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //DDXDDD-DD
    string a;
    cin >> a;
    int b=a[0]+a[1];
    int c=a[3]+a[4];
    int d=a[4]+a[5];
    int e=a[7]+a[8];
    if(a[2]=='A' || a[2]=='E' || a[2]=='I' || a[2]=='O' || a[2]=='U' || a[2]=='Y'){
        cout<<"invalid"<<endl;
    }else{
        if(b%2==0 && c%2==0 && d%2==0 && e%2==0){
            cout<<"valid"<<endl;
        }else{
            cout<<"invalid"<<endl;
        }
    }
    return 0;
}