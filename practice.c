#include <stdio.h>
#include <string.h>

struct Books{
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
};

void printBook(struct Books a);

int main(){
   struct Books Book1;
   struct Books Book2;
   struct Books Book3;

   strcpy(Book1.title,"Telecom Billing");
   strcpy(Book1.author,"Dogukan");
   strcpy(Book1.subject,"Telecom");
   Book1.book_id = 999029;

   strcpy(Book2.title,"Space");
   strcpy(Book2.author,"Doki");
   strcpy(Book2.subject,"Space");
   Book2.book_id = 9990241;

   strcpy(Book3.title,"Cars");
   strcpy(Book3.author,"Dogukan");
   strcpy(Book3.subject,"Cars Tutorial");
   Book3.book_id = 9910292;

   printBook(Book1);
   printBook(Book2);
   printBook(Book3);

   return 0;

}

void printBook(struct Books a){
   printf("Book title: %s\n", a.title);
   printf("Book author: %s\n", a.author);
   printf("Book subject: %s\n", a.subject);
   printf("Book ID: %d\n\n", a.book_id);
}