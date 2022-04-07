//#pragma GCC optimize("Ofast")
//#pragma GCC optimize ("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Silver_is_better_than_Gold ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(),x.end()
#define pb push_back
#define endl       '\n'
#define return0 return 0
#define Endl endl
#define ull unsigned long long
#define elif else if
#define test   cout<<" We Droped up Here Boss _________________ "<<endl
#define allout(v) for(auto ele : v){cout<<ele<<" ";}cout<<endl
#define mk make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pcc pair<char,char>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define txt freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define ld long double
#define vb vector<bool>
#define no {cout<<"NO"<<endl;return ;}
#define yes {cout<<"YES"<<endl;return ;}
#define tests(x) for(int i =  1 ; i<=x;i++)
#define inp(v, n) for(int i = 0 ;  i<n;i++)cin>>v[i];
#define outp(v) for(auto ele : v){        cout << ele.first << " " << ele.second << " ";}cout<<endl
const ll mod = 1e9 + 7;
#define inti int i
#define sz(x) ((int) (x).size())
#define dups(divs)     divs.erase(unique(divs.begin(), divs.end()), divs.end());
#define fo(i, a, b) for(int i = a ; i<=b;i++)
#define outq(q)     queue<int>qq = q;while (qq.size()) { cout << qq.front() << " "; qq.pop();};
#define sttk(x) static_cast<ll>(x)
#define re register
#define intj int j
#define debug cout<<"Output is  :  ";
#define debug2 cout<<"End of the output______________________"<<endl;
#define acc(v) accumulate(v.begin(),v.end(),0ll)
#define range(i, n) for(int i = 0 ; i <n;i++)
#define point pair<int,int>
#define T int t;cin>>t;while(t--)
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

ll fastpow(ll base, ll power, ll M = mod) {
    if (power == 1) return base;
    ll val = fastpow(base, power / 2, M);
    return (power % 2 == 0) ? (val * val) % M : (((val * val) % M) * base) % M;
}

//#define int long long

//----------------------Code Starts Here-----------------------------//
const int MAX = 1e6 + 10 ;

int arr[MAX] , tree[MAX*30][2] , cnt[MAX*30] ;
int n , k ;

int id = 1 ;

void Insert(int x)
{
    int node = 1 ;
    for(int i = 29 ; i >= 0 ; --i)
    {
        int to = 0 ;
        if((x & (1 << i)))
            to = 1 ;
        if(!tree[node][to])
            tree[node][to] = ++id ;
        node = tree[node][to] ;
        cnt[node]++ ;
    }
}

int Query(int x)
{
    int node = 1 ;
    int ans = 0 ;
    for(int i = 29 ; i >= 0 ; --i)
    {
        if((k & (1 << i)))
        {
            int to ;
            if((x & (1 << i)))
                to = 0 ;
            else
                to = 1 ;
            if(!tree[node][to])
                return ans ;
            node = tree[node][to] ;
        }
        else
        {
            int to ;
            if((x & (1 << i)))
                to = 0 ;
            else
                to = 1 ;
            ans += cnt[tree[node][to]] ;
            to = !to ;
            if(!tree[node][to])
                return ans ;
            node = tree[node][to] ;
        }
    }
    ans += cnt[node] ;
    return ans ;
}

signed main()
{
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin>>n>>k ;
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i] ;
    long long ans = 0ll ;
    Insert(0) ;
    int now = 0 ;
    for(int i = 0 ; i < n ; ++i)
    {
        now ^= arr[i] ;
        ans += Query(now) ;
        Insert(now) ;
    }
    return cout<<ans<<"\n" , 0 ;
}