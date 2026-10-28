#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0, end=nums.size()-1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(target>nums[mid])
            {
                st=mid+1;
            }
            else if(target<nums[mid])
            {
                end=mid-1;
            }
        }
        return -1;
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
    cout << "target = ";
    int target;
    cin >> target;
    Solution s;
    cout << s.search(nums,target);
}