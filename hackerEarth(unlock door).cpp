#include <bits/stdc++.h>
using namespace std;
const long long int m = 1e9 + 7;
const int N = 1e5;
int fact[N];

int binexp(long long a, long long b, long long m)
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
    int t;
    cin >> t;

    fact[0] = 1;

    for (int i = 1; i < N; i++)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % m;
    }

    while (t--)
    {
        int k, n;
        cin >> n >> k;

        int ans = fact[k];
        cout<<fact[k]<<"\n";
        int dec = fact[k - n];
        cout<<dec<<'\n';

        ans = (ans * (binexp(dec, m - 2, m))) % m;

        cout<<ans;
    }
}