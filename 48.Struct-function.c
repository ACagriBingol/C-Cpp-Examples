#include <stdio.h>
#include <string.h>


struct Books{
	int id;
	char  title[50];
	
};

typedef struct Books Book;

int main(){
	Book Book1;
	Book Book2;
	
	strcpy( Book1.title, "C Programming");
	Book1.id=102;
	
	strcpy( Book2.title, "C++ Programming");
	Book2.id=103;	
	
	printBook(Book1);
	printBook(Book2);
	
		
}




void printBook(Book book ) {

   printf( "Book title : %s\n", book.title);
   printf( "Book book_id : %d\n", book.id);
   
}
