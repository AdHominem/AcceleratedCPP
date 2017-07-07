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

int pretty_print_2_4() {
    cout << "Please enter your first name: ";

    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";

    const int pad = 1;

    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    const string whitespace(greeting.size() + pad * 2, ' ');

    cout << endl;

    string::size_type row, col;
    for (row = 0; row != rows; ++row) {
        for (col = 0; col != cols; ++col) {
            if (row == 0 || row == rows - 1 || col == 0 || col == cols - 1) {
                cout << "*";
            } else if (row == pad + 1 && col == pad + 1) {
                cout << greeting;
                col += greeting.size() - 1;
            } else if (col == 1 && row != pad + 1) {
                cout << whitespace;
                col += whitespace.size() - 1;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// 2.5
void square(size_t n) {
    for (size_t row = 0; row < n; ++row) {
        for (size_t col = 0; col < n; ++col) {
            cout << (row == 0 || row == n - 1 || col == 0 || col == n - 1 ? "*" : " ");
        }
        cout << endl;
    }
}

void rect(size_t height, size_t width) {
    for (size_t row = 0; row < height; ++row) {
        for (size_t col = 0; col < width; ++col) {
            if (row == 0 || row == height - 1 || col == 0 || col == width - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void triangle(size_t n) {
    for (size_t row = 0; row < n; ++row) {
        for (size_t col = 0; col < n; ++col) {
            cout << (row == n - 1 || row == col || col == 0  ? "*" : " ");
        }
        cout << endl;
    }
}

void countdown() {
    int i = 10;
    while (i >= -5) {
        cout << i << endl;
        --i;
    }
}

void product() {
    size_t result = 1;
    for (int i = 1; i < 10; ++i) {
        result *= i;
    }
    cout << result << endl;
}

void check_num() {
    cout << "Enter a number: ";
    int a;
    cin >> a;

    cout << "Enter another number: ";
    int b;
    cin >> b;

    cout << "The bigger number is " << (a > b ? a : b);

}