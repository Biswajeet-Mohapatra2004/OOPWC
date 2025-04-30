/*
3.2 A book shop maintains the inventory of books that are being sold at the shop. The list includes
details such as author, title, price and publisher. Whenever a customer wants a book, the
salesperson inputs the title and author, and the system searches the list and displays whether
it is available in the shop or not. If not, an appropriate message is displayed. If it is, then
the system displays the book details for sale. Design a program using a class called Book with
suitable member functions and constructors.
8
*/
#include <iostream>
using namespace std;

class Book
{
private:
    string author;
    string title;
    double price;
    string publisher;
    int quantity;

public:
    Book()
    {
        author = "";
        title = "";
        publisher = "";
        price = 0.00;
        quantity = 0;
    }

    Book(string author, string title, string publisher, int quantity, double price);

    Book(const Book &book)
    {
        author = book.author;
        title = book.title;
        publisher = book.publisher;
        price = book.price;
        quantity = book.quantity;
    }

    void display();
    string getTitle() { return title; }
    int getQuantity() { return quantity; }

    static Book searchByTitle(string title, Book *books, int n);
};

Book::Book(string author, string title, string publisher, int quantity, double price)
{
    this->author = author;
    this->title = title;
    this->publisher = publisher;
    this->price = price;
    this->quantity = quantity;
}

void Book::display()
{
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
}

Book Book::searchByTitle(string title, Book *books, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (books[i].getTitle() == title && books[i].getQuantity() > 0)
        {
            return books[i];
        }
    }
    return Book();
}

int main()
{
    int n;
    cout << "Enter the number of books to put in inventory: ";
    cin >> n;

    Book *books = new Book[n];

    for (int i = 0; i < n; i++)
    {
        string author, title, publisher;
        double price;
        int quantity;

        cout << "\nEnter author title publisher (single-word each), price, quantity: ";
        cin >> author >> title >> publisher >> price >> quantity;

        books[i] = Book(author, title, publisher, quantity, price);
    }

    cout << "\nEnter the book title you want to search: ";
    string title;
    cin >> title;

    Book book = Book::searchByTitle(title, books, n);
    if (book.getTitle() != "")
    {
        cout << "\nBook found:\n";
        book.display();
    }
    else
    {
        cout << "\nThe requested book is not available!!" << endl;
    }

    delete[] books;
    return 0;
}
