#include <stdio.h>

struct book
{
	char name[50];
}b1;

int main()
{
	printf("Enter book name.\n");
	fgets(b1.name, 50,  stdin);

	/*end of data collection*/
	FILE *wherfile;
	
	wherfile = fopen("Bookslist.txt","a");
	
	if(wherfile != NULL)
	{
		fputs(b1.name, wherfile);
		fclose(wherfile);
		printf("Book has been successfully stored. Press Enter to quit.\n");
		
		getchar();
		return 0;
	}
	else
	{
		printf("Failed to store book.\n");
		return 1;
	}
	
	printf("Book %s has been stored \n", b1.name);
	printf("\n Press enter to quit.\n");
	
	getchar();
	
	return 0;
}

