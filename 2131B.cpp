#include <bits/stdc++.h>
using namespace std;

#define for(i,n) for(int i=1; i<=n; ++i)

void solve(){
    int n;
    cin>>n;
    if(n==2) cout<<-1<<" "<<2<<"\n";
    else{
        if(n%2==1){
            for(i,n){
                if(i%2 == 1) cout<<-1<<" ";
                else cout<<3<<" ";
            }
        }
        else{
            for(i,n){
                if(i==n) {cout<<2<<" ";return;}
                if(i%2==1) cout<<-1<<" ";
                else cout<<3<<" ";
            }
        }
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
