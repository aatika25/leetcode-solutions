#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0, e=nums.size()-1;
        while(st<=e)
        {
            int mid=st+(e-st)/2;
            if(nums[mid]<target)
            {
                st=mid+1;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else if(nums[mid]==target)
            {
                return mid;
            }
        }
        return st;
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
    cout << "target = ";
    int target;
    cin >> target;
    Solution s;
    cout << s.searchInsert(nums,target);
}