#include<bits/stdc++.h>
using namespace std;


int partion(int arr[] , int s , int e){

    int pivot = arr[s];

    // find the right position of the pivot

    int ct = 0;
    for(int i = s+1; i<=e; i++){

        if(arr[i] <= pivot){
            ct++;
        }
    }

    int pivotindex = s + ct; // pivot index

    // arrange the left part and right part of the array

    // we swap and put the pivot in right position

    swap(arr[s] , arr[pivotindex]);

    // now rearrage such that for i<pivotindex are at left and vise versa

    int i = s;
    int j = e;
    while(i < pivotindex && j > pivotindex){

        // point to the element which is greater than pivot on the left side
        while(arr[i] < pivot){
            i++;
        }
        // point to the element which is less than pvot on the right side
        while(arr[j] > pivot){
            j--;
        }

        // swap the elements which are not according to the partion

        if(i < pivotindex && j > pivotindex){
            swap(arr[i++] , arr[j--]);
        }
    }

    return pivotindex;
}

void quickSort(int arr[] , int s , int e){

    // base case
    if(s >= e){
        return;
    }

    int p;
    // find the partion
    p = partion(arr , s , e);

    // sort the lft part 

    quickSort(arr , s , p-1);

    // soet the right part

    quickSort(arr , p+1 , e);


}
int main(){

    int arr[5] = {7, 3 , 9 , 10 , 1};

    quickSort(arr , 0 , 4);

    for(int i = 0; i<5; i++){
        cout<<arr[i]<< " ";
    }
    cout<<"\n";
}