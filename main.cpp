//Made by shubh
// theis program is time bound it's best working time is 10:30 pm to 11:15pm
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    //befor using the code read the first comment
    std::cout<<"Indian Phone Number Generator :- +91 ";
    for (int i = 0; i < 10; i++) {
        int phno = std::rand() %10;
        std::cout<< phno;
        if (i == 4) {
            std::cout<< " "; //it is for space after 4 digits 
        }
    }
  // For best results readthe first comment
    
    std::cout<< std::endl;
    return 0;
}
