#include <iostream>
using namespace std;

bool alwaysTrue() {
    cout << "alwaysTrue() called" << endl;
    return true;
}

bool alwaysFalse() {
    cout << "alwaysFalse() called" << endl;
    return false;
}

int main() {
    cout << "Demonstrating short-circuit evaluation in C++" << endl;

    cout << "\n1. AND operation (&&):" << endl;
    cout << "true && alwaysTrue():" << endl;
    if (true && alwaysTrue()) {
        cout << "Result: true" << endl;
    }

    cout << "\nfalse && alwaysTrue():" << endl;
    if (false && alwaysTrue()) {
        cout << "This will not be printed" << endl;
    } else {
        cout << "Result: false" << endl;
    }

    cout << "\n2. OR operation (||):" << endl;
    cout << "false || alwaysFalse():" << endl;
    if (false || alwaysFalse()) {
        cout << "This will not be printed" << endl;
    } else {
        cout << "Result: false" << endl;
    }

    cout << "\ntrue || alwaysFalse():" << endl;
    if (true || alwaysFalse()) {
        cout << "Result: true" << endl;
    }

    cout << "\n3. Combining AND and OR:" << endl;
    cout << "(false && alwaysTrue()) || alwaysFalse():" << endl;
    if ((false && alwaysTrue()) || alwaysFalse()) {
        cout << "This will not be printed" << endl;
    } else {
        cout << "Result: false" << endl;
    }

    return 0;
}