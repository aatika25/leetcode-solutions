#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0, j=nums.size()-1;
        while(i<=j)
        {
            if(nums[i]!=val)
            {
                i++;
            }
            else
            {
                swap(nums[i],nums[j]);
                j--;
            }
        }
        return i;
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
    int val;
    cout << "val = ";
    cin >> val;
    Solution s;
    cout << "k = " << s.removeElement(nums,val);
    cout << "\nthe elements after the process:\n";
    for(int i=0;i<n;i++)
    {
        cout << nums[i] << " ";
    }
}