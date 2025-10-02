#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, l=0,r=0,mx;
    cin>>n;
    vector<int> v(n);
    cin>>v[0];
    mx=v[0];
    for(int i=1;i<n;++i){
        cin>>v[i];
        if(v[i]>mx){
            mx=v[i];
            l=i;
        }
    }
    
    r=l;
    
    for(int i=0;i<n-1;++i){
        if((l-1 >= 0) && (v[l-1] == mx-1)){
            l=l-1;
            mx=v[l];
        }
        else if((r+1 < n) && (v[r+1] == mx-1)){
            r=r+1;
            mx=v[r];
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int t;
	cin>>t;
	while(t--) solve();

}
