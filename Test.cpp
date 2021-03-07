#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;


TEST_CASE("Snowman hat") {
    //Straw hat
    CHECK(snowman(11114411) == "       \n _===_ \n (.,.) \n ( : ) \n ( : ) ");
    //Mexican hat
    CHECK(snowman(21114411) == "  ___  \n ..... \n (.,.) \n ( : ) \n ( : ) ");
    //Fez hat
    CHECK(snowman(31114411) == "   _   \n  /_\\  \n (.,.) \n ( : ) \n ( : ) ");
    //Russian hat
    CHECK(snowman(41114411) == "  ___  \n (_*_) \n (.,.) \n ( : ) \n ( : ) ");
}

TEST_CASE("Snowman nose/mouth") {
    //Normal
    CHECK(snowman(11114411) == "       \n _===_ \n (.,.) \n ( : ) \n ( : ) ");
    //Dot
    CHECK(snowman(22114411) == "  ___  \n ..... \n (...) \n ( : ) \n ( : ) ");
    //Line
    CHECK(snowman(33114411) == "   _   \n  /_\\  \n (._.) \n ( : ) \n ( : ) ");
    //None
    CHECK(snowman(44114411) == "  ___  \n (_*_) \n (. .) \n ( : ) \n ( : ) ");

}
TEST_CASE("Snowman eyes") {
    //Left eye
        //Dot
        CHECK(snowman(11114411) == "       \n _===_ \n (.,.) \n ( : ) \n ( : ) ");
        //Bigger dot
        CHECK(snowman(22214411) == "  ___  \n ..... \n (o..) \n ( : ) \n ( : ) ");
        //Biggest dot
        CHECK(snowman(33314411) == "   _   \n  /_\\  \n (O_.) \n ( : ) \n ( : ) ");
        //Closed
        CHECK(snowman(44414411) == "  ___  \n (_*_) \n (- .) \n ( : ) \n ( : ) ");
    //Right eye
        //Dot
        CHECK(snowman(11114411) == "       \n _===_ \n (.,.) \n ( : ) \n ( : ) ");
        //Bigger dot
        CHECK(snowman(22224411) == "  ___  \n ..... \n (o.o) \n ( : ) \n ( : ) ");
        //Biggest dot
        CHECK(snowman(33334411) == "   _   \n  /_\\  \n (O_O) \n ( : ) \n ( : ) ");
        //Closed
        CHECK(snowman(44444411) == "  ___  \n (_*_) \n (- -) \n ( : ) \n ( : ) ");

}
TEST_CASE("Snowman arms") {

    //Left arm
        //Normal arm
        CHECK(snowman(11111411) == "       \n _===_ \n (.,.) \n<( : ) \n ( : ) ");
        //Upwards arm
        CHECK(snowman(22212411) == "  ___  \n ..... \n\\(o..) \n ( : ) \n ( : ) ");
        //Downwards arm
        CHECK(snowman(33313411) == "   _   \n  /_\\  \n (O_.) \n/( : ) \n ( : ) ");
        //None arm
        CHECK(snowman(44414411) == "  ___  \n (_*_) \n (- .) \n ( : ) \n ( : ) ");

    //Right arm
        CHECK(snowman(11111111) == "       \n _===_ \n (.,.) \n<( : )>\n ( : ) ");
        //Upwards arm
        CHECK(snowman(22212211) == "  ___  \n ..... \n\\(o..)/\n ( : ) \n ( : ) ");
        //Downwards arm
        CHECK(snowman(33313311) == "   _   \n  /_\\  \n (O_.) \n/( : )\\\n ( : ) ");
        //None arm
        CHECK(snowman(44414411) == "  ___  \n (_*_) \n (- .) \n ( : ) \n ( : ) ");

}


TEST_CASE("Snowman torso & base") {
    CHECK(snowman(44441144) == string("  ___  \n (_*_) \n (- -) \n<(   )>\n (   ) "));
    CHECK(snowman(43332313) == string("  ___  \n (_*_) \n\\(O_o) \n ( : )\\\n (___) "));
    CHECK(snowman(41442221) == string("  ___  \n (_*_) \n\\(-,-)/\n (] [) \n ( : ) "));
    CHECK(snowman(42224432) == string("  ___  \n (_*_) \n (o.-) \n (> <) \n (\" \") "));
}

    
TEST_CASE("Input cases"){
    // check if the given input is negative
    CHECK_THROWS(snowman(-555));
    CHECK_THROWS(snowman(-1114411));
    CHECK_THROWS(snowman(-111111111));
    // check the range of the input
    CHECK_THROWS(snowman(411));
    CHECK_THROWS(snowman(412391)); 
    CHECK_THROWS(snowman(01114411)); 
    CHECK_THROWS(snowman(15114411));
    CHECK_THROWS(snowman(11114401));
    CHECK_THROWS(snowman(11114417));
}
