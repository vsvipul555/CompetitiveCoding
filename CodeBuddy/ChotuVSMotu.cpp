#include <bits/stdc++.h>

#define vi vector <int>
#define mii map <int,int>
#define pb push_back
#define mp make_pair
#define ll long long
#define vll vector <ll>
#define vi vector <int>
#define ii pair<int,int>
#define all(a) (a).begin(),(a).end()
#define FI cin.tie(NULL);ios_base::sync_with_stdio(false)
#define T int t; cin>>t; while(t--)
#define F first
#define S second
#define sz(x) (int)x.size()
#define endl '\n';
#define rep(i,a,b) for (int i=a;i<b;i++)

ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
using namespace std;

int main()
{
	T
	{
		int a,i;
		char str[10000];
		scanf(" %[^\n]", str);
		vi v;
		a=0;
		for (i=0;i<strlen(str);i++)
		{
			if (str[i]>='0' && str[i]<='9')
			{
				a=(a*10)+(str[i]-'0');
			}
			else
			{
				if (a>0)
					v.pb(a);
				a=0;
			}
		}
		int num=v[0]*v[3],dem=v[1]*v[2];
		int div=__gcd(num,dem);
		num/=div;
		dem/=div;
		cout<<num<<" "<<dem<<"\n";
	}
    return 0;
}
