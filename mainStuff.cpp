#include <cstdlib>
#include <string>
#include <iostream>
#include  <bits/stdc++.h>

#include "title.h"
#include "data.h"
#include "calc.h"

using namespace std;

int main(){

    //title
    cout << "\x1b[2J"; //clearing terminal for VS code
    //system("cls");   //if your not using VS code, pls use this code
    string ISBN;
    std::string author, title_book, usedornot;
    string enrolled, prices_book, required;
    std::cout << stuff << std::endl;
    cout << "\n\n\n ";
    cin.get();


//-----------------------------------------------------------------------------------------------------------------
    //input
    cout << "\x1b[2J"; //clearing terminal for VS code
    //system("cls");   //if your not using VS code, pls use this code

    std::cout << title << std::endl;
    cout << "\n";
    
    cout << "\nenter the ISBN (barcode) :   " << endl;
    cin >> ISBN; 

    cout << "\nenter the title of the book\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::getline(std::cin, title_book);

    cout << "\nenter the authors name" << endl;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::getline(std::cin, author);
    
    cout << "\nenter the number of students in your class" << endl;
    cin >> enrolled;

    cout << "\nenter the prices of the book" << endl;
    cin >> prices_book;

    cout << "\nenter 'new' if you want to book to be new, otherwise type something else" << endl;
    cin >> usedornot;

    cout << "\nenter 'required' if the book is required, otherwise type something else" << endl;
    cin >> required;

    cout << "please press 'ENTER' to continue";
    cin.get();

//-----------------------------------------------------------------------------------------------------------------
    //output
    cout << "\x1b[2J"; //clearing terminal for VS code
    //system("cls");   //if your not using VS code, pls use this code
    
    std::cout << title << std::endl;
    std::cout << "\t\t\t" << output_screen << std::endl;

    cout << "-----------------YOUR INPUTS-------------" <<endl;
    cout << "barcode : " << ISBN << endl;
    cout << "author : " << author << endl;
    cout << "title : " << title_book << endl;
    cout << "# of students : " << enrolled << endl;
    cout << "is or is not required : " << required << endl;
    cout << "----------------------------------------" <<endl;

    double newprice = check(prices_book);
    int newenroll = stringtoint(enrolled);
    cout << "the price is $" << fixed << setprecision(2) << calculation(newprice, newenroll, required, usedornot);
    cout << "\nthe number of books needed is : " << amountofbooks(newenroll, required, usedornot);
    
    cout << "\npress enter to continue ..........";
    cin.get();
    return 0;

}
