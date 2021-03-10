/**
 *
 * DESCRIPTION: testing file to snowaman.cpp checking some bad test like: negative numbers, numbers with less
 * than 8 digits, numbers with more than 8 digits, digits bigger than 4 or 0.
 * and also good tests that checks every part of the snowman
 *
 * AUTHORS: Amiel Lejzor
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

//o_O  _           ___        ___   ___
//    /_\         (_*_)      .....
TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(12121212)) == nospaces("_===_\n(..o)/\n<( : )\n(" ")"));
    CHECK(nospaces(snowman(12341234)) == nospaces("_===_\n(O.-)/\n<( >< )\n(   )"));
    CHECK(nospaces(snowman(11223344)) == nospaces("_===_\n(o,o)\n/(  )\\ \n(   )"));
    CHECK(nospaces(snowman(43214321)) == nospaces("___\n(_*_)\n(o_.)\\ \n(] [)\n( : )"));
    CHECK(nospaces(snowman(44332211)) == nospaces("___\n(_*_)\n\\(O O)/\n( : )\n( : )"));
    CHECK(nospaces(snowman(22223333)) == nospaces("___\n.....\n(o.o)\n/( >< )\\\n( ___ )"));
    CHECK(nospaces(snowman(11114444)) == nospaces("_===_\n(.,.)\n(  )\n(  )"));
    CHECK(nospaces(snowman(32323232)) == nospaces("_\n/_\\\n(O.o)/\n/( >< )\n(" ")"));
    CHECK(nospaces(snowman(24142323)) == nospaces("___\n.....\\n\\(. _)\n( ][ )\\\n(___)"));
    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(22222222)) == nospaces("___\n.....\n\\(o.o)/\n( ][ )\n(" ")"));
    CHECK(nospaces(snowman(33333333)) == nospaces("_\n/_\\\n(O_O)\n/( >< )\\\n(___)"));
    CHECK(nospaces(snowman(44444444)) == nospaces("___\n(_*_)\n(- -)\n(   )\n(   )"));
    
}
TEST_CASE("Good snowman code- checking Hat") {
    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(21111111)) == nospaces("___\n.....\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(31111111)) == nospaces("_\n/_\\\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(41111111)) == nospaces("___\n(_*_)\n(.,.)\n<( : )>\n( : )"));

}
TEST_CASE("Good snowman code- checking Nose") {
    CHECK(nospaces(snowman(12111111)) == nospaces("_===_\n(...)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(13111111)) == nospaces("_===_\n(._.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(14111111)) == nospaces("_===_\n(..)\n<( : )>\n( : )"));

}
TEST_CASE("Good snowman code- checking Left eye") {
    CHECK(nospaces(snowman(11211111)) == nospaces("_===_\n(o,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11311111)) == nospaces("_===_\n(O,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11411111)) == nospaces("_===_\n(-,.)\n<( : )>\n( : )"));

}
TEST_CASE("Good snowman code- checking Right eye") {
    CHECK(nospaces(snowman(11121111)) == nospaces("_===_\n(.,o)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11131111)) == nospaces("_===_\n(.,O)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11141111)) == nospaces("_===_\n(.,-)\n<( : )>\n( : )"));

}

TEST_CASE("Good snowman code- checking Left hand") {
    CHECK(nospaces(snowman(11112111)) == nospaces("_===_\n\\(.,.)\n( : )>\n( : )"));
    CHECK(nospaces(snowman(11113111)) == nospaces("_===_\n(.,.)\n/( : )>\n( : )"));
    CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n( : )>\n( : )"));

}
TEST_CASE("Good snowman code- checking Right hand") {
    CHECK(nospaces(snowman(11111211)) == nospaces("_===_\n(.,.)/\n<( : )\n( : )"));
    CHECK(nospaces(snowman(11111311)) == nospaces("_===_\n(.,.)\n<( : )\\\n( : )"));
    CHECK(nospaces(snowman(11111411)) == nospaces("_===_\n(.,.)\n<( : )\n( : )"));

}
TEST_CASE("Good snowman code- checking Torso") {
    CHECK(nospaces(snowman(11111121)) == nospaces("_===_\n(.,.)\n<(] [)>\n( : )"));
    CHECK(nospaces(snowman(11111131)) == nospaces("_===_\n(.,.)\n<(> <)>\n( : )"));
    CHECK(nospaces(snowman(11111141)) == nospaces("_===_\n(.,.)\n<(   )>\n( : )"));

}
TEST_CASE("Good snowman code- checking Base") {
    CHECK(nospaces(snowman(11111112)) == nospaces("_===_\n(.,.)\n<( : )>\n(" ")"));
    CHECK(nospaces(snowman(11111113)) == nospaces("_===_\n(.,.)\n<( : )>\n(___)"));
    CHECK(nospaces(snowman(11111114)) == nospaces("_===_\n(.,.)\n<( : )>\n(   )"));
}


TEST_CASE("Bad snowman code - negative number") {
    CHECK_THROWS(snowman(-11111111));
    CHECK_THROWS(snowman(-12341234));
    CHECK_THROWS(snowman(-12341212));
    CHECK_THROWS(snowman(-12131412));
    CHECK_THROWS(snowman(-12311232));
    
    
}
TEST_CASE("Bad snowman code - more than 8 numbers") {
    CHECK_THROWS(snowman(123123132));
    CHECK_THROWS(snowman(1231231213));
    CHECK_THROWS(snowman(111111117));
    CHECK_THROWS(snowman(798687987));
    CHECK_THROWS(snowman(210321684));
    CHECK_THROWS(snowman(111111115));
    
}

TEST_CASE("Bad snowman code - less than 8 numbers") {
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(12));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(12341));
    CHECK_THROWS(snowman(123412));
    CHECK_THROWS(snowman(1234123));
    
}
TEST_CASE("Bad snowman code - numbers biggers than 4") {
    CHECK_THROWS(snowman(91111111));
    CHECK_THROWS(snowman(19111111));
    CHECK_THROWS(snowman(11911111));
    CHECK_THROWS(snowman(11191111));
    CHECK_THROWS(snowman(11119111));
    CHECK_THROWS(snowman(11111911));
    CHECK_THROWS(snowman(11111191));
    CHECK_THROWS(snowman(11111119));
    CHECK_THROWS(snowman(01111111));
    CHECK_THROWS(snowman(10111111));
    CHECK_THROWS(snowman(11011111));
    CHECK_THROWS(snowman(11101111));
    CHECK_THROWS(snowman(11110111));
    CHECK_THROWS(snowman(11111011));
    CHECK_THROWS(snowman(11111101));
    CHECK_THROWS(snowman(11111110));
    
    
}

TEST_CASE("Bad snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n(><)"));
    CHECK(nospaces(snowman(12121212)) == nospaces("_===_\n(..o)/\n<( : )\n(] [])"));
    CHECK(nospaces(snowman(12341234)) == nospaces("_===_\n(O.-)/\n<( >< )\n( : )"));
    CHECK(nospaces(snowman(11223344)) == nospaces("_===_\n(o,.)\n/(  )\\ \n(   )"));
    CHECK(nospaces(snowman(43214321)) == nospaces("___\n(_*_)\n(,_.)\\ \n(] [)\n( : )"));
    CHECK(nospaces(snowman(44332211)) == nospaces("___\n(_*_)\n\\(O.O)/\n( : )\n( : )"));
    CHECK(nospaces(snowman(22223333)) == nospaces("___\n.....\n(o.o)\n/( >< )\\\n( : )"));
    CHECK(nospaces(snowman(11114444)) == nospaces("_===_\n(.,.)\n(  )\n(  )"));
    CHECK(nospaces(snowman(32323232)) == nospaces("_\n/_\\\n(O.O)/\n/( >< )\n(" ")"));
    CHECK(nospaces(snowman(24142323)) == nospaces("___\n.....\\n\\(. _)\n( ][ )\\\n(   )"));
    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,O)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(22222222)) == nospaces("___\n.....\n\\(O.o)/\n( ][ )\n(" ")"));
    CHECK(nospaces(snowman(33333333)) == nospaces("_\n/_\\\n(O_O)\n<( >< )\\\n(___)"));
    CHECK(nospaces(snowman(44444444)) == nospaces("___\n(_*_)\n(- -)\n(   )>\n(   )"));
    
}


