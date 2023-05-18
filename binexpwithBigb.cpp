#include <bits/stdc++.h>
using namespace std;
const long long m = 1e9 + 7;

int binexp(long long  a, long long b, long long m)
{

    long long int res = 1;

    while (b > 0)
    {

        if (b & 1)
        {
            res = (res * 1LL * a) % m;
        }

        a = (a * 1LL * a) % m;
        b = b >> 1;
    }

    return res;
}

int main()
{

    cout << binexp(50, binexp(62, 32, m - 1), m);
}