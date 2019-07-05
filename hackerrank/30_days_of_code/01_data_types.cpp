#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;

    // Read and save an integer, double, and String to your variables.
    std::cin >> i2;
    std::cin >> d2;
    std::getline(std::cin>>ws, s2);
    
    // Print the sum of both integer variables on a new line.
    std::cout << i + i2 << "\n";

    // Print the sum of the double variables on a new line.
    std::cout << std::setprecision(1) << fixed << d + d2 << "\n";
    
    // Concatenate and print the String variables on a new line
    std::cout << s + s2 << "\n";

    return 0;
}