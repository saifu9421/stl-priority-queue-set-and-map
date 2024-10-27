#include<bits/stdc++.h>
using namespace std;
 int main(){
      set<int> s;
       int n;
        cin>>n;
         while (n--)
         {
             int x;
              cin>>x;
               s.insert(x);
         };
           if(s.count(20)){
               cout<<"YES"<<endl;
           }else{
             cout<<"NO"<<endl;
           };
           
    //   vector<int> v;
          for(auto it = s.begin(); it != s.end();it++){
            //    v.push_back(*it);
              cout<<*it<<endl;
          };
        // reverse(v.begin(),v.end());
        // for(int i = 0; i<v.size() ; i++){
        //       cout<<v[i]<<endl;
        // };

           
     return 0;
 }