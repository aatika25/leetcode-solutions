#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(), cnt=0;
        if(n==0)
        {
            return 0;
        }
        vector<int> ps(n,0);
        ps[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            ps[i]=ps[i-1]+nums[i];
        }
        unordered_map<int,int> m;
        for(int j=0;j<n;j++)
        {
            if(ps[j]==k)
            {
                cnt++;
            }
            int val=ps[j]-k;
            if(m.find(val)!=m.end())
            {
                cnt+=m[val];
            }
            if(m.find(ps[j])!=m.end())
            {
                m[ps[j]]++;
            }
            else
            {
                m[ps[j]]=1;
            }
        }
        return cnt;
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
    int k;
    cout << "k = ";
    cin >> k;
    Solution s;
    cout << "ans = " << s.subarraySum(nums,k);
}