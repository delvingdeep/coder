#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    string name, query;
    long int number, num;
    std::map<string, int> phonebook;

    // get number of queries
    cin >> num;

    // set hashtable for name and phone number
    for(long int i = 0; i < num; i++) {
        cin >> name;
        cin >> number;
        phonebook[name] = number;
    }

    // query hashmap
    while(cin >> query){   // while loop is used to be able to iterate over large numbers

        if(phonebook.find(query) == phonebook.end()) {
            cout << "Not found" << endl;
        } else {
            cout << query + "=" + to_string(phonebook.at(query)) << endl;
        }
    }
     
    return 0;
}

