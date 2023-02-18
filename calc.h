#ifndef values
#define values
#include <string>
using namespace std;

double calculation(double price, int enrollment, string required, string book){
    double numBooks;
    double factored = 1;
    if(book == "new"){
        if(required == "required"){
         factored = 1.0;   // Book is new and required
        }
        else{
         factored = 0.35;  // Book is new but not required
        }
    }
    else {
        if(required == "required"){
            factored = 0.6;  // Book is not new but is required
        }
        else  {
            factored = 0.1;  // Book is not new and is not required
        }
    }
    numBooks= enrollment * factored;
    double cost = numBooks * price;
    return cost;
}

int amountofbooks (int enrolled, string required, string book){
    double numBooks = enrolled;
    double factored = 1;
    if(book == "new"){
        if(required == "required"){
         factored = 1.0;   // Book is new and required
        }
        else{
         factored = 0.35;  // Book is new but not required
        }
    }
    else {
        if(required == "required"){
            factored = 0.6;  // Book is not new but is required
        }
        else  {
            factored = 0.1;  // Book is not new and is not required
        }
    }
    numBooks= enrolled * factored;
    return numBooks;
}

double check(string input){
    double price = atof(input.c_str());
    return price;
}

int stringtoint(string amount){
    int newamount = std::atoi(amount.c_str());
    return newamount;
}


#endif
