#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    /* ---------------------- Solution code starts --------------------------------- */
    int size = 0, erase1 =0, erase_a = 0, erase_b =0;

    cin >> size;

    vector<int> vector1;
    vector1.resize(size);

    for(int i=0; i<size; i++){
        cin >> vector1[i];
    }

    cin >> erase1 >> erase_a >> erase_b;
    vector1.erase(vector1.begin()+(erase1-1));
    vector1.erase(vector1.begin()+(erase_a-1), vector1.begin()+(erase_b-1));

    cout << vector1.size() << endl;

    for(int i=0; i<vector1.size(); i++){
        cout << vector1[i] << " ";
    }

    return 0;
}
