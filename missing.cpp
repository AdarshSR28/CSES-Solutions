//KEEP IT SIMPLE STUPID

#include<bits/stdc++.h>

#pragma GCC optimize ("O3")
#pragma GCC target ("avx")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define print(v) for(auto it=(v).begin();it!=(v).end();it++) {cout<<*it<<" ";}
#define ll long long
#define w(t) ll t;cin>>t;while(t--)

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
using namespace std;


void solve()
{
    int flag=0;
    ll n,p;
    std::ios::sync_with_stdio(false);
    cin>>n;
    ll a[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>p;
        a[p-1]=p;
    }
    for(int i=0;i<n;i++)
    {
        if(!(a[i]==i+1))
            {
                cout<<i+1;
                break;
            }

    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}

/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
*/