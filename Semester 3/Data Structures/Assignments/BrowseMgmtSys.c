#include <stdio.h>
#include <string.h>

#define MAX_HISTORY 10

// Structure to hold history information
typedef struct {
    char url[100];
} BrowserHistory;

BrowserHistory history[MAX_HISTORY];
int currentIndex = -1;

// Function to visit a new web page
void visitNewPage(char *url) {
    if (currentIndex < MAX_HISTORY - 1) {
        currentIndex++;
        strcpy(history[currentIndex].url, url);
    } else {
        for (int i = 1; i < MAX_HISTORY; i++) {
            strcpy(history[i - 1].url, history[i].url);
        }
        strcpy(history[MAX_HISTORY - 1].url, url);
    }
}

// Function to go back to the previous page
void goBack() {
    if (currentIndex > 0) {
        currentIndex--;
        printf("Navigated back to: %s\n", history[currentIndex].url);
    } else {
        printf("No more pages to go back to.\n");
    }
}

// Function to display the current stack of visited pages
void showHistory() {
    if (currentIndex == -1) {
        printf("No history available.\n");
        return;
    }
    printf("Visited Pages:\n");
    for (int i = 0; i <= currentIndex; i++) {
        printf("%d. %s\n", i + 1, history[i].url);
    }
}

int main() {
    int choice;
    char url[100];

    while (1) {
        printf("\nBrowser History Management\n");
        printf("1. Visit New Page\n");
        printf("2. Go Back\n");
        printf("3. Show History\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // To capture the newline character

        switch (choice) {
            case 1:
                printf("Enter URL: ");
                fgets(url, sizeof(url), stdin);
                url[strcspn(url, "\n")] = '\0';  // Remove the newline
                visitNewPage(url);
                break;
            case 2:
                goBack();
                break;
            case 3:
                showHistory();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}