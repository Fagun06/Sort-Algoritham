                   /**Bismillahir Rahmanir Rahim.**/
/*
         Md.Fagun Molla
         18ICTCSE006
         BSMRSTU
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
using ll=long long;
using db=double;
///***************************************************** CONSTANTS ******************************************************///

int const N=1e6+3;
ll MOD=1e9+7,fact[N];
const long long inf=(long long)1e18;
const long double PI=3.14159265358979;

///************************************************ CONTAINER DEFINITIONS ***********************************************///

typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

///************************************************ SHORT FORM KEYWORDS *************************************************///

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define I insert
#define lb lower_bound
#define ub upper_bound
#define endl '\n'

///************************************************ SHORT FORM FUNCTIONS ************************************************///

#define loop(a,b) for(ll i=a;i<b;i++)
#define loopr(a,b) for(ll i=a-1;i>=b;i--)
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<>())
#define rev(s) reverse(s.begin(),s.end())
#define stll(x) stoll(x, nullptr, 10);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
#define all(a) a.begin(),a.end()
#define mxa(a,N) *max_element(a,a+N)
#define mna(a,N) *min_element(a,a+N)
#define print(a) {for(auto x:a)cout<<x<<" ";cout<<endl;}
#define io() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


///************************************************ SOLUTION STARTS HERE ************************************************///
///======================================================================================================================///

int parition (int aa[], int low, int high) {
    int pivot=aa[high];
    int i=(low-1);

    for(int j=low; j<=high; j++) {
        if(aa[j]<pivot) {
            i++;
            swap(aa[i],aa[j]);
        }
    }
    swap(aa[i+1],aa[high]);
    return i+1;
}

void quicksort(int aa[], int low,int high) {
    if(low<high) {
        int pi = parition(aa,low,high);
        quicksort(aa,low,pi-1);
        quicksort(aa,pi+1,high);
    }
}
void solve(){
	int n; cin>>n;
    int aa[n];
    for(int i=0; i<n; i++) cin>>aa[i];
    quicksort(aa,0,n-1);
    for(int i=0; i<n; i++) cout<<aa[i]<<" ";
}
int main()
{
   	io();
    int T=1;//cin>>T;
    while(T--) solve();
    return 0;
}
//cout<<fixed<<setprecision(9)

/**************************************************ALHAMDULILLAH************************************************/
