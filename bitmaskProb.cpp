
#include<bits/stdc++.h>
using namespace std;



vector<vector<int>> subsets(vector<int> &nums)
{

    int n = nums.size();
    int num_mask = (1 << n);

    vector<vector<int>> allsubsets;

    for (int m = 0; m < num_mask; m++)
    {
        vector<int> subset;

        for (int i = 0; i < n; i++)
        {

            if ((m & (1 << i)) != 0)
            {
                subset.push_back(nums[i]);
            }
        }

        allsubsets.push_back(subset);
    }

    return allsubsets;
}


int main(){
    int n;
    cin>>n;

    vector<int> nums;
    

    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }

    auto ans = subsets(nums);

    for(auto it : ans){
        for(auto i : it){
            cout<<i<<" ";
        }
        cout<<"\n";
    }


}