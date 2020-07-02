/*
author:		eric phung
date:		2017
purpose:	count bits in a binary integer
*/

#include <bitset>
#include <iostream>

size_t getBitSize(int num) {
    std::bitset<sizeof(int) *CHAR_BIT> bytes(num);// binary integer argument
    return bytes.count();
}

int main() {
    std::cout << getBitSize(1000000);
}
