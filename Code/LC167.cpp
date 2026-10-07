#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=numbers.size()-1;
        vector<int> ans(2);
        while(i<j)
        {
            int ps=numbers[i]+numbers[j];
            if(ps>target)
            {
                j--;
            }
            else if(ps<target)
            {
                i++;
            }
            else
            {
                ans[0]=i+1;
                ans[1]=j+1;
                break;
            }
        }
        return ans;
    }
};
int main()
{
    int target;
    cout << "target = ";
    cin >> target;
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> numbers(n);
    cout << "enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin >> numbers[i];
    }
    Solution t;
    vector<int> ans=t.twoSum(numbers, target);
    cout << ans[0] << " " << ans[1];
    return 0;
}