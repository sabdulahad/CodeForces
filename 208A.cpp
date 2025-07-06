#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i =0;i<s.size();i++){
        if(s.substr(i,3) == "WUB"){
            if(i-1<0 || (i>0 && s.substr(i-1,1)==" ")){
                s.erase(i,3);
            }
            else {
                s.replace(i,3," ");
            }
            i-=1;
        }
    }
    cout << s;
}
