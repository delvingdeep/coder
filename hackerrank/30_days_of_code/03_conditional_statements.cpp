#include <bits/stdc++.h>

using namespace std;

void weird_checker(int num);

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    weird_checker(N);

    return 0;
}

void weird_checker(int num){
    if(num%2 == 1) {
        cout << "Weird" << endl;
    }
    else {
        if(num >= 2 && num <= 5 || num > 20) {
        cout << "Not Weird" << endl;
        }
        else if( num >= 6 && num <= 20) {
            cout << "Weird" << endl;
        }
    }
}
