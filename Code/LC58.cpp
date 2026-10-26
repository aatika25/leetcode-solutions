#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(cnt>0)
            {
                if(s[i]==' ')
                {
                    break;
                }
            }
            if(s[i]!=' ')
            {
                cnt++;
            }
        }
        return cnt;
    }
};
int main()
{
    string a;
    cout << "string = ";
    getline(cin,a);
    Solution t;
    cout << t.lengthOfLastWord(a);
}