#include <string>
#include <iostream>
#include "../lib/SimpleCLI/src/SimpleCLI.h"
using namespace std; 

int main()
{

    // converting decimal number. 
    string dec_num = "ffff"; 
    cout << "dec_num = " <<  
    stol(dec_num, nullptr, 16) << "\n"; 

}

