#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        int ops = 0;
        while (a <= n and b <= n)
        {
            if (a < b)
                a += b;
            else
                b += a;
            ops++;
        }
        cout << ops << endl;
    }
}