#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            for(int j=i+1;j<n;)
            {
                int p=j+1, q=n-1;
                while(p<q)
                {
                    long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[p]+(long long)nums[q];
                    if(sum==target)
                    {
                        ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                        p++;
                        q--;
                        while(p<q && nums[p]==nums[p-1])
                        {
                            p++;
                        }
                    }
                    else if(sum<target)
                    {
                        p++;
                    }
                    else
                    {
                        q--;
                    }
                }
                j++;
                while(j<n && nums[j]==nums[j-1])
                {
                    j++;
                }
            }
        }
        return ans;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << "enter the elements:\n";
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int target;
    cout << "target = ";
    cin >> target;
    Solution s;
    vector<vector<int>> ans=s.fourSum(nums,target);
    cout << "the unique quadruplets:\n";
    for(vector<int> i:ans)
    {
        for(int u:i)
        {
            cout << u << " ";
        }
        cout << endl;
    }
}