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
  #define prm(m,r,c) fr(i,0,r){frj(j,0,c){cout<<m[i][j]<<" "; }cout<<endl;}
  #define fillm(m,r,c,k) fr(i,0,a.size())frj(j,0,b.size())m[i][j]=k;
  constexpr auto PI  = 3.14159265358979323846L;
  constexpr auto eps = 1e-6;
  constexpr auto mod = 1000000007;
  #define MOD 1000000007
  #define maxv 200005
  #define MAXN 1000001

template<class T> ostream& operator<<(ostream& out, vector<T> vec) { out<<"("; for (auto& v: vec) out<<v<<", "; return out<<")"; }
template<class T> ostream& operator<<(ostream& out, set<T> vec) { out<<"("; for (auto& v: vec) out<<v<<", "; return out<<")"; }

int editdistance(string a,string b)
{

  int s1= a.length();
  int s2= b.length();
  int m[s2+1][s1+1];
  fillm(m,s2+1,s1+1,0);
  fr(i,0,s1+1)
  m[0][i]=i;
 
  fr(i,0,s2+1)
  m[i][0]=i;

  fr(i,1,s2+1)
  {
    frj(j,1,s1+1)
      {     

          if(b[i-1] == a[j-1]){
          m[i][j] = m[i-1][j-1];
        }  else
          m[i][j]= 1 + min(m[i-1][j],min(m[i-1][j-1],m[i][j-1]));

         // cout<<i<<j<<m[i][j]<<endl;
      }
  }
  //prm(m,s2+1,s1+1);
  int ans =m[s2][s1];
  return ans;
}


int main()
{

int t,n,x,m;
cin>>t;
while(t--){
  int w,e;
cin>>w>>e;

  string a,b;
cin>>a>>b;
cout<<editdistance(a,b)<<endl;

}

return 0;
}