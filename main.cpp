#include "iostream"
#include "BookStore.h"

int main(){
    std::vector<Book> books = {
            Book("Harry Potter", 500, "J. K. Rowling", 4475152),
            Book("Da Vinci Code", 600, "Dan Brown", 5094805),
            Book("Angels and Demons", 360, "Dan Brown", 3193946),
            Book("Hannibal", 390, "Thomas Harris", 986115),
            Book("Lord of the Rings", 410, "R. R. Tolkien", 967466)
    };
    BookStore nonameStore = BookStore();
    BookStore greatBookStore = BookStore(books);
    nonameStore.addBook(books[2]);
    nonameStore.addBook(books[3]);
    nonameStore.sortBooksByNumberOfSalesAscending();
    nonameStore.sortBooksByPriceAscending();
    nonameStore.deleteBook("Angels and Demons");
    nonameStore.sortBooksByPriceAscending();
    nonameStore.deleteBook("Hannibal");
    nonameStore.sortBooksByPriceAscending();
    greatBookStore.sortBooksByPriceAscending();
    greatBookStore.sortBooksByNumberOfSalesAscending();
    greatBookStore.deleteBook("Lords of the rings");
    greatBookStore.sortBooksByPriceAscending();
    greatBookStore.addBook(Book("The Very Hungry Caterpillar", 520, "Eric Carle", 1783535));
    greatBookStore.sortBooksByPriceAscending();
    greatBookStore.sortBooksByNumberOfSalesAscending();
    return 0;
}
