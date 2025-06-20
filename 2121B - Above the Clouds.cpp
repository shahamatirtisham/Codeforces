#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag = 0;
        for(int i=1;i<n-1;i++){
            int c1=0,c2=0;
            for(int j=0;j<i;j++){
                if(s[i] == s[j]){
                    c1 = 1;
                    break;
                }
            }
            for(int j=i+1;j<n;j++){
                if(s[i] == s[j]){
                    c2 = 1;
                    break;
                }
            }
            if(c1||c2){
                flag = 1;
                break;
            }
        }
        if(flag==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
