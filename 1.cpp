#include <bits/stdc++.h>
using namespace std;
#define ff first
#define sc ;
#define ss second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--){
	     ll n,k;
	     cin>>n>>k;
	     if(k==0){
	          cout<<"Yes"<<endl;
	          cout<<0<<endl;
	          continue;
	     }
	     if(k%2==0){
	          cout<<"No"<<endl;
	          continue;
	     }
	     ll ans=0;
	     for(ll i=31;i>=0;i--){
	          if(((1<<i)&k)!=0){
	               ans=i+1;
	               break;
	          }
	     }
	     
	     k=(k+(1<<ans)-1)/2;
	     cout<<"Yes"<<endl;
	     cout<<ans<<endl;
	     int ans1=1;
	     vector <int>a;
	     for(int i=ans-2;i>=0;i--){
	          if(((1<<i)&k)!=0)
	          {
	               a.push_back(ans1);
	               ans1+=(1<<i);
	          }
	          else{
	               ans1-=(1<<i);
	               a.push_back(ans1);
	          }
	     }
	     for(int i=ans-2;i>=0;i--){
	          cout<<a[i]<<endl;
	     }
	     cout<<ans1<<endl;
	}
	
}