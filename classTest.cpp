#include <iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;

        Book(string bookTitle, string bookAuthor, int bookPages){
            title = bookTitle;
            author = bookAuthor;
            pages = bookPages;
            cout << "Book created" << endl;
        }
};

int main (void)
{
    Book book1("Harry Potter", "J.K. Rowling", 516);
    Book book2("Lord of The Rings", "Tolkien", 739);

    cout << book2.author <<endl;
    return 0;
}