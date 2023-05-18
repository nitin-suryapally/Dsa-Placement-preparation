#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int m = 47;
    cin >> n;

    long long fact = 1;
    for (int i = 2; i <= n; i++)
    {

        // fact = ((fact)%m*(i)%m)%m;
        fact = (fact * i) % m;
    }

    cout << fact;
}