#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(ll i = a; i < b; i++)
#define repd(i,a,b) for(ll i = a - 1; i >= b; i--)

int main() {
	ll n, five = 0;
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i = 5; n/i >= 1; i *= 5){
		five += (n/i);
	}
	cout<<five;
	return 0;
}
