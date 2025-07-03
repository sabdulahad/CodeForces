#include<iostream>
#include<vector>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie();

    int n,k, in;
    int count=0;
    vector<int> nums;

    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>in;
        nums.push_back(in);
    }

    int x=k-1;
    for(int i=0;i<n;i++){
        if(nums[x]!=0 && nums[i]>=nums[x]){
            count++;
        }
        else if(nums[x]==0 && nums[i]>nums[x]){
            count++;
        }
    }

    cout<<count;
    
}
