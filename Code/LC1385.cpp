#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt=0;
        for(int i=0;i<arr1.size();i++)
        {
            bool flag=true;
            for(int j=0;j<arr2.size();j++)
            {
                if(abs(arr1[i]-arr2[j])<=d)
                {
                    flag=false;
                    break;
                }
            }
            if(flag==true)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
int main()
{
    int n, m;
    cout << "arr1 size = ";
    cin >> n;
    cout << "enter arr1 elements:\n";
    vector<int> arr1(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr1[i];
    }
    cout << "arr2 size = ";
    cin >> m;
    vector<int> arr2(m);
    cout << "enter arr2 elements:\n";
    for(int i=0;i<m;i++)
    {
        cin >> arr2[i];
    }
    int d;
    cout << "d = ";
    cin >> d;
    Solution s;
    cout << s.findTheDistanceValue(arr1,arr2,d);
}