#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;
int sum=0;
while(n>0){
	int rem=n%10;
	sum=+rem*rem*rem;
	n=n/10;
}
if(n==sum){
	cout<<"armstrong no\n";
}
else{
	"not armstrong no\n";
}
	return 0;
}
