#include<bits/stdc++.h>
using namespace std;
  #define ll long long
  #define fr(i,a,b) for(int i =a ; i < b; i++)
  #define frj(j,a,b) for(int j =a ; j < b; j++)
  #define fre(i,a,b) for(int i =a ; i <= b; i++)
  #define fra(s) for(auto it = s.begin(); it != s.end() ; ++it)

  #define mkp make_pair 
  #define pb push_back
  #define pii pair<int,int>
  #define speed   ios::sync_with_stdio(false), cin.tie(0) , cout.tie(0)
  #define c(a,b) cout<<a<<"--"<<b<<endl;
  #define frv(i,a,v) for(int i =  a ; i < v.size() ; ++i)
  #define cp(a,i)  cout<<a[i].first<<" "<<a[i].second<<endl;
  #define pp(a) cout<<a.first<<" "<<a.second<<endl;
  //sum array
  #define sa(n) int a[n]; int s[n];cin>>a[0];s[0]=a[0];fr(i,1,n) {cin>>a[i];s[i]=s[i-1]+a[i];}
  #define sa1(n) int a[n+1]; long long s[n+1]; a[0]=0; s[0]=0;cin>>a[1];s[1]=a[1];fr(i,2,n+1) {cin>>a[i];\
  s[i]=s[i-1]+a[i];}

  #define pr(a,n) fr(i,0,n){cout<<a[i]<<" ";}cout<<endl;
  #define prv(v)   for(auto it = v.begin() ; it!= v.end() ;++it){cout<<*it<<" ";}cout<<endl;
  #define all(x)           x.begin(), x.end()

  constexpr auto PI  = 3.14159265358979323846L;
  constexpr auto oo  = numeric_limits<int>::max() / 2 - 2;
  constexpr auto eps = 1e-6;
  constexpr auto mod = 1000000007;


  #define MOD 1000000007
  #define maxv 200005
  #define MAXN 1000001


 int lis(vector<int> v)
{
  int n = v.size();
  
  int lise[n]={0};
  fr(i,0,n)
  lise[i]=0;
  lise[0]=v[0];
  int mx=1;
  fr(i,1,n)
  {
    mx =v[i];
    frj(j,0,i)
      {
        if(v[j]<v[i])
          mx = max(mx,lise[j]+v[i]);
      }
    lise[i]=mx;
  }

  //pr(lise,n);
  fr(i,0,n)
    mx = max(mx,lise[i]);

    return mx;
}
int main()
{
int t;cin>>t;
while(t--){
int n,x;
cin>>n;
vector<int> v;
fr(i,0,n)
cin>>x,v.pb(x);
cout<<lis(v)<<endl;
}

  return 0;
}