#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b;
    cin>>a>>b;

    if(a%2==0 and b%2==1) {cout<<-1<<"\n";return;}    
    
    long long sol = (((a+b)%2==0) ? (a+b) : -1);

    if(a%2==1 and b%2==1) {cout<<max(sol, (a*b + 1))<<"\n";return;}
    if(a%2==1 and (b%2==0 and b%4!=0)) {cout<<-1<<"\n";return;}
    if((a%2==1 and b%2==0) or (a%2==0 and b%2==0)){
        long long te = (2+ (a*b)/2);
        if(te%2==0){
            cout<<te<<"\n";
            return;
        }
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin>>t;
    while(t--) solve();
    
}