#include <iostream>
using namespace std;

int main()
{
    int t;
    int x=0;
    string s;
    
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>s;
        if(s[0]=='+' || s[1]=='+') x++;
        else x--;
    }

    cout << x;
}
