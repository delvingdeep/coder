#include <bits/stdc++.h>

using namespace std;

/* --------------- Solution code -------------- */
int factorial(int n) {
    int result;
    if(n == 1) { result = 1; }
    else if (n > 1) { result = n*factorial(n-1); }
    return result;
}

/* ---------------- Driver code ------------- */
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
