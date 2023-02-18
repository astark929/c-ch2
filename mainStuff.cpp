#include <cstdlib>
#include <string>
#include <iostream>


#include  <bits/stdc++.h>

#include "title.h"
#include "data.h"
#include "calc.h"

#define max_value 10000

using namespace std;

int main(){

    //title
    cout << "\x1b[2J"; //clearing terminal for VS code
    //system("cls");   //if your not using VS code, pls use this code
    string ISBN;
    std::string author, title_book;
    double enrolled, prices_book, quant;
    char tax, handle; //title_book[max_value];
    std::cout << stuff << std::endl;
    cout << "\n\n\n ";
    cin.get();


//-----------------------------------------------------------------------------------------------------------------
    //input
    cout << "\x1b[2J"; //clearing terminal for VS code
    //system("cls");   //if your not using VS code, pls use this code

    std::cout << title << std::endl;
    cout << "\n";
    std::cout << instructions << std::endl;
    cout << "\n";
    
    cout << "\nenter the ISBN (barcode)" << endl;
    cout << "\n " << endl;
    cin >> ISBN; 

    cout << "\nenter the title of the book\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::getline(std::cin, title_book);

    cout << "\nenter the authors name" << endl;
    cout << "\n " << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::getline(std::cin, author);
    
    cout << "\nenter the number of students in your class" << endl;
    cout << "\n " << endl;
    cin >> enrolled;

    cout << "\nenter the prices of the book" << endl;
    cout << "\n " << endl;
    cin >> prices_book;

    cout << "\nenter y if the book is taxable, n for it is not" << endl;
    cout << "\n " << endl;
    cin >> tax;

    cout << "\nenter y if your are ording online, n for it is picking it up" << endl;
    cout << "\n " << endl;
    cin >> handle;

    cout << "please press any key to continue";
    cin.get();

//-----------------------------------------------------------------------------------------------------------------
    //output
    cout << "\x1b[2J"; //clearing terminal for VS code
    //system("cls");   //if your not using VS code, pls use this code
    
    std::cout << title << std::endl;
    std::cout << output_screen << std::endl;

    cout << "your book " << title_book << " by " << author << "with the cereal code of " << ISBN << endl;
    cout << "the price is $" << fixed << setprecision(2) << calculation(prices_book, tax, handle);
    cout<<"\nIT WORKS" << endl;
    return 0;

}