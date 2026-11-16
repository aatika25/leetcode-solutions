#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> digits(n);
    cout << "enter the digits:\n";
    for(int i=0;i<n;i++)
    {
        cin >> digits[i];
    }
    Solution s;
    s.plusOne(digits);
    cout << "ans:\n";
    for(int i=0;i<digits.size();i++)
    {
        cout << digits[i] << " ";
    }
}