#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> s, e;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                s.push_back(nums[i]);
            }
            else if(nums[i]>pivot)
            {
                e.push_back(nums[i]);
            }
            else if(nums[i]==pivot)
            {
                cnt++;
            }
        }
        for(int i=0;i<cnt;i++)
        {
            s.push_back(pivot);
        }
        for(int i:e)
        {
            s.push_back(i);
        }
        return s;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> nums(n);
    cout << "enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int pivot;
    cout << "pivot = ";
    cin >> pivot;
    Solution s;
    vector<int> ans=s.pivotArray(nums,pivot);
    for(int i=0;i<n;i++)
    {
        cout << ans[i] << " ";
    }
}