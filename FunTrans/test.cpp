#include "funtras.hpp"
#include <iostream>

using namespace std;

void power_test(){
    cout << funtras::power_t(9,8) << endl;
    cout << funtras::power_t(2,10)<< endl;
}

void div_t_test(){
    cout << funtras::div_t(10) << endl;
    cout << funtras::div_t(2) << endl;
}

int main(int argc, char const *argv[])
{
    power_test();
    div_t_test();
    return 0;
}
