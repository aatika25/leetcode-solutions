#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2!=0)
        {
            return n*2;
        }
        return n;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    Solution s;
    cout << s.smallestEvenMultiple(n);
}