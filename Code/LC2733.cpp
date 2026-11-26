#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        set<int> m;
        for(int i:nums)
        {
            m.insert(i);
        }
        if(m.size()<=2)
        {
            return -1;
        }
        int a=*next(m.begin(),1);
        return a;
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
    cout << "ans = " << s.findNonMinOrMax(nums);
}