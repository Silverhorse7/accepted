#include <bits/stdc++.h>
			using namespace std;
 
			///**************************** M a c r o ****************************///
#define fi(i,n) for(int x = 0 ; x<n;x++) //to write 2d arrays faster ,generally arrays use
#define ll long long
#define Speedo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,m,n) for(int i=m; i<n; i++)
#define all(x) x.begin(),x.end()
#define pb push_back
#define print(arr,size) for(int i = 0; i<size;i++){cout<<arr[i]<<" ";}cout<<endl;
#define news(f) int f; cin>>f;
#define endl          '\n'
#define return0 return 0
#define Endl endl
#define ull unsigned long long
#define ssort(arr,n) sort(arr,arr+n)
#define elif else if 
#define lo(f) if (f>='a' && f<='z')
#define up(f) if (f>='A' && f<='Z')
#define pff(a) a.size()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define test   cout<<" We Fucked up Here Boss_________________"<<endl
#define ezi(lblb) int lblb; cin>>lblb
#define ezll(lblb) ll lblb; cin>>lblb
///**************************** C o n s t ****************************///
		const double PI = acos(-1);
		const double eps = 1e-9;
		const int inf = 2000000000; //9 zeros
		const ll infLL = 9000000000000000000;
		const int lazy = int('a' - 'A');
		const ll N = 1e7 + 1;
		string alphabet = "abcdefghijklmnopqrstuvwxyz";
		ll sum = 0, final = 0, result = 0;
#define lmao(s,arr) for(int i =  0 ; i <s.size();i++){arr[i]=s[i];}
		///**************************** F U N C T I O N S  ****************************///
		//algorithm 
		//	A		Hello
		//	B		Codeforces
		// B.FIND(A[I])==FALSE ? -->A.ERASE(A[I]); :
		ull MOD=1000000007;
ll fastPower(ll b, ll p) {
    if (p == 0)
        return 1;
    ll ans = fastPower(b, p / 2);
    ans = (ans * ans);
    if (p % 2 != 0)
        ans = (ans * b);
    return ans;
}
		void it_is_me_dio_hahahahahaha()
		{
			int n;
			cin>>n;
			vector<int>mail;
			while(n--)
			{
				int k;
				cin>>k;
				mail.pb(k);
			}
			vector<int>result;
			for(int i = 0 ; i <mail.size();i++)
			{
				while(mail[i]==1)
				{
					i++;
					final++;

				}
				if(final!=0)
				{
					result.pb(final);
					final=0;
				}
			}
			if(result.size()==0)
			{
				cout<<0<<endl;return;
			}
			if(mail[mail.size()-1]==mail[0]&&mail[0]==1)
			{
				result.pb(result[0]+result[result.size()-1]);
			}
			sort(all(result),greater<int>());
			cout<<result[0]<<endl;
		}
		// kol al fekra  ank btshof lw tkrar al 7rf aktr mn al tanen
		int main()
		{
			Speedo;
			int t;
			t = 1;
			
			//cin >> t;
			while (t--)
			{
				it_is_me_dio_hahahahahaha();
			}	
		}
		// static (data type) by3'aly al data type mostmr 
		/**/