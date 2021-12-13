#include <iostream>
using namespace std;

class Book{
    private:
        int pages;
    public:
        string title;
        string author;

        Book(string bookTitle, string bookAuthor, int bookPages){
            title = bookTitle;
            author = bookAuthor;
            setPages(bookPages);
            cout << "Book created" << endl;
        }

        void setPages(int bookPages)
        {
            if (bookPages > 0)
                pages = bookPages;
            else
                pages = 0;
        }
        bool isLong(){
            if (pages > 500){
                return 1;
            }
            return 0;
        }
        int getPages(void){
            return pages;
        }
    
};

int main (void)
{
    Book book1("Harry Potter", "J.K. Rowling", 516);
    Book book2("Lord of The Rings", "Tolkien", -400);

    cout << book2.getPages() <<endl;
    return 0;
}
