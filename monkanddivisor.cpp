#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;

int hsh[N];
int multiple_ct[N];

int main(){

    int n;
    cin>>n;

    for(int i = 0; i<n; i++){
       int x;
       cin>>x;

       hsh[x]++;
    }


    for(int i = 2; i<N; i++){
        for(int j = i; j<N; j+=i){
            multiple_ct[i] += hsh[j];
        }
    }

    int t;
    cin>>t;
    while(t--){
        int p , q;
        cin>>p>>q;

        long long ans = multiple_ct[p] + multiple_ct[q];
        long long  lcm = (p *1LL * q)/__gcd(p , q);

        if(lcm < N){
            ans = ans - multiple_ct[lcm];
        }

        cout<<ans<<"\n";
    }
}