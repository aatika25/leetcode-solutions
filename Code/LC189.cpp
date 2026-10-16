#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> t;
        int i=k;
        while(i!=0)
        {
            t.push_back(nums[n-i]);
            i--;
        }
        for(int j=0;j<n-k;j++)
        {
            t.push_back(nums[j]);
        }
        nums=t;
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
    int k;
    cout << "k = ";
    cin >> k;
    Solution s;
    s.rotate(nums,k);
    for(int i=0;i<n;i++)
    {
        cout << nums[i] << " ";
    }
}