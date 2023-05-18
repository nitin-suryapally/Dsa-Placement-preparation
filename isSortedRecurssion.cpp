#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *nums , int n){

    // base case
    if(n == 0 || n == 1){
        return true;
    }

    if(nums[0] > nums[1]){
        return false;
    }else{
        bool ans = isSorted(nums+1 , n-1);
        return ans;
    }

}



int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout << isSorted(arr, n)<<"\n";
}