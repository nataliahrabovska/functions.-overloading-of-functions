#ifndef UNTITLED_BOOKSTORE_H
#define UNTITLED_BOOKSTORE_H
#ifndef UNTITLED_H
#define UNTITLED_H

#include "string"
#include "vector"
#include "algorithm"
#include "iostream"

class BookStore {
public:
    BookStore(std::vector<Book> books);
    BookStore();
    ~BookStore();

    void addBook(Book book){
        books.push_back(book);
    }

    void deleteBook(std::string name) {
        int ind = 0;
        for (int i = 0; i < books.size(); ++i) {
            if (books[i].getName() == name) {
                ind = i;
                break;
            }
        }
        for (int i = ind; i < books.size()-1; ++i) {
            books[i] = books[i + 1];
        }
        books.pop_back();
    }

    void sortBooksByPrice(){
        if (books.size()==0){
            std::cout << "The store is empty!\n";
            return;
        }
        auto comp = [&] (Book a, Book b){
            return a.getPrice() > b.getPrice();
        };
        std::vector<Book> arr = books;
        std::sort(arr.begin(), arr.end(), comp);
        std::cout << "--------------------------\n";
        for (int i = 0; i < arr.size(); ++i) {
            std::cout << i+1 << ". " <<
            arr[i].getName() << " | " <<
            arr[i].getAuthor() << " | " <<
            arr[i].getPrice() << " | " <<
            arr[i].getNumberOfSales() << "\n";
        }
        std::cout << "--------------------------\n";
    }

    void sortBooksByNumberOfSales(){
        if (books.size()==0){
            std::cout << "The store is empty!\n";
            return;
        }
        auto comp = [&] (Book a, Book b){
            return a.getNumberOfSales() > b.getNumberOfSales();
        };
        std::vector<Book> arr = books;
        std::sort(arr.begin(), arr.end(), comp);
        std::cout << "--------------------------\n";
        for (int i = 0; i < arr.size(); ++i) {
            std::cout << i+1 << ". " << arr[i].getName() << " | " <<
            arr[i].getAuthor() << " | " <<
            arr[i].getPrice() << " | " <<
            arr[i].getNumberOfSales() << "\n";
        }
        std::cout << "--------------------------\n";
    }

private:
    std::vector<Book> books;
};

BookStore::BookStore() {
    books = {};
}

BookStore::BookStore(std::vector<Book> books_) {
    books = books_;
}

BookStore::~BookStore() {}

Book::Book(std::string name_, int price_, int numberOfPages_, std::string author_, int quantity_,
           int numberOfSales_)  {
    name = name_;
    price = price_;
    numberOfPages = numberOfPages_;
    author = author_;
    quantity = quantity_;
    numberOfSales = numberOfSales_;
}

Book::~Book(){};

#endif //UNTITLED_H
#endif //UNTITLED_BOOKSTORE_H
