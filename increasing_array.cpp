#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vi;
typedef pair<long long int,long long int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(long long int i = a; i < b; i++)

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int n,sum = 0,temp;
	cin>>n;
	vi v;
	REP(i,0,n){
		cin>>temp;
		v.PB(temp);
	}
	REP(i,1,n){
		if(v[i] < v[i - 1]){
			sum = sum + (v[i - 1] - v[i]);
			v[i] = v[i - 1];
		}
	}
	cout<<sum<<endl;
	return 0;
}
