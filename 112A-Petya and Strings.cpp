#include<iostream>
using namespace std; 

int main()
{
    long long i; 
    string first,second; 

    while(cin>>first>>second)
    {
        for(i=0; i<first.size(); i++){
            if(first[i]>='A'&& first[i]<='Z'){
                f[i]=f[i]-'A'+97; 
            }
            if(second[i]>='A' && second[i]<='Z'){
                 s[i]=s[i]-'A'+97; 
            }
        }

        for(i=0;i<first.size();i++){
            if(first[i]>second[i]){
                cout<<"1\n"; 
                return 0; 
            }
            if(second[i]>first[i]){
                cout<<"-1\n"; 
                return 0; 
            }        
            }
            cout<<"0\n"; 



    }
    return 0; 
}