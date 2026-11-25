#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> m;
        for(int i:nums)
        {
            m.insert(i);
        }
        if(m.size()<3)
        {
            int a=*next(m.begin(),m.size()-1);
            return a;
        }
        int a=*next(m.begin(),m.size()-3);
        return a;
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
    cout << "ans = " << s.thirdMax(nums);
}