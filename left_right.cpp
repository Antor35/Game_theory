#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a,b;
    cin >> t;
    for(int k=1; k<=t; k++){
        cin >> n;
        int nim=0;
        for(int i=0; i<n; i++){
            cin >> a >> b;
            nim^=(b-a-1);
        }
        nim?printf("Case %d: Alice\n",k):printf("Case %d: Bob\n",k);
    }
return 0;
}
