#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int query;
    string str1;
    
    // get number of queries
    cin >> query;
    
    for(int i=0; i < query; i++) { 
        // declare intermediate strings for even and odd
        string  str_e = {}, str_o = {};

        // get user string
        cin >> str1;

        // process string
        for(int i=0; i < str1.length(); i++) {
            if(i % 2 == 1) { str_o += str1[i]; }
            else { str_e += str1[i]; }
        }
        cout << str_e + " " + str_o << endl;
    }

    return 0;
}
