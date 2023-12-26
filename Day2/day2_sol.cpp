#define fr(i,a,n) for(int i=a; i<n; i++)
const int MOD=1e9+7;
#include<bits/stdc++.h>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int cnt=0;
    fr(k,1,101){
        string line;
        getline(cin, line);
        int n=line.size();
        int i=0,stat=0;
        while(i<n){
            if(line[i]==':' || line[i]==',' || line[i]==';'){
                //cout<<i<<"if1 "<<k<<"\n";
                if(line[i+2]=='1' && line[i+3]!=' '){
                    //cout<<line[i+5]<<" "<<line[i+3]<<"\n";
                    if (line[i+5]=='b' && line[i+3]>'4') stat++;
                    else if(line[i+5]=='g' && line[i+3]>'3') stat++;
                    else if(line[i+5]=='r' && line[i+3]>'2') stat++;
                }
                if(line[i+2]=='2' && line[i+3]!=' ') stat++;
            }
            i++;
        }
        if(stat==0) {
            cnt+=k;
        }
    }
    cout<<cnt;
    return 0;
}
