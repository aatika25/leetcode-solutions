#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0, j=nums.size()-1;
        while(i<j)
        {
            int a=nums[i];
            int b=nums[j];
            if(a<0 && abs(a)==b)
            {
                return b;
            }
            else if(abs(a)>b)
            {
                i++;
            }
            else
            {
                j--;
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
    Solution s;
    cout << "ans = " << s.findMaxK(nums);
}