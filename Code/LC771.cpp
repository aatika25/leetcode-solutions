#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt=0;
        for(char c:stones)
        {
            if(jewels.find(c)!=string::npos)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
int main()
{
    string jewels, stones;
    cout << "jewels = ";
    cin >> jewels;
    cout << "stones = ";
    cin >> stones;
    Solution s;
    cout << s.numJewelsInStones(jewels,stones);
}