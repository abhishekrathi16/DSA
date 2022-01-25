#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long double lld;
#define int long long   
#define all(x) x.begin(), x.end()

const int N=1e3+2, M=1e5+10, mod=1e9+7, inf = 1e17, moda = 998244353;

void solve(){
    int n;
    cin>>n;

    vector<int> a(n), b(n);
    int mi = mod;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mi = min(mi, a[i]);
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    int ans = inf;
    for(int i=0; i<=mi; i++){
        int op = 0;
        for(int j=0; j<n; j++){
            if(a[j] == i) continue;
            if(b[j]>a[j]){
                op = inf;
                break;
            }
            if((a[j]-i)%b[j] == 0){
                op=op+(a[j]-i)/b[j];
            }else{
                op = inf;
                break;
            }
        }
        ans = min(ans, op);
    }

    if(ans == inf){
        cout<<-1<<endl;
        return;
    }

    cout<<ans<<endl;
}

signed main(){

    ios::sync_with_stdio(false);
    cin.tie(0);  cout.tie(0);  
    cout<<setprecision(15)<<fixed;
    solve();
}