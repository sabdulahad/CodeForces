// link: https://codeforces.com/contest/2094/problem/C

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void push(vector<int>& v, int num){
    if(find(v.begin(),v.end(),num) == v.end()){
        v.push_back(num);
    }
}

int vm(vector<int>& v){
    int max=v[0];
    for(int x:v){
        if(x>max) max=x;
    }
    return max;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> v;
        cin>>n;
        int arr[n][n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                push(v, arr[i][j]);
            }
        }

        int mx=vm(v);
        for(int i=1;i<=2*n;i++){
            if(find(v.begin(), v.end(), i)==v.end()){
                cout << i << " ";
            }
        }
        for(int x:v) cout << x << " ";
        cout << "\n";
    }
}
