#include "BookStore.h"

int main(){

    std::vector<Book> books = {
            Book("Harry Potter", 500, 400, "J. K. Rowling", 20, 4475152),
            Book("Da Vinci Code", 600, 340, "Dan Brown", 40, 5094805),
            Book("Angels and Demons", 360, 270, "Dan Brown", 12, 3193946),
            Book("Hannibal", 390, 280, "Thomas Harris", 37, 986115),
            Book("Lord of the Rings", 410, 310, "R. R. Tolkien", 4, 967466)
    };

    BookStore nonameStore = BookStore();
    BookStore greatBookStore = BookStore(books);

    nonameStore.addBook(books[2]);
    nonameStore.addBook(books[3]);
    nonameStore.sortBooksByNumberOfSales();
    nonameStore.sortBooksByPrice();
    nonameStore.deleteBook("Angels and Demons");
    nonameStore.sortBooksByPrice();
    nonameStore.deleteBook("Hannibal");
    nonameStore.sortBooksByPrice();
    greatBookStore.sortBooksByPrice();
    greatBookStore.sortBooksByNumberOfSales();
    greatBookStore.deleteBook("Lords of the rings");
    greatBookStore.sortBooksByPrice();
    greatBookStore.addBook(Book("The Very Hungry Caterpillar", 520, 120, "Eric Carle", 2, 1783535));
    greatBookStore.sortBooksByPrice();
    greatBookStore.sortBooksByNumberOfSales();
    return 0;
}