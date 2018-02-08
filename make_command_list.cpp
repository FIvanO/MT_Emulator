//FIvanO
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long LL;

int main()
{
    ios_base::sync_with_stdio(0);

    string fName;
    int n;

    cout << "Enter the name of file: ";
    cin >> fName;
    cout << endl;
    cout << "Enter the number of commands: ";
    cin >> n;
    cout << endl;
    ofstream f(fName);

    f << n << endl;

    for (int i = 0; i < n; ++i) {
        string st;
        char Move;
        string n_st;
        char symb;
        char n_symb;
        cout << i + 1 << " command" << endl;
        cout << "Enter the state: ";
        cin >> st;
        cout << "Enter the symbol: ";
        cin >> symb;
        cout << "Enter the new state: ";
        cin >> n_st;
        cout << "Enter the new symbol: ";
        cin >> n_symb;
        cout << "Enter the next direction: ";
        cin >> Move;
        cout << endl;
        if (n_st == "q*") n_st = "q-1";
        f << i + 1 << ") " << st << " " << symb << "  ->  " << n_st << " " << n_symb << " " << Move << endl;
    }

    return 0;
}
