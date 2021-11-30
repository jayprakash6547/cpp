#include<iostream>
using namespace std;
int main()
{ int n;
cin>>n;
bool temp;
for(int i=0;i<=n;i++){
	if(n%i==0){
		temp=false;
		break;
	}
}
if(n<=1){
	temp=false;
}
if(temp){
	cout<<"prime\n";
}
else{
	cout<<"not a prime no\n";
}
	return 0;
}
