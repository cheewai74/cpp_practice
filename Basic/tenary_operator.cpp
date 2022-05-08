#include <iostream>

int main(){

    bool isTodaySunny = false;

    // if(isTodaySunny){
    //     std::cout << "Go to the park" << std::endl;
    // }
    // else{
    //     std::cout << "Take an umbrella" << std::endl;
    // }

    isTodaySunny? std::cout << "Go to the park": std::cout << "Take an umbrella";
}