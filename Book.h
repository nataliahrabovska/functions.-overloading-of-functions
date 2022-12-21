#include "string"

class Book {
public:
    Book(std::string name,
         int price_,
         std::string author_,
         int numberOfSales_);

    ~Book();

    const std::string getName() {
        return name;
    }

    const int getPrice() {
        return price;
    }

    const int getNumberOfSales() {
        return numberOfSales;
    }

    std::string getAuthor() {
        return author;
    }

private:
    int price;
    int numberOfSales;
    std::string name;
    std::string author;
};
