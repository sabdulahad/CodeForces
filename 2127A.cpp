#include <bits/stdc++.h>
using namespace std;

void solve(){
    set<int> s;
    int n, x;
    cin>>n;
    while(n--){
        cin>>x;
        s.insert(x);
    }
    if( (s.size()==1 && x!=0) || (s.size()==2 && s.count(-1)==1 && s.count(0)==0) ){
        cout<<"YES\n";
        return;
    }
    else{
        cout<<"NO\n";
        return;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}

}