#include<bits/stdc++.h>
using namespace std;
const long long int m = 1e18+7;

int binexp(long long a , long long b){

    // if a if of 10^18 form 

    // a = a%m

    // and 

    // a s of form 2^2024

    // the 
    // a = bimexp(2 , 2024)

    long long int res = 1;

    while(b > 0){

        if(b&1){

            res = binmul(res , a);
        }

        a = binmul(a  , a);
        b = b>>1;
    }

    return res;
}


int binmul(long long a , long long b){

    long long ans = 0;

    while(b > 0){
        if(b & 1){
            ans = (ans + a)%m;
        }

        a = (a+a)%m;
        b = b>>1;
    }
}

int main(){

    // can find the bin exp a^b when m <= 1e18 and a <= 10^18;

}