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
#define allout(v) for(auto Ele : v){cout<<Ele<<" ";}cout<<endl
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
#define outp(v) for(auto Ele : v){        cout << Ele.first << " " << Ele.second << " ";}cout<<endl
const ll mod = 1e9 + 7;
#define inti int i
#define sz(x) ((int) (x).size())
#define dups(divs)     divs.erase(unique(divs.begin(), divs.end()), divs.end());
#define fo(i, v, b) for(int i = v ; i<=b;i++)
#define outq(q)     queue<int>qq = q;while (qq.size()) { cout << qq.front() << " "; qq.pop();};
#define sttk(x) static_cast<ll>(x)
#define re register
#define intj int j
#define debug cout<<"Output is  :  ";
#define debug2 cout<<"End of the output______________________"<<endl;
#define sum(v) accumulate(v.begin(),v.end(),0ll)
#define range(i, n) for(int i = 0 ; i <n;i++)
#define point pair<int,int>
#define T int QQ;cin>>QQ;while(QQ--)
string s, t;

void naive(string s) {
    string ans = s;
    for (int j = 0; j < s.size(); j++) {
        if (ans[j] != 'z') {
            ans[j]++;
            if (ans > s and ans < t) {
                cout << ans << endl;
                exit(0);
            }
            ans[j]--;
        }
    }
}

signed main() {
    Silver_is_better_than_Gold;
    cin >> s >> t;
    bool x = 1;
    naive(s);
    for (int i = 0; i < s.size(); i++) {
        string ans = s;
        if (ans[i] < t[i]) {
            ans[i]++;
            for (int j = i + 1; j < s.size(); j++)
                ans[j] = 'a';
            if (ans > s and ans < t) {
                cout << ans << endl;
                exit(0);
            }
        }
    }
    cout << "No such string" << endl;

}