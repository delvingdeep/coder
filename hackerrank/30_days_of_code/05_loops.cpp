#include <bits/stdc++.h>

using namespace std;

void multiply(int n) {
    for(int i=0; i < 10; i++) {
        cout << to_string(n) + " x " + to_string(i+1) + " = " << n*(i+1) << endl;
    }
}

int main()
{
    /* ----------- Driver code ------------ */
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    /* ----------- End of driver code ------ */

    // print first 10 multiples of n
    multiply(n);

    return 0;
}
