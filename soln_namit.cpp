#include<bits/stdc++.h>
using namespace std;
#define M long(1e9+7) // modulo
map<long, long> mp;
 
long int fun(long int i)
 {
	if (mp.count(i)) 
              return mp[i];
	long int k=i/2;
	if (i%2==0) 
             return mp[i] = (fun(k)*fun(k) + fun(k-1)*fun(k-1)) % M; 
        else 
	    return mp[i] = (fun(k)*fun(k+1) + fun(k-1)*fun(k)) % M;
 
}
main()
   {
	long int n,t;
	cin>>t;
	mp[0]=mp[1]=1;
	while(n,t--)
	{
	  cin>>n;
  	  cout << (n==0 ? 1 : fun(n+1)) << endl;
        }
   }
