/*----------------------------*/
bool isPrime(int n){for(int i=2;i*i<=n;i++){if(n%i==0)return false;}return true;}
bool isvowel(char c){return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');}
bool isperfect(long long num){int count = 0;while (num & count<11) {count += num % 10;num /= 10;}return count == 10;}
/*----------------------------*/
#define ll long long
#define dd double
#define vi  vector<int> 
#define vvi vector<vector<int>>
#define mi map<int,int>
#define pr  pair<int,int>
#define unset unordered_set<int>
#define ff first
#define ss second
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
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
        int i=0,cnr=0,cnb=0,cng=0;
        while(i<n){
            if(line[i]==':' || line[i]==',' || line[i]==';'){
                //cout<<i<<"if1 "<<k<<"\n";
                if(line[i+3]!=' '){
                    //cout<<line[i+5]<<" "<<line[i+3]<<"\n";
                    if (line[i+5]=='b') cnb=max(cnb,((line[i+2]-'0')*10+line[i+3]-'0'));
                    else if(line[i+5]=='g') cng=max(cng,((line[i+2]-'0')*10+line[i+3]-'0'));
                    else if(line[i+5]=='r') cnr=max(cnr,((line[i+2]-'0')*10+line[i+3]-'0'));
                }
                if(line[i+3]==' ') {
                    if (line[i+4]=='b') cnb=max(cnb,line[i+2]-'0');
                    else if(line[i+4]=='g') cng=max(cng,line[i+2]-'0');
                    else if(line[i+4]=='r') cnr=max(cnr,line[i+2]-'0');
                }
            }
            i++;
        }
        cnt+=(cng*cnr*cnb);
    }
    cout<<cnt;
    return 0;
}