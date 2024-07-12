#include <bits/stdc++.h>
using namespace std;
string convtobinary(int x)
{
    string res = "";
    while (x >= 1)
    {
        if (x % 2 == 1)
        {
            res += '1';
        }
        else
        {
            res += '0';
        }
        x = x / 2;
    }
    reverse(res.begin(), res.end());
    

    return res;
}

int convtodecimal(string x)
{
    int n = x.length();
    int num = 0;
    for (int i = n; i >= 0; i--)
    {
        int p2 = 0;

        if (x[i] == 1)
        {
            num = num + p2;
        }
        p2 = p2 * 2;
    }
    return num;
}

int main()
{
    int x;
    cin >> x;
    cout << convtobinary(x) << endl;
    return 0;
}