#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int mi=x%10;
        while(x!=0){
            if(x%10 < mi) mi=x%10;
            x/=10;
        }
        cout<<mi<<"\n";
    }
}