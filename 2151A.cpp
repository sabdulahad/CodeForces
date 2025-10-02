#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,m;
    cin>>n>>m;
    vector<long long> a(m);
    bool gd=1;
    for(int i=0;i<m;++i){
        cin>>a[i];
        if(i>0 && a[i]-a[i-1]!=1) gd=0;
    }
    
    if(m==1 && n==a[0]) cout<<1<<"\n";
    else cout << (gd?n-a[m-1]+1:1) <<"\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--) solve();

}
