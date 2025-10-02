#include <bits/stdc++.h>
using namespace std;

#define for(i,n) for(int i=0; i<n; ++i)

void solve(){
    int n, itr=1;
    cin>>n;
    int a[n], b[n];
    for(i, n){
        cin>>a[i];
    }
    for(i, n){
        cin>>b[i];
    }
    
    for(i, n){
        if(a[i]>b[i]) itr+=(a[i]-b[i]);
    }
    cout<<itr<<"\n";
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
