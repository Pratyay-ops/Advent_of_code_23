#include <bits/stdc++.h>
using namespace std;
int code(std::istream &cin, std::ostream &cout) {
    int t = 1000;
    long long sum = 0;
    while (t--) {
        string line;
        cin >> line;
        int lstat = 0, rstat = 0, n = line.size();
        long long a=0, b=0;
        for (int x = 0; x < n; x++) {
            if ((line[x] >= '0' && line[x] <= '9') && lstat == 0) {
                lstat = 1;
                a=line[x] - '0';
            }
            if ((line[n - x - 1] >= '0' && line[n - x - 1] <= '9') && rstat == 0) {
                rstat = 1;
                b= line[n - x - 1] - '0';
            }
            if(lstat==1 && rstat==1) break;
        }
        a=a*10 + b;
        sum+=a;
    }
    cout << sum << endl;
    return 0;
}
