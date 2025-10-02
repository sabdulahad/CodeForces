#include <bits/stdc++.h>
using namespace std;

/* key points

1. x[i]==y[i] or x[i]+y[i]==s --> then the ball is going to be potted (if its not hit)
2. next movement => {
    x += dx * (0.5)
    y += dy * (0.5)
}

3. if (y==0 or y==s) then dy, 
   if (x==0 or x==x) then dx

4, number and types of collisions,
    ->

I hate my life.....
*/

void solve(){
    int n,ans=0;
    long long s;
    cin>>n>>s;
    while(n--){
        int dx,dy;
        long long x,y;
        cin>>dx>>dy>>x>>y;
        if((x==y && dx==dy) or (x+y==s && dx!=dy)) ++ans;
    }
    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	int t;
	cin>>t;
	while(t--) solve();

}
