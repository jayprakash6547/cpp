#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        long long n;
        cin>>n;
        long long d=n/2;
      //  cout<<d<<"\n";

        if(n<=3)
        {
            cout<<"1"<<"\n"<<n;
            for(int i=1;i<=n;i++)
                    cout<<" "<<i;
            cout<<"\n";
        }
        else{

            cout<<d<<"\n";
            cout<<"3 1 2 3"<<"\n";
            if(n%2!=0)
                for(long long i=4;i<=n;i++){
                    cout<<"2 "<<i<<" ";
                    cout<<++i<<"\n";
            }
            else{
                for(long long i=4;i<n;i++){
                    cout<<"2 "<<i<<" ";
                    cout<<++i<<"\n";
                }
                cout<<"1 "<<n;
                cout<<"\n";
            }
        }

    }
    return 0;
}

