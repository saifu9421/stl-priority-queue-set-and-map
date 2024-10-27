#include<bits/stdc++.h>
using namespace std;
 class Student{
      public:
         string name;
          int roll;
          int marks;

            Student(string name,int roll,int marks){
                    this->name =  name;
                      this->roll =  roll;
                      this->marks = marks;
            };

               void print(){
                   cout<<name<<" "<<roll<<" "<<marks<<endl;
               };

 };

   class cmp{
        public:
            bool operator() (Student a,Student b){
                   if(a.marks > b.marks) return true;
                    else if(a.marks < b.marks) return false;
                    else{
                           if(a.roll > b.roll){
                            return true;
                           }else{
                             return false;
                           }
                    }
            };
   };

 int main(){
 
         int n;
           cin>>n;

             priority_queue<Student, vector<Student>,cmp> pq;

            //    priority_queue<Student,vector<Student>, greater<Student>> pq;
             for(int i = 0;  i<n; i++){
                      string name;
                        int roll;
                        int marks;
                          cin>>name>>roll>>marks;
                                  Student obj(name,roll,marks);
                                      pq.push(obj);
                                    
             };  

               while (!pq.empty())
               {
                   cout<<pq.top().name<<" "<<pq.top().marks<<" "<<pq.top().roll<<endl;
                   pq.pop();
               };
               


              
     return 0;
 }