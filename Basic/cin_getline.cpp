#include <iostream>
using namespace std;

int main(){

    string bio;

    std::cout << "Tell us about yourself: " << std::endl;

    // std::cin >> bio ; // Only output 1st word.
    getline(std::cin, bio);
    
    std::cout << "Your bio says: " << bio << std::endl;
}