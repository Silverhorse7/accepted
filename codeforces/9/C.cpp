#include <bits/stdc++.h>
#include <vector>
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
#define pii pair<int,int>pair
//#define int ll
#define star *
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
#define allout(first) for(auto ele : first) {cout<<ele<<" ";}cout<<endl;
#define f(i,n) for(int i = 0 ; i<n;i++)
#define ceil(x) static_cast<long long>(ceil(x))
#define float(x) static_cast<long long>(float(x))
#define round(x) static_cast<long long>(round(x))
///**************************** F U N C T I O N S  ****************************///
//Comment Code Block Ctrl + K + C / Ctrl + K + U-->remove comment
template <class T = int>
T scan() {
	T res;
	std::cin >> res;
	return res;
}
int invertBits(int num)
{
	int x = log2(num) + 1;
	for (int i = 0; i < x; i++)
		num = (num ^ (1 << i));
	return num;
}
bool correctbracketsequence(string s)
{
	stack<char>stk;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			stk.push(s[i]);
		}
		else {
			if (stk.size() > 0)
			{
				stk.pop();
			}
			else {
				return false;
			}
		}
	}
	if (stk.size() > 0)return false;
	return true;
}
void checklater()//that bitmasks problem
{
	string s;
	cin >> s;
	if (count(all(s), 'A') == count(all(s), 'B') and count(all(s), 'C') % 2 != 0)
	{
		cout << "YES" << endl; return;
	}
	int koko = count(all(s), 'A');
	int lolo = count(all(s), 'B');
	if (koko < lolo)
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'C')s[i] = 'A';
		}
	}
	if (koko > lolo)
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'C')s[i] = 'B';
		}
	}
	// first one is (
	char kekw = s[0];
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == kekw)s[i] = '(';
		else {
			s[i] == ')';
		}
	}
	if (correctbracketsequence(s))
	{
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
int sums(string s)
{
	int lol = 0;
	for (auto ele : s)
	{
		lol += (ele - '0');
	}
	return lol;
}
void doall(vector<string>v,string lol)
{
	do {
		v.push_back(lol);
	} while (next_permutation(all(lol)));
}
int digsum(string s)
{
	int sum = 0;
	for (auto ele : s)
	{
		sum += (ele - '0');
	}
	return sum;
}
bool pal(string s)
{
	string koko = s;
	reverse(all(koko));
	if (koko == s)
	{
		return 1;
	}
	else {
		return 0;
	}
}
bool isPrimeNumber(long long n) {
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}
bool check(vector<int>v)
{
	for (int i = 0; i < v.size() - 1; i++)
	{
		if (!isPrimeNumber(v[i] + v[i + 1]))return 0;
	}
	return 1;
}
int koko = 0;
int trials = 0;
vector < vector<int>>memo; 
ll fastpower(ll base, ll power, ll m)
{
	if (power == 0)return 1;
	int res = fastpower(base, power / 2, m) % m;
	res *= res;
	if (power % 2)
	{
		return ((res % m) * (base % m)) % m;
	}
	else {
		return res % m;
	}
}
/*You need to process Q queries. In each query, you will be given three integers l, r and k.
	You need to print the number of integers x between l and r inclusive, such that g(x) = k.***
	*/
	// f(n)= product of non-zero digit in n
	// g(n) = n , if n<10
	// g(n) = g(f(n)) else
	/*		4
		22 73 9
		45 64 6
		47 55 7
		2 62 4
	*/
	//g(33) = 9 as g(33) = g(3 × 3) = g(9) = 9	
	
	// u will search from l to r , for a number  that product of it's digits is k 
void it_was_me_dio_hahahahahaha()// if u need precision with ceil
// remove the ceil macro
{
	string s;
	cin >> s;
	int sz = s.size();
	vector<ll>shosho;
	while (true)
	{
		//base case
		if (sz == 0)break;
		string koko = "";
		for (int i = 0; i < sz; i++)
		{
			koko += '1';
		}
		shosho.push_back(stoull(koko));
		int haha = koko.size() - 1;
		while (true)
		{
			koko[haha] = '0';
			shosho.push_back(stoull(koko));
			koko[koko.size() - 1] = '0';
			do {
				shosho.push_back(stoull(koko));
			} while (prev_permutation(all(koko)));

			haha--;
			//base case
			if (haha == -1)break;
		}
		sz--;
	}
	sort(all(shosho));
	vector<ll>::iterator it;
	it = unique(shosho.begin(), shosho.end());
	shosho.resize(distance(shosho.begin(), it));
	int finale = 0;
	for (int i = 1; i < shosho.size(); i++)
	{
		if (shosho[i]<= stoull(s))
		{
			finale++;
		}
	}
	cout << finale << endl;
}
int main()
{
	Speedo;
	int t;
	t = 1;
	while (t--)
	{
		it_was_me_dio_hahahahahaha();
	}
}
// static (data type) by3'aly al data type mostmr 
/**/
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
	* DON"T GET STUCK ON ONE PROBLEM
*/