#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 10

// Structure to store book information
typedef struct {
    char title[100];
    char author[100];
    int copies;
} Book;

Book inventory[MAX_BOOKS];
int currentBookCount = 0;

// Function to add book details
void addBook() {
    if (currentBookCount < MAX_BOOKS) {
        printf("Enter book title: ");
        fgets(inventory[currentBookCount].title, sizeof(inventory[currentBookCount].title), stdin);
        inventory[currentBookCount].title[strcspn(inventory[currentBookCount].title, "\n")] = '\0'; // Remove newline
        
        printf("Enter author: ");
        fgets(inventory[currentBookCount].author, sizeof(inventory[currentBookCount].author), stdin);
        inventory[currentBookCount].author[strcspn(inventory[currentBookCount].author, "\n")] = '\0'; // Remove newline
        
        printf("Enter number of copies: ");
        scanf("%d", &inventory[currentBookCount].copies);
        getchar();  // Capture the newline
        
        currentBookCount++;
    } else {
        printf("Inventory full, cannot add more books.\n");
    }
}

// Function to display all books
void displayBooks() {
    if (currentBookCount == 0) {
        printf("No books in the inventory.\n");
        return;
    }
    printf("\nBooks in the inventory:\n");
    for (int i = 0; i < currentBookCount; i++) {
        printf("%d. Title: %s, Author: %s, Copies: %d\n", i + 1, inventory[i].title, inventory[i].author, inventory[i].copies);
    }
}

// Function to search for a book by title
void searchBook() {
    char title[100];
    int found = 0;
    printf("Enter the title of the book to search: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0'; // Remove newline

    for (int i = 0; i < currentBookCount; i++) {
        if (strcmp(inventory[i].title, title) == 0) {
            printf("Book found: Title: %s, Author: %s, Copies: %d\n", inventory[i].title, inventory[i].author, inventory[i].copies);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

// Function to update the number of copies for a book
void updateBookQuantity() {
    char title[100];
    printf("Enter the title of the book to update: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0'; // Remove newline
    
    for (int i = 0; i < currentBookCount; i++) {
        if (strcmp(inventory[i].title, title) == 0) {
            printf("Enter new number of copies: ");
            scanf("%d", &inventory[i].copies);
            getchar();  // Capture the newline
            printf("Book quantity updated.\n");
            return;
        }
    }

    printf("Book not found.\n");
}

// Function to delete a book
void deleteBook() {
    char title[100];
    printf("Enter the title of the book to delete: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0'; // Remove newline
    
    for (int i = 0; i < currentBookCount; i++) {
        if (strcmp(inventory[i].title, title) == 0) {
            for (int j = i; j < currentBookCount - 1; j++) {
                inventory[j] = inventory[j + 1];  // Shift books
            }
            currentBookCount--;
            printf("Book deleted.\n");
            return;
        }
    }

    printf("Book not found.\n");
}

// Function to find the book with maximum copies
void findMaxCopiesBook() {
    if (currentBookCount == 0) {
        printf("No books in the inventory.\n");
        return;
    }

    int maxIndex = 0;
    for (int i = 1; i < currentBookCount; i++) {
        if (inventory[i].copies > inventory[maxIndex].copies) {
            maxIndex = i;
        }
    }

    printf("Book with maximum copies: Title: %s, Author: %s, Copies: %d\n", inventory[maxIndex].title, inventory[maxIndex].author, inventory[maxIndex].copies);
}

int main() {
    int choice;

    while (1) {
        printf("\nInventory Management System\n");
        printf("1. Add Book Details\n");
        printf("2. Display All Books\n");
        printf("3. Search for a Book\n");
        printf("4. Update Book Quantity\n");
        printf("5. Delete a Book\n");
        printf("6. Find Book with Maximum Copies\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Capture the newline

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                updateBookQuantity();
                break;
            case 5:
                deleteBook();
                break;
            case 6:
                findMaxCopiesBook();
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}