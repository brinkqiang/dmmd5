
#include "dmmd5.h"
#include <string>
#include <iostream>

int main( int argc, char* argv[] ) {
	
    std::string strData = "1";
    std::string strMD5 = CDMMD5::GetMD5(strData);

    std::cout << strMD5 << std::endl;

    return 0;
}
