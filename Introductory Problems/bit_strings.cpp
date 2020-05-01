#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(ll i = a; i <= b; i++)
#define repd(i,a,b) for(ll i = a - 1; i >= b; i--)

int main() {
	ll t, n, result = 2;
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	rep(i,2,n){
		result = ((result % (ll)(pow(10,9) + 7)) * 2) % (ll)(pow(10,9) + 7);
	}
	cout<<result<<endl;
	return 0;
}
