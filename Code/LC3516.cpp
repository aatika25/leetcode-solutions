#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a1=abs(z-x);
        int a2=abs(z-y);
        if(a1<a2)
        {
            return 1;
        }
        else if(a2<a1)
        {
            return 2;
        }
        return 0;
    }
};
int main()
{
    int x, y, z;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    Solution s;
    cout << s.findClosest(x,y,z);
}