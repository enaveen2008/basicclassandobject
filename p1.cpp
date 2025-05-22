/*
1. Basic Class and Object
Create a class 'Book' with:
- Attributes: 'title', 'author', 'price'
- Methods: 'displayInfo()'
Create 2 book objects and display their details.
*/

#include <iostream>
using namespace std;

//Declaring & Defining a Class

class Book {
private:  // Private Data Members
    string title;
    string author;
    float price;

public:
    // Constructor
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    // Method to display book details
    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl << endl;
    }
};

int main() {
    // Creating Book objects by calling constructor which is parameterized
    Book book1("The Alchemist", "Paulo Coelho", 9.99);
    Book book2("Clean Code", "Robert C. Martin", 29.99);

    // Displaying their information
    cout << "Book 1 Details:" << endl;
    book1.displayInfo();

    cout << "Book 2 Details:" << endl;
    book2.displayInfo();

    return 0;
}