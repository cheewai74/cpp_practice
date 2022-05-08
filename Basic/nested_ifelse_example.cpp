#include <iostream>

int main(){

    bool isTodaySunny = false;
    bool isTodayWeekend = true;

    // if(isTodayWeekend && isTodaySunny){
    //     std::cout << "Go to the park" << std::endl;
    // }
    // else if(isTodayWeekend && !isTodaySunny){
    //     std::cout << "Go to the park, but take an umbrella" << std::endl;
    // }
    // else{
    //     std::cout << "Go to work" << std::endl;
    // }

    if(isTodayWeekend){
        if(isTodaySunny){
            std::cout << "Go to the park" << std::endl;
        }
        else
        {
            std::cout << "Go to the park, but take an umbrella" << std::endl;
        }
    }
    else{
        std::cout << "Go to work" << std::endl;
    }

}