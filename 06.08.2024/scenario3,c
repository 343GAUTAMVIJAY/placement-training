#include<stdio.h>
#include<string.h>

struct Book{
    int id;
    char title[50];
    char author[50];
};

struct Book library[100];
int count=0;

void addBook(int id,char title[],char author[]){
    library[count].id=id;
    strcpy(library[count].title,title);
    strcpy(library[count].author,author);
    count++;
    printf("Book added successfully!\n");
}

void viewBooks(){
    printf("Library Books:\n");
    for(int i=0;i<count;i++){
        printf("ID: %d,Title: %s,Author: %s\n",library[i].id,library[i].title,library[i].author);
    }
}

void searchBook(char title[]){
    for(int i=0;i<count;i++){
        if(strcmp(library[i].title,title) == 0){
            printf("Book Found: ID: %d,Title: %s,Author: %s\n",library[i].id,library[i].title,library[i].author);
            return;
        }
    }
    printf("Book not found!\n");
}

int main(){
    int choice,id;
    char title[50],author[50];

    do{
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter book ID: ");
                scanf("%d",&id);
                printf("Enter book title: ");
                scanf(" %[^\n]",title);
                printf("Enter book author: ");
                scanf(" %[^\n]",author);
                addBook(id,title,author);
                break;
            case 2:
                viewBooks();
                break;
            case 3:
                printf("Enter book title to search: ");
                scanf(" %[^\n]",title);
                searchBook(title);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 4);

    return 0;
}
