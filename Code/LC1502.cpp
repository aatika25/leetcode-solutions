#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff=arr[1]-arr[0];
        for(int i=2;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]!=diff)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    Solution s;
    if(s.canMakeArithmeticProgression(arr))
    {
        cout << "Yes, can make AP";
    }
    else
    {
        cout << "No, cannot make AP";
    }
    return 0;
}