#include <gtest/gtest.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    cout << "hello world!" << endl;
    return RUN_ALL_TESTS();
}