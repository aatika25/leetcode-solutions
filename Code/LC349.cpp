#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> ans;
        vector<int> a;
        int n=nums1.size(), m=nums2.size();
        if(n>=m)
        {
            for(int i=0;i<m;i++)
            {
                if(find(nums1.begin(),nums1.end(),nums2[i])!=nums1.end())
                {
                    ans.insert(nums2[i]);
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end())
                {
                    ans.insert(nums1[i]);
                }
            }
        }
        for(int i:ans)
        {
            a.push_back(i);
        }
        return a;
    }
};
int main()
{
    int n, m;
    cout << "size of nums1 = ";
    cin >> n;
    cout << "enter elements for nums1:\n";
    vector<int> nums1(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums1[i];
    }
    cout << "size of nums2 = ";
    cin >> m;
    vector<int> nums2(m);
    cout << "enter elements for nums2:\n";
    for(int i=0;i<m;i++)
    {
        cin >> nums2[i];
    }
    Solution s;
    vector<int> ans=s.intersection(nums1,nums2);
    cout << "output:\n";
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << " ";
    }
}