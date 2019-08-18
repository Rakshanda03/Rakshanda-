#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    vector<int> v;
    int size;
    cin>>size;
    int a,m,n,p;
    for(int i=0;i<size;i++)
    {
      cin>>a;
      v.push_back(a);
    }
    cin>>n;
     v.erase(v.begin()+n-1);

    cin>>m>>p;
   v.erase(v.begin()+m-1,v.begin()+p-1);

   cout<<v.size()<<endl;
   for(int i=0;i<v.size();i++){
   cout<<v[i]<<" ";
   }
    
    return 0;
}
