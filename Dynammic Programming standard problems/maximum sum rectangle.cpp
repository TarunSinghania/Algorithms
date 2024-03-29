   #include<bits/stdc++.h>
  using namespace std;
    #define ll long long
    #define fr(i,a,b) for(int i =a ; i < b; i++)
    #define FR(i,a,b) for(int i =a ; i > b; i--) 
    #define frj(j,a,b) for(int j =a ; j < b; j++)
    #define FRE(i,a,b) for(int i =a ; i >= b; i--) 
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
    #define prs(s)   for(auto x : s){cout<<x<<" ";}cout<<endl;
    
    #define all(x)           x.begin(), x.end()
    #define prm(m,r,c) fr(i,0,r){frj(j,0,c){cout<<m[i][j]<<" "; }cout<<endl;}
    #define fillm(m,r,c,k) fr(i,0,r)frj(j,0,c)m[i][j]=k;
    constexpr auto PI  = 3.14159265358979323846L;
    constexpr auto eps = 1e-6;
    constexpr auto mod = 1000000007;
    #define MOD 1000000007
   // #define maxv 200005
    #define MAXN 100001

  template<class T> ostream& operator<<(ostream& out, vector<T> vec) { out<<"("; for (auto& v: vec) out<<v<<", "; return out<<")"; }
  template<class T> ostream& operator<<(ostream& out, set<T> vec) { out<<"("; for (auto& v: vec) out<<v<<", "; return out<<")"; }

pair<int,pair<int,int> > kadane(int a[],int n){

  int gsi = 0;
  int gse =0;
  int si =0;
  int ei =0;
  ll global_max = INT_MIN;
  ll max_till_here= 0;
  fr(i,0,n)
  {
    max_till_here+=a[i];
  //  cout<<max_till_here<<endl;

   if(max_till_here>global_max)
      gsi=si,gse=i,global_max=max_till_here;
   if(max_till_here<=0)
      si=i+1,max_till_here=0; 
  }
  pair<int,pair<int,int> > ans;
  ans.first=global_max;
  ans.second.first=gsi;
  ans.second.second=gse;
  return ans;
}


void solve(){
  
  int r,c;
  cin>>r>>c;
  int m[r][c];
  fr(i,0,r)
    {
      frj(j,0,c)
      {

      cin>>m[i][j];

      }
    } 


  int global_max=INT_MIN;
  int grs,gre,gcs,gce;

  fr(i,0,c)
  { 
    int kad[r]={0};
    frj(j,i,c)
    {

      for(int p=0;p<r;p++)
      {
        kad[p]+=m[p][j];
      }
     // pr(kad,r);
      pair<int,pair<int,int> >tmp=   kadane(kad,r);
      if(tmp.first>global_max)
        global_max=tmp.first,gcs=i,gce=j,grs=tmp.second.first,gre=tmp.second.second;
    }
  }

  cout<<global_max<<endl;//<<" "<<gcs<<gce<<grs<<gre<<endl;

}
  
    int main(){
      speed;
        

      int t;
      cin>>t;
      while(t--)
      {
        solve();        
      }
      return 0;

  }