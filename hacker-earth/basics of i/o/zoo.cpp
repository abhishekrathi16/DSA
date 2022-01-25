#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
	cin>>str;
	int i,z=0,o=0;
    for(i=0;i<str.length();i++){
        if(str[i]=='z'){
            z++;
        }
        else if(str[i]=='o'){
            o++;
        }else{
            cout<<"No"<<endl;
            exit(0);
        }

        if(z>1&&o>1&&str[i]=='z'){
            cout<<"No"<<endl;
            exit(0);
        }
    }
    if(2*z==o){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}