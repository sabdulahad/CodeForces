#include <bits/stdc++.h>
using namespace std;

#define loop(i,n,in) for(int i=0;i<n;i+=in)
#define takeArray(array,size) for(int i=0;i<size;++i) cin>>array[i]
#define optimizeIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define cp int t;cin>>t;while(t--) solve()

void solve(){
    int n;
    cin>>n;
    
    if(n==1) {int x;cin>>x;cout<<1<<"\n";return;}

    vector<long long> a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
        if(i>0 and (a[i]==a[i-1] or a[i]-a[i-1]==1)){
            a.pop_back();
            i--;
            n--;
        }
    }
    cout<<n<<"\n";
    
}

int main() {
    optimizeIO;
    cp;
}

/*

3
2
2
1
3
1

*/