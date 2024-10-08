#include "Cow.hpp"
#include <cassert>
#include <iostream>

void testTokenizer() {
    cow::String str = ";;Hello|world||-foo--bar;yow;baz|";
    cow::String sep("-;|");

    cow::Tokenizer tokens(str, sep);
    for (auto tok : tokens)
        std::cout << "<" << tok << "> ";
    std::cout << std::endl;
}

void testStrings() {
    cow::String str1 = "123412341234";
    cow::String str2 = str1;
    assert(str1.cbegin() == str2.cbegin());
    str1 += "56785678";
    assert(str1.cbegin() != str2.cbegin());
    std::cout << str1 << std::endl << str2 << std::endl;
    std::cout << str1.findSubstr("7856") << std::endl;
    std::cout << str2.findSubstr("7856") << std::endl;
}

int main() {
    testTokenizer();
    testStrings();   
}