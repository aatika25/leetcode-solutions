#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sum(int num1, int num2) {
        int ans=num1+num2;
        return ans;
    }
};
int main()
{
    int num1, num2;
    cout << "num1 = ";
    cin >> num1;
    cout << "num2 = ";
    cin >> num2;
    Solution s;
    cout << s.sum(num1,num2);
}