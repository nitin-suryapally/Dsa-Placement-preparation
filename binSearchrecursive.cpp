#include<bits/stdc++.h>
using namespace std;

bool binSearch(int *arr , int s , int e , int k){
    // base case

    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == k){
        return true;
    }

    else if (arr[mid] > k){
        return binSearch(arr , s , mid-1 , k);
    }

    else{
        return binSearch(arr , mid +1 , e , k);
    }
}

int main(){
    int arr[6] = {23 , 34 , 56 , 78 , 90 , 100};

    cout<<binSearch(arr , 0 , 6 , 10)<<"\n";
}