#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
        for (int i=0; i<N; i++) {
            for (int j=0; j<=i; j++) {
                ans++;
                cout << ans << " ";
            }
            cout << "\n";
        }

    return 0;
}

