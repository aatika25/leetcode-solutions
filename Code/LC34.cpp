#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans={-1,-1};
        int st=0, end=nums.size()-1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(nums[mid]==target)
            {
                ans[0]=mid;
                if(mid==0 || nums[mid-1]!=target)
                {
                    break;
                }
                else
                {
                    end=mid-1;
                }
            }
            else if(nums[mid]<target)
            {
                st=mid+1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
        }
        st=0, end=nums.size()-1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(nums[mid]==target)
            {
                ans[1]=mid;
                if(mid==nums.size()-1 || nums[mid+1]!=target)
                {
                    break;
                }
                else
                {
                    st=mid+1;
                }
            }
            else if(nums[mid]<target)
            {
                st=mid+1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
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
    vector<int> ans=s.searchRange(nums,target);
    cout << ans[0] << " " << ans[1];
}