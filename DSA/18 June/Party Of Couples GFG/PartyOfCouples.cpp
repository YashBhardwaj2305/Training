#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int findSingle(vector<int>&arr){
        int ans=0;
        for(auto i:arr){
            ans^=i;
        }
        return ans;
    }
};

int main(){
    Solution s1;
    int n,x;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    cout<<s1.findSingle(arr);
}
