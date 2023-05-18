#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{

    // base case

    if (n == 1)
    {
        return 1;
    }

    int smal = factorial(n - 1);
    int big = n * smal;
    return big;
}
int main()
{

    int n;
    cin >> n;

    cout << factorial(n);
}