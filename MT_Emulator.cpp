//FIvanO
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long LL;

int k[100];

int main()
{
    ios_base::sync_with_stdio(0);

    char q[1000][100]; // state - symbol
    char Move[1000][100]; // direction of next step
    int n_st[1000][100]; // new state
    char symb[1000][100]; // new symbol
    string mt = "";

    string fName;
    cout << "Enter the name of file: ";
    cin >> fName;
    ifstream f(fName);

    int n;
    f >> n;
    for (int i = 0; i < n; ++i) { // reading the data from file
        char c;
        int m;
        f >> m >> c >> c >> m;
        f >> q[m][k[m]];
        f >> c >> c >> c;
        f >> n_st[m][k[m]];
        f >> symb[m][k[m]];
        f >> Move[m][k[m]++];
        //cout << i+1 << ") q" << m << q[m][k[m] - 1] << "  ->  q" << n_st[m][k[m] - 1] << symb[m][k[m] - 1] << Move[m][k[m] - 1] << endl;
    }

    return 0;
}
