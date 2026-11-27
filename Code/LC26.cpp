#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=1;
        while(i<nums.size() && j<nums.size())
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
            j++;
        }
        return i+1;
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
    Solution s;
    int k=s.removeDuplicates(nums);
    cout << "k = " << k;
    cout << "\nupdated array:\n";
    for(int i=0;i<k;i++)
    {
        cout << nums[i] << " ";
    }
}