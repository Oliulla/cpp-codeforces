#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int nxt_rnd_prtcpnts[n];
    int nxt_rnd = 0;

    for(int i = 0; i < n; i++){
        cin >> nxt_rnd_prtcpnts[i];
    }

    for(int j = 0; j < n; ++j){
        if(nxt_rnd_prtcpnts[j] >= nxt_rnd_prtcpnts[k-1] && nxt_rnd_prtcpnts[j] > 0){
            nxt_rnd++;
        }
    }

    cout << nxt_rnd << endl;

    return 0;
}