//FIvanO
#include <bits/stdc++.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

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

    cout << "Enter the machine's string: ";
    cin >> mt;
    mt = 'e' + mt + 'e';

    int state = 0;
    int pos = 1;
    char rd = mt[pos];
    int l = mt.length();

    while (1) {
        cin.get();
        int i = 0;
        cout << mt << "; state: q" << state << endl;
        for (int i = 0; i < pos; ++i) cout << " ";
        cout << "^" << endl;
        rd = mt[pos];
        int ns = -1; // number of symbol
        int m = k[state];
        for (int i = 0; i < m; ++i) { // searching the number of symbol
            if (rd == q[state][i]) {
                ns = i;
                break;
            }
        }
        if (symb[state][ns] != rd) { // replacing the symbols
            mt[pos] = symb[state][ns];
            if (pos == l - 1) {
                mt = mt + 'e';
                l++;
            }
            if (pos == 0) {
                mt = 'e' + mt;
                pos++;
                l++;
            }
        }
        if (Move[state][ns] == 'R') pos++; else {
            if (Move[state][ns] == 'L') pos--; else {
                while (mt[1] == 'e') mt.erase(0, 1);
                cout << "Result: " << mt << endl;
                return 0;
            }
        }
        state = n_st[state][ns];
    }

    return 0;
}
