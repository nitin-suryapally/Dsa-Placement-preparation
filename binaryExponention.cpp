#include<bits/stdc++.h>
using namespace std;


int resbinexp(int a , int b){


    if(b == 0) return 1;

    long long res = resbinexp(a, b/2);

    if(b&1){
        return a * res *res;
    }
    else{
        return res*res;
    }
}

int itbinexp(int a , int b){

    long long res = 1;

    while(b > 0){

        if(b&1){
            res = res *a;
            a = a*a;
            b = b>>1;
        }

        else{

            a = a*a;
            b = b>>1;
        }
    }

    return res;
}


int main(){
    int a = 3;
    int b = 3;

    cout<< resbinexp(a , b);
    cout<< itbinexp(a , b);

}