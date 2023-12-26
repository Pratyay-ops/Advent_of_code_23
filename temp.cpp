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
    return 0;
}