/*
*/

#include "intprint.h"

int main() {
    vector<string> strings = {  "69", "69a", "a69", "5.6", "    68", "\t11", "68 69", "0xA"};

    for(string s : strings) {
	intPrint(s);
    }
}
