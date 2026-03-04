// Library Book Borrowing System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class LibraryBook
{

private:
    string book_title;
    int copies_available;



public:

    LibraryBook()
    {
        book_title = "C++ Basics";
        copies_available = 3;    
    }

    void set_title(string new_title)
    {

        if (book_title.size() > 0)
        {
            book_title = new_title;
        }

    }
    string get_title()
    {
        return book_title;

    }
    int get_copies()
    {

       
        return copies_available;

    }
    void borrow_book()
    {

        if (copies_available > 0)
        {
            copies_available -= 1;
        }
        else
        {
            cout << "Not available!" << endl;
        }

    }


};

int main()
{
    LibraryBook book;

    string input_title;
    int borrow_count;


    cout << "Enter Title: ";
    cin >> input_title;
    
    cout << "Enter the borrow cout: ";
    cin >> borrow_count;


    book.set_title(input_title);

    for (int index = 0; index < borrow_count; index++)
    {
        book.borrow_book();

    }

    cout << "Title: " << book.get_title() << endl;
    cout << "Copies Left: " << book.get_copies() << endl;

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
