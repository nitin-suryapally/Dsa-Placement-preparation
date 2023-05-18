#include <bits/stdc++.h>
using namespace std;

void merge2arr(int *arr, int s, int e)
{

    int mid = (s + e) / 2;

    int larr = mid - s + 1;
    int rarr = e - mid;

    int *first = new int[larr];
    int *second = new int[rarr];

    // copy the arrays in the rcorrect arrays

    int mind = s;
    
    for(int i = 0; i<larr; i++){
        first[i] = arr[mind++];
    }

    for(int i = 0; i<rarr; i++){
        second[i] = arr[mind++];
    }

    // merge the 2 sorted array algo to merge the arrays

    int lind = 0;
    int rind = 0;

    int mainindex = s;

    while (lind < larr && rind < rarr)
    {

        if (first[lind] < second[rind])
        {
            arr[mainindex] = first[lind];
            mainindex++;
            lind++;
        }
        else
        {
            arr[mainindex] = second[rind];
            mainindex++;
            rind++;
        }
    }

    // insert the remaining arrays

    if (lind < larr)
    {
        arr[mainindex] = first[lind];
        mainindex++;
        lind++;
    }

    if (rind < rarr)
    {
        arr[mainindex] = second[rind];
        mainindex++;
        rind++;
    }
}

void mergeSrt(int *arr, int s, int e)
{

    // base case

    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;

    // left array
    mergeSrt(arr, s, mid);
    // right array
    mergeSrt(arr, mid + 1, e);

    // merge both arrays
    merge2arr(arr, s, e);
}
int main()
{

    int arr[5] = {5, 3, 39, 4, 0};

    mergeSrt(arr, 0, 4);

    for(auto it : arr){
        cout<<it<<" ";
    }

    return 0;
}