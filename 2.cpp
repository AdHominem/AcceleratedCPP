#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

// 2.0
int pretty_print() {
    cout << "Please enter your first name: ";

    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";

    const int pad = 1;

    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    cout << endl;

    string::size_type row, col;
    for (row = 0; row != rows; ++row) {
        for (col = 0; col != cols; ++col) {
            if (row == 0 || row == rows - 1 || col == 0 || col == cols - 1) {
                cout << "*";
            } else if (row == pad + 1 && col == pad + 1) {
                cout << greeting;
                col += greeting.size() - 1;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// 2.1
int pretty_print_no_sep() {
    cout << "Please enter your first name: ";

    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";

    const string::size_type cols = greeting.size() + 2;

    cout << endl;

    string::size_type row, col;
    for (row = 0; row != 3; ++row) {
        for (col = 0; col != cols; ++col) {
            if (row == 0 || row == 2 || col == 0 || col == cols - 1) {
                cout << "*";
            } else if (row == 1 && col == 1) {
                cout << greeting;
                col += greeting.size() - 1;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// 2.2
int pretty_print_rec() {
    cout << "Please enter your first name: ";

    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";

    const int column_pad = 2;
    const int row_pad = 0;

    const int rows = column_pad * 2 + 3;
    const string::size_type cols = greeting.size() + row_pad * 2 + 2;

    cout << endl;

    string::size_type row, col;
    for (row = 0; row != rows; ++row) {
        for (col = 0; col != cols; ++col) {
            if (row == 0 || row == rows - 1 || col == 0 || col == cols - 1) {
                cout << "*";
            } else if (row == column_pad + 1 && col == row_pad + 1) {
                cout << greeting;
                col += greeting.size() - 1;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// 2.3
int pretty_print_input() {
    cout << "Please enter your first name: ";

    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";

    cout << "Please enter the padding: ";

    size_t pad;
    cin >> pad;

    const size_t rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    cout << endl;

    string::size_type row, col;
    for (row = 0; row != rows; ++row) {
        for (col = 0; col != cols; ++col) {
            if (row == 0 || row == rows - 1 || col == 0 || col == cols - 1) {
                cout << "*";
            } else if (row == pad + 1 && col == pad + 1) {
                cout << greeting;
                col += greeting.size() - 1;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}