#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n,true);
        int cnt=0;
        for(int i=2;i<n;i++)
        {
            if(isPrime[i])
            {
                cnt++;
                for(int j=i*2;j<n;j=j+i)
                {
                    isPrime[j]=false;
                }
            }
        }
        return cnt;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    Solution s;
    cout << "ans = " << s.countPrimes(n);
}