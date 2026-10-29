#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        vector<int> target;
        for(int i=0;i<n;i++)
        {
            target.insert(target.begin()+index[i],nums[i]);
        }
        return target;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << "enter the elements for vector nums:\n";
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    cout << "enter the elements for vector index:\n";
    vector<int> index(n);
    for(int i=0;i<n;i++)
    {
        cin >> index[i];
    }
    Solution s;
    cout << "answer vector:\n";
    vector<int> ans=s.createTargetArray(nums,index);
    for(int i=0;i<n;i++)
    {
        cout << ans[i] << " ";
    }
}