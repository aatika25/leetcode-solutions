#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0;i<s.size();i=i+k+k)
        {
            if(i+k<=s.size())
            {
                reverse(s.begin()+i,s.begin()+i+k);
            }
            else
            {
                reverse(s.begin()+i,s.end());
            }
        }
        return s;
    }
};
int main()
{
    string s;
    cout << "s = ";
    cin >> s;
    int k;
    cout << "k = ";
    cin >> k;
    Solution t;
    cout << t.reverseStr(s,k);
}