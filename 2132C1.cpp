#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, cost=0;
    cin>>n;
    
    while(n!=0){
        int x=0;
        for(int i=0;pow(3,i)<=n;++i){
	        x=i;
	    }
        // pow(3,x) <= n, if yes cost+=pow(3,x-1)*(9-x); n-=pow(3,x)
        cost += (pow(3,(x-1))*(9+x));
        n -= pow(3,x);
    }
    cout<<cost<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int t;
	cin>>t;
	while(t--) solve();

}
