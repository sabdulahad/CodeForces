#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vii vector<pair<int,int>>
#define for(i,n,in) for(int i=0;i<n;i+=in)
#define takearray(_array, _size) for(i,_size,1) cin>>_array[i]

void solve(){
    int n,no=0,o=0;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x==-1) no++;
        else if(x==0) o++;
    }
    
    cout<< (o + (no%2)*2) << "\n";
}

int main() {
	int t;
	cin>>t;
	while(t--) solve();

}
