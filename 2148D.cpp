#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    long long sum=0;
    cin>>n;
    
    vector<long long> odd;
    
    while(n--){
        long long x;
        cin>>x;
        if(x%2==0) sum+=x;
        else odd.push_back(x);
    }
    if(odd.empty()) cout<<0<<"\n";
    else{
        sort(odd.begin(), odd.end(), greater<long long>());
        for(int i=0;i<odd.size();++i){
            sum+=odd[i];
            odd.pop_back();
        }
        cout<<sum<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int t;
	cin>>t;
	while(t--) solve();

}
