#include <iostream>
using namespace std;

string solve(int n, int arr[]){
    for(int i=0; i<n; ++i){
        
        int a=arr[i], b=arr[a-1], c=arr[b-1];//a=2,b=4,c=1
        if(c-1 == i){
            return "YES";
            break;
        }
    }
    // 5
    // 2 4 5 1 3

    
    return "NO";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<solve(n, arr);
    
}
