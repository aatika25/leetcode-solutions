#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=m;
        for(int i:nums2)
        {
            nums1[j]=i;
            j++;
        }
        sort(nums1.begin(),nums1.end());
    }
};
int main()
{
    int m, n;
    cout << "m = ";
    cin >> m;
    cout << "n = ";
    cin >> n;
    cout << "enter m elements for nums1:\n";
    vector<int> nums1(m+n);
    for(int i=0;i<m;i++)
    {
        cin >> nums1[i];
    }
    for(int i=m;i<m+n;i++)
    {
        nums1[i]=0;
    }
    cout << "enter n elements for nums2:\n";
    vector<int> nums2(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums2[i];
    }
    Solution s;
    s.merge(nums1,m,nums2,n);
    for(int i=0;i<m+n;i++)
    {
        cout << nums1[i] << " ";
    }
}