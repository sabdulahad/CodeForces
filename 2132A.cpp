#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a,b,c;
    int la,lb;
    cin>>la>>a>>lb>>b>>c;

    for(int i=0; i<lb; ++i){
        if(c[i]=='V') a=b[i]+a;
        else a=a+b[i];
    }
    cout<<a<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}