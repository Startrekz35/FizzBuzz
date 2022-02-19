#include <iostream>

int main()
{
const size_t COUNT {100};
   size_t i{0}; //Iterator declaration
   
   while (i < COUNT) 
   { // Test
    if (i%3 == 0 && i%5 == 0)
    {
        std::cout << "FizzBuzz" << std::endl;
    }
    else if (i%3 == 0)
    {
        std::cout << "Fizz" << std::endl;
    }

    else
    {
        std::cout << i << std::endl;
    }
    
       ++i; //Incrementation
   }
    

    return 0;
}