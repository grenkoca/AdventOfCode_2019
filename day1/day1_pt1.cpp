#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;
int main() {
    int total=0;
    string str;   
    ifstream in("day1_input.txt");
    double num;

    while(std::getline(in, str)){
        num = std::stod(str);

        num = num/3;    
        num = floor(num);
        num = num - 2;
        total += num;        
    } 
    cout << total;
    return total;   
}