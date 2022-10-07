#include<stdio.h>

struct book
{
    char book_name[20];
    int bookid;
    float book_price;
    char author[15];
};

int main()
{
    struct book b[3];
    int i;
    //clrscr();
    for(i=0; i<3; i++)
    {
        printf("Enter details of book #%d\n", i+1);
        printf("Enter book id: ");
        scanf("%d", &b[i].bookid);
        printf("Enter book name: ");
        scanf("%s", b[i].book_name);
        printf("Enter book author: ");
        scanf("%s", b[i].author);
        printf("Enter book price: ");
        scanf("%f", &b[i].book_price);
    }

    for(i=0; i<3; i++)
    {
        printf("\nBook %d.............\n\n", i+1);
        printf("Book Id: %d\n", b[i].bookid);
        printf("Book Name: %s\n", b[i].book_name);
        printf("Book Author: %s\n", b[i].author);
        printf("Book price: %f", b[i].book_price);
    }
    return 0;
}
