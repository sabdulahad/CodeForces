#include <bits/stdc++.h>
using namespace std;


#define optimizeIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define cp int t;cin>>t;while(t--) solve()
#define endl "\n"


void solve(){

    int n;
    string s="";
    bool b = false;

    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;++i) cin>>a[i];
    int l=1,r=n;

    while(true){
        if(l>r) {cout<<s<<endl;return;}
        if(l==r) {s.push_back('L');cout<<s<<endl;return;}

        if(b){s+=(a[l]>a[r]?"LR":"RL");b=false;}
        else {s+=(a[l]<a[r]?"LR":"RL");b=true;}
        ++l;--r;
    }
    cout<<s<<endl;
}


int main() {
    optimizeIO;
    cp;
}

