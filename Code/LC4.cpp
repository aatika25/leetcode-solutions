#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        for(int i:nums2)
        {
            nums1.push_back(i);
        }
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        if(n%2==0)
        {
            double f=nums1[n/2];
            double s=nums1[(n/2)-1];
            ans=(f+s)/2.0;
        }
        else
        {
            ans=nums1[n/2];
        }
        return ans;
    }
};
int main()
{
    int n1;
    cout << "nums1 size = ";
    cin >> n1;
    cout << "enter the elements in nums1:\n";
    vector<int> nums1(n1);
    for(int i=0;i<n1;i++)
    {
        cin >> nums1[i];
    }
    int n2;
    cout << "nums2 size = ";
    cin >> n2;
    cout << "enter the elements in nums2:\n";
    vector<int> nums2(n2);
    for(int i=0;i<n2;i++)
    {
        cin >> nums2[i];
    }
    Solution t;
    double ans=t.findMedianSortedArrays(nums1,nums2);
    cout << ans;
    return 0;
}