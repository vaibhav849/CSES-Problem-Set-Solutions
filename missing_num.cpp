#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,sum = 0, temp;
    cin>>n;
    sum = n*(n+1)/2;
    for(int i = 1; i < n; i++){
        cin>>temp;
        sum -= temp;
    }
    cout<<sum<<endl;
    return 0;
}
