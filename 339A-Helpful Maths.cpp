#include<iostream>
using namespace std; 

int main()
{
    long long i; 
    string s; 
    while(cin>>s){
        for(i=0;i<s.size()-2;i+=2){
            if(s[i]>s[i+2]){
                int temp=s[i]; 
                s[i]=s[i+2]; 
                s[i+2]=temp; 
            }
        }
    }
    cout<<s; 
    return 0; 
}