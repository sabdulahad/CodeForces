#include <bits/stdc++.h>
using namespace std;


#define optimizeIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define cp int t;cin>>t;while(t--) solve()

void solve(){
    
    /*
    done - 1. first comes first if n<3 then how am i supposed to find 3 ways hence cout no
    done - 2. if one of the number is not present in any of the set then cout No
    3. if every number is repeated only once then there is ony 1 way to choose hence cout no
    4. if there is any single box where every number is present then it is possible to get more than 3 ways
       |-> simply, if any li==m


    5. propose, if every number is at least present twice in all sets then its 'yes'

    */
    
    
    int n,m,ct=0;
    bool flag=false;
    cin>>n>>m;

    vector<int> cnt(m+1);
    vector<unordered_map<int,int>> sets(n+1);

    for(int i=1;i<=n;++i){
        int l;
        cin>>l;
        if(l==m) flag=true;
        for(int j=1;j<=l;++j){
            int x;
            cin>>x;
            cnt[x]++;
            sets[i][x]++;
        }
    }
    
    if(n>=3 and flag) {cout<<"YES\n";return;}
    for(int i=1;i<=m;++i){if(cnt[i]==0){cout<<"NO\n";return;}}


    for(int i=1;i<=n;++i){
        if(ct==2) {cout<<"YES\n";return;}
        bool s=true;
        for(auto p:sets[i]){
            if(cnt[p.first]-p.second == 0){s=false;break;}
        }
        if(s) ct++;
    }
    if(ct==2) cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    optimizeIO;
    cp;
}

