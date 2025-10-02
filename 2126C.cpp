#include <bits/stdc++.h>
using namespace std;

#define cp ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);int t;cin>>t;while(t--) solve();

void solve(){
    long n,k,mcur,wcur=0;
    cin>>n>>k;
    unordered_set<long> us;
    vector<long> h;
    for(long i=1;i<=n;++i){
        long x;
        cin>>x;
        if(i==k) mcur=x; // saved as value
        us.insert(x);
    }
    if(us.size() == 1) {cout << "YES\n";return;}
    h.push_back(0);
    for(auto it:us) h.push_back(it);
    sort(h.begin(), h.end());
    
    auto mp = lower_bound(h.begin(),h.end(),mcur); // found the value
    while(mp!=h.end()-1){
        if((*mp)-wcur < (*(mp+1))-(*mp)){cout<<"NO\n";return;}
        wcur += (*(mp+1))-(*mp);
        ++mp;
    }
    cout << "YES\n";
    
}

int main(){
    cp
}