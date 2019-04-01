#include<bits/stdc++.h>

using namespace std;


struct Tier{
 public: int first;
public: int second;


public: int distance(Tier tier){
int firstCheck=abs(first-tier.first);
int secondCheck=abs(first-tier.second);
return firstCheck+secondCheck;
}
};
int main(){

//  freopen("in.txt","r",stdin);
  int n,num;
scanf("%d",&n);
 Tier tiers[n+2];

  for( int i=1;i<=2*n;++i){

    scanf("%d",&num);

     if(tiers[num].first ==NULL || tiers[num].first == '\0'){

   tiers[num].first = i;
   continue;

 }
   tiers[num].second=i;

  }

   printf("%d\n",tiers[1].first);


 int dist=0;
  for(int i=2;i<=n;++i){

   dist+=tiers[i].distance(tiers[i-1]);

  }
  printf("%d\n",dist);


return 0;
}
