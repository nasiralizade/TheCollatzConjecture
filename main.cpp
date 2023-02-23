#include <iostream>
//27,112,989,248
int main() {
    std::cout << "Info about [The Collatz Conjecture] " << std::endl;
    std::cout << "The Collatz Conjecture is a famous unsolved problem in mathematics that involves iterating a simple function on a positive integer.\n"
                 " The conjecture states that no matter what positive integer you start with,\n"
                 " if you repeatedly apply the function to the number, you will eventually reach the value 1. \n " ;
    std::cout<<"The function is defined as follows:\n"
               "->If the number is even, divide it by 2.\n"
               "->If the number is odd, multiply it by 3 and add 1.\n";
    std::cout<<"Write the start number: ";
    int startNumber;
    std::cin>>startNumber;
    std::cout<<"Start number: "<<startNumber<<"\n";
    int count=0;
    do {
        if (count==20) {
            std::cout<<"\n";
            count=0;
        }
        count++;
        if (startNumber % 2 ==0){
            startNumber = startNumber/2;
            std::cout<<startNumber <<",";
        } else {
            startNumber= (startNumber*3)+1;
            std::cout<<startNumber <<",";
        }
    } while (startNumber!=1);
    return 0;
}
