#include<bits/stdc++.h>
using namespace std;
const long long int m = 1e9+7;

int binexp(long long int a, long long int b, long long int m){

    long long int res = 1;

    while(b > 0){

        if(b&1){
            res = (res * a)%m;
        }

        a = (a * a)%m;
        b = b>>1;
    }

    return res;

}


int main(){
    cout<<binexp(2 , m-2 , m);
}