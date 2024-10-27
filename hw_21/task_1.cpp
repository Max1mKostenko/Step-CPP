#include <iostream>
using namespace std;

struct Book {
    char title[50];
    char author[50];
    char publisher[50];
    char genre[30];
};

void print_book(const Book& book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Publisher: " << book.publisher << endl;
    cout << "Genre: " << book.genre << endl;
    cout << "-------------------------" << endl;
}

void edit_book(Book& book) {
    cout << "Enter new title: ";
    cin.ignore();
    cin.getline(book.title, 50);
    cout << "Enter new author: ";
    cin.getline(book.author, 50);
    cout << "Enter new publisher: ";
    cin.getline(book.publisher, 50);
    cout << "Enter new genre: ";
    cin.getline(book.genre, 30);
}

void print_all_books(Book books[], int size) {
    for (int i = 0; i < size; i++) {
        print_book(books[i]);
    }
}

void search_by_author(Book books[], int size, char* author) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (strcmp(books[i].author, author) == 0) {
            print_book(books[i]);
            found = true;
        }
    }
    if (!found) {
        cout << "No books found by author: " << author << endl;
    }
}

void search_by_title(Book books[], int size, char* title) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (strcmp(books[i].title, title) == 0) {
            print_book(books[i]);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "No books found with title: " << title << endl;
    }
}

// сортировки через Bubble sort

void sort_by_title(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(books[j].title, books[j + 1].title) > 0) {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

void sort_by_author(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(books[j].author, books[j + 1].author) > 0) {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

void sort_by_publisher(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(books[j].publisher, books[j + 1].publisher) > 0) {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}


int main() {
    const int size = 10;
    Book books[size] = {
        {"The Great Gatsby", "F. Scott Fitzgerald", "Scribner", "Novel"},
        {"To Kill a Mockingbird", "Harper Lee", "J.B. Lippincott & Co.", "Fiction"},
        {"1984", "George Orwell", "Secker & Warburg", "Dystopian"},
        {"Moby Dick", "Herman Melville", "Harper & Brothers", "Adventure"},
        {"Pride and Prejudice", "Jane Austen", "T. Egerton", "Romance"},
        {"War and Peace", "Leo Tolstoy", "The Russian Messenger", "Historical"},
        {"The Catcher in the Rye", "J.D. Salinger", "Little, Brown and Company", "Fiction"},
        {"The Hobbit", "J.R.R. Tolkien", "George Allen & Unwin", "Fantasy"},
        {"Ulysses", "James Joyce", "Shakespeare and Company", "Modernist"},
        {"The Odyssey", "Homer", "Ancient Greece", "Epic"}
    };

    int choice;
    do {
        cout << "\nLibrary Menu:\n";
        cout << "1. Edit a Book\n";
        cout << "2. Print All Books\n";
        cout << "3. Search Books by Author\n";
        cout << "4. Search Book by Title\n";
        cout << "5. Sort Books by Title\n";
        cout << "6. Sort Books by Author\n";
        cout << "7. Sort Books by Publisher\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int book_index;
            cout << "Enter book index (0 to " << size - 1 << "): ";
            cin >> book_index;
            if (book_index >= 0 && book_index < size) {
                edit_book(books[book_index]);
            }
            else {
                cout << "Invalid index!" << endl;
            }
            break;
        }
        case 2:
            print_all_books(books, size);
            break;
        case 3: {
            char author[50];
            cout << "Enter author: ";
            cin.ignore();
            cin.getline(author, 50);
            search_by_author(books, size, author);
            break;
        }
        case 4: {
            char title[50];
            cout << "Enter title: ";
            cin.ignore();
            cin.getline(title, 50);
            search_by_title(books, size, title);
            break;
        }
        case 5:
            sort_by_title(books, size);
            cout << "Books sorted by title." << endl;
            break;
        case 6:
            sort_by_author(books, size);
            cout << "Books sorted by author." << endl;
            break;
        case 7:
            sort_by_publisher(books, size);
            cout << "Books sorted by publisher." << endl;
            break;
        case 8:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 8);
}
