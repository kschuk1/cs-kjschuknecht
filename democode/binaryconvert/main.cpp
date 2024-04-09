#include <iostream>
#include <cmath>

using namespace std;

string binary(unsigned int &decimal) {
    const int divisor = 2;
    int dividend;
    int quotient, remain;
    string answer = "";
    quotient = decimal;

    while(quotient != 0) {
        dividend = quotient;
        remain = dividend % divisor;
        quotient = dividend / divisor;

        answer = to_string(remain) + answer;
    }
    if (answer.empty())
        return "0";

    return answer;
}

unsigned int decimal(string &binary) {
    int answer = 0;
    int digiCount = binary.size();
    for(int i = 0; i < digiCount; i++){
        if (binary[i] == '0') continue;
        int placeValue = digiCount - i - 1;
        answer += pow(2.0, placeValue);
    }
    return answer;
}

string reversed(string &binary) {
    string str_copy = binary;
    int str_size = binary.size();
    for( int i = 0; i < str_size; i++){
        str_copy[str_size-1 -i] = binary[i];

    }
    return str_copy;
}

int main() {
    int input;
    cin >> input;

    string result = binary(input);
    cout << "result = " + result;
    string reversed = reversed(result);
    cout << "str_reversed = " + str_reversed << endl;
    int int_result = decimal(reversed);
    cout << "int_result = " + int_result;
    cout << int_result << endl;

    return 0;
}