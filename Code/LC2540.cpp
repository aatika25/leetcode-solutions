#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                return nums1[i];
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
        }
        return -1;
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
    cout << "enter elements for nums2:\n";
    vector<int> nums2(n);
    for(int i=0;i<m;i++)
    {
        cin >> nums2[i];
    }
    Solution s;
    cout << s.getCommon(nums1,nums2);
}