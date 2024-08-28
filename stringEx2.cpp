#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    string str3 = "   Trim me   ";

    // Concatenation
    string result = str1 + str2;
    cout << "Concatenation: " << result << endl;

    // Length
    cout << "Length of result: " << result.length() << endl;

    // Substring
    cout << "Substring (0, 5): " << result.substr(0, 5) << endl;

    // Find
    size_t pos = result.find("World");
    cout << "Position of 'World': " << pos << endl;

    // Replace
    result.replace(7, 5, "C++");
    cout << "After replace: " << result << endl;

    // Insert
    result.insert(7, "awesome ");
    cout << "After insert: " << result << endl;

    // Erase
    result.erase(7, 8);
    cout << "After erase: " << result << endl;

    // To upper case
    transform(result.begin(), result.end(), result.begin(), ::toupper);
    cout << "To upper: " << result << endl;

    // To lower case
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    cout << "To lower: " << result << endl;

    // Trim (C++20)
    //str3 = str3.trim(); // Uncomment if using C++20
    // For pre-C++20, you can use:
    str3.erase(0, str3.find_first_not_of(" "));
    str3.erase(str3.find_last_not_of(" ") + 1);
    cout << "Trimmed: '" << str3 << "'" << endl;

    return 0;
}