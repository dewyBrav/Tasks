#include <iostream>

int main()
{

int fiveValue=10789;
int arr[5];
for(int i=0;i<5;++i)
{
	arr[i]=fiveValue%10;
fiveValue/=10;
}
for(int i=4; i<=0;--i)
	std::cout<<arr[i]<<" ";
std::cout<<std::endl;
return 0;
}