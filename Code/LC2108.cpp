#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s:words)
        {
            int i=0, j=s.size()-1, f=2;
            while(i<=j)
            {
                if(s[i]!=s[j])
                {
                    f=1;
                    break;
                }
                i++;
                j--;
            }
            if(f==1)
            {
                continue;
            }
            else
            {
                return s;
            }
        }
        return "";
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<string> words(n);
    cout << "enter the string elements:\n";
    for(int i=0;i<n;i++)
    {
        cin >> words[i];
    }
    Solution t;
    cout << "output = ";
    cout << t.firstPalindrome(words);
}