#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int value = 0;
    while (n--)
    {
        string str;
        cin >> str;
        char op = str[1];
        if (op == '+')
            value++;
        else
            value--;
    }

    cout << value << endl;
}