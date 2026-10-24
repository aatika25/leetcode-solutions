#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt=0;
        for(int i:hours)
        {
            if(i>=target)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
int main()
{
    int n;
    cout << "no of employees = ";
    cin >> n;
    vector<int> hours(n);
    cout << "enter the hours for each employee:\n";
    for(int i=0;i<n;i++)
    {
        cin >> hours[i];
    }
    int target;
    cout << "target = ";
    cin >> target;
    Solution s;
    cout << s.numberOfEmployeesWhoMetTarget(hours,target);
}