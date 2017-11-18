#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
   
   /* cout << "Hello World" << endl;

    const double PI = 3.1415926535;

    char my_grade = 'A';
    bool is_happy = true;
    int my_age = 39;
    float fav_number = 3.1415926535;
    double other_name = 1.6180339887;

    cout << "Favourite number " << fav_number << endl;
    cout << "Size of an int " << sizeof(my_age) << " bytes" << endl;
    
    */

   char my_name[2][5] = {{'J', 'a', 'n', 'u', 's'},{'A', 'n', 'd', 'e', 'r'}};
   
   cout << sizeof(my_name) << endl;
   return 0;
}
