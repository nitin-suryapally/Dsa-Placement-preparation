#include<bits/stdc++.h>
using namespace std;

void revStr(string& str , int s , int e){
    // base case
    if(s > e){
        return ;
    }

    swap(str[s] , str[e]);
    s++;
    e--;

    cout<<str<<"\n";

    revStr(str , s , e);


}
int main(){

    string str = "nitinn";

    revStr(str , 0 , 5);

}