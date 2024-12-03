include <stdio.h>
int main( )
{
	struct student
	{
		char name[20];
		char rollno[11];
		int year;
		char class[8];
		struct address;
	};
	struct student[5];
	struct address
	{
		int doorno;
	};
	printf ( "Enter names, prices & no. of pages of 3 books\n" ) ;
	scanf("%c %f %d\n",&b[i].name,&b1.price,&b1.pages) ;
	scanf ( "%c %f %d", &b2.name, &b2.price, &b2.pages ) ;
	scanf ( "%c %f %d", &b3.name, &b3.price, &b3.pages ) ;
	printf ( "And this is what you entered\n" ) ;
	printf ( "%c %f %d\n", b1.name, b1.price, b1.pages ) ;
	printf ( "%c %f %d\n", b2.name, b2.price, b2.pages ) ;
	printf ( "%c %f %d\n", b3.name, b3.price, b3.pages ) ;
	return 0 ;
}
