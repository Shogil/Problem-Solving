#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,sum=0;
    string x,y;
    cin>>n;
    cin>>x>>y;
    for(int i=0;i<n;i++){
      sum=sum+min(10-abs(x[i]-y[i]),abs(x[i]-y[i]));
     }
   cout<<sum;
   return 0;
}
    
