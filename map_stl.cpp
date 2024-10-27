#include<bits/stdc++.h>
using namespace std;
 int main(){
    //   map<string ,int> mp;
    //    mp.insert({"sakib all  hasan",23});
    //     mp.insert({"saif",12});
    //     mp.insert({"kamal",45});
    //     mp.insert({"jamal",67});
      map<string,int> mp;
       mp["saif"] = 24;
        mp["kamla"] = 56;
         mp["jamal"] = 45;
          mp["sakib all hasan"] = 100;
         for(auto it = mp.begin(); it != mp.end();it++){
             cout<<it->first<<" "<<it->second<<endl; 
         };

             if(mp.count("saif")){
                   cout<<"true"<<endl;
             }else{
                 cout<<"false"<<endl;
             }
     return 0;
 }