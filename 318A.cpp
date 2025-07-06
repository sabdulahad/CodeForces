#include<iostream>
using namespace std;

int main(){
    long long n,k;
    long long a;
    
    cin>>n>>k;
    
    if(n%2==1) a=(n+1)/2;
    else a=n/2;
    
    if(k<=a) cout << 2*k-1;
    else cout << 2*(k-a);
}
