
#include <iostream>

int main() {
    int n, k;
   int count=0;
   
   int t;
   std::cin>>t;
   while(t--)
   {
   std::cin>>n>>k;
   
   while(n)
   {
       if(n%k==0) n/=k;
       ++count;
       --n;
   }
   std::cout<<count<<"\t"<<n<<std::endl;
   count=0;
   }
   