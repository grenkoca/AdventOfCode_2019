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
    int currentSubfuel;
    
    while(std::getline(in, str)){    
        num = std::stod(str);
        currentSubfuel = std::floor(num/3) - 2;
 
        while(currentSubfuel>=0){
            
            cout<<to_string(currentSubfuel) + "\n";

            total += currentSubfuel;
            currentSubfuel = std::floor(currentSubfuel/3) - 2;
        }

    } 

    cout << total;
    return total;   
}