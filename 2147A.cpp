#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long x,y;
    cin>>x>>y;
    if(x-y == 1 || y==x || y==1) cout<<-1<<"\n";
    else if(x<y) cout<<2<<"\n";
    else cout<<3<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int t;
	cin>>t;
	while(t--) solve();

}
