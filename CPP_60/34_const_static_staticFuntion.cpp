#include <iostream>
using namespace std;

class Book
{
public:
    static int totalBooks; // Static member variable
    const int bookID;      // Const member variable

    // Constructor
    Book(int id) : bookID(id)
    {
        totalBooks++;
    }

    void display()
    {
        cout << "Book ID: " << bookID << endl;
        cout << "Total Books: " << totalBooks << endl;
    }

    // Static function
    static void showTotalBooks()
    {
        cout << "Total number of books: " << totalBooks << endl;
    }
};

// Initialize static member outside the class
int Book::totalBooks = 0;

int main()
{
    Book book1(101);
    book1.display();

    Book book2(102);
    book2.display();

    Book book3(103);
    book3.display();

    // Call static function
    Book::showTotalBooks();

    return 0;
}
