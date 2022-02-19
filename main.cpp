#include <iostream>

int main()
{
const size_t COUNT {100};
   size_t i{1}; //Iterator declaration
   
   //I at first attempted a for loop but ran into problems so I used a while loop
   while (i < COUNT) 
   { 
    //This tests to see if the number in the i loop is divisible by both 3 and 5 and prints "FizzBuzz" if it's true
    if (i%3 == 0 && i%5 == 0)
    {
        std::cout << "FizzBuzz" << std::endl;
    }
   
    //Tests to see if i is divisible by 3
    else if (i%3 == 0)
    {
        std::cout << "Fizz" << std::endl;
    }

   
    //Tests to see if i is divisible by 5
    else if (i%5 == 0)
    {
        std::cout << "Buzz" << std::endl;
    }
    
   
    //Prints normally if neither
    else
    {
        std::cout << i << std::endl;
    }
    
       ++i; //Incrementation
   }
    

    return 0;
}