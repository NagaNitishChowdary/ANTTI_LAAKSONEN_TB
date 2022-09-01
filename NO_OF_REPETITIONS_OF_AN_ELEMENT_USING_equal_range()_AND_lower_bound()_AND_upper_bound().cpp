#include<bits/stdc++.h>

#define LL long long int 
#define EB emplace_back
#define PB pop_back
#define F first
#define S second
#define MP make_pair
#define NEXT "\n"
#define LOOP(i,a,b) for(int i=a;i<=b;i++) 

using namespace std;

/*****************KNNC******************/


void solve()
{
    // FINDING NO OF REPETITIONS OF AN ELEMENT USING LOWER BOUND AND UPPER BOUND
    int arr[10]={1,2,2,2,2,2,2,3,4,5};
    auto knnc=lower_bound(arr,arr+10,2)-arr;
    auto har=upper_bound(arr,arr+10,2)-arr;
    cout<< har-knnc <<"\n";

    auto h=equal_range(arr,arr+10,2);
    cout<< h.second-h.first <<"\n";
}

int main(int argc,char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    solve();
}

