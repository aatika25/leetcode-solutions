#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reversePrefix(string s, int k) {
        int i=0, j=k-1;
        while(i<=j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
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
    cout << t.reversePrefix(s,k);
}