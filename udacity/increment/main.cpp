#include <iostream>

int main()
{

    int n1 = 1;
    int n2 = n1++;
    
    //this will produce "2 1" to demonstrate the workings of the prefix and postfix incrementer
    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;

    return 0;
}

