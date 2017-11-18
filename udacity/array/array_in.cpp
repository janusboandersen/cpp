#include <iostream>
#include <array>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {

    std::vector<int> vec(7,2); // = {{0,1,2,3}};

    vector<double> temps;

    for (double temp; cin >> temp;) {
        temps.push_back(temp);
    }
    
    //compute average temperature
    double sum {0};
    for (double t: temps) sum += t;
    cout << "Average temperature: " << sum / temps.size() << endl;

    //compute the median
    std::sort(temps.begin(), temps.end());
    cout << "Median temperature: " << temps[temps.size()/2] << endl;

    return 0;
}

