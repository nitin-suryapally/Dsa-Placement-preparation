#include <bits/stdc++.h>
using namespace std;

void printb(int num)
{
    for (int i = 10; i >= 0; --i)
    {

        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main()
{

    int a;
    cin >> a;
    printb(a);

    // check if ith bit is set or unset

    if ((a & (1 << 3)) == 0)
    {
        cout << "unset";
    }
    else
    {
        cout << "set";
    }

    cout << endl;

    // set the ith bit

    printb((a | (1 << 2)));

    //  unset the ith bit

    printb((a & ~(1 << 3)));

    // toggle the ith bit

    printb(a ^ (1 << 3));
    printb(a ^ (1 << 2));

    // find the number of set bits

    int ct = 0;

    for (int i = 0; i <= 10; i++)
    {

        if ((a & (1 << i)) != 0)
        {
            ct++;
        }
    }

    cout<<ct;
}