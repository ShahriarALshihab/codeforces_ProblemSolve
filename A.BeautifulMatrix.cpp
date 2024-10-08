
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n=0, sum=0;

    for(int i=1;i<=5; i++){
        for(int j=1;j<=5;j++){
            cin >> n;
            if(n==1){
                sum= abs(i-3)+ abs(j-3);
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
