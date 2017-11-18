#include <iostream>
#include <array>
#include <vector>

using std::cout;
using std::endl;
using std::string;

int main() {

    std::array<int, 10> arr {{0,1,2,3,4,5,6,7,8,9}};
    std::vector<int> vec(7,2); // = {{0,1,2,3}};

    std::vector<string> philosopher = {"Kant", "Hume", "Plato", "Kierkegaard"};
    philosopher.reserve(100);

    philosopher.push_back("Foucault");


    for (int a: arr) {
        cout << a << endl;
    }

    for (string s: philosopher) {
        cout << s << endl;
    }

    cout << philosopher.size() << endl;

    return 0;
}

