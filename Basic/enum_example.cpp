#include <iostream>

enum EyeColor{Brown, Blue, Green, Gray, Other};

int main(){

    EyeColor eyeColor = Brown;

    switch(eyeColor){
        case Brown: std::cout << "80% of people have Brown eyes."; break;
        case Blue:	std::cout << "10% of people have Blue eyes."; break;
        case Green: std::cout << "2% of people have Green eyes."; break;
        case Gray: std::cout << "1% of people have Gray eyes."; break;
        case Other: std::cout << "7% of people have Other eyes."; break;
        default: std::cout << "Not valid eye color"; break;
    }

}