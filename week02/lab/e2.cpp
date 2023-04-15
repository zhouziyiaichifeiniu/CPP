#include <iostream>

using namespace std;

int main() {//显式转换，存储位不够
    int result_signedint = 56789 * 23456789;
    cout << "The result stored in signed int is: " << result_signedint << endl;
    unsigned int result_unsignedint = 56789 * 23456789;
    cout << "The result stored in unsigned int is: " << result_unsignedint << endl;
    long long result_long = (long long)56789 * (long long)23456789;
    cout << "The result stored in long is: " << result_long << endl;

}