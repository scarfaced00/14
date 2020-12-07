#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Book {
	int number;
	char title[10];
};
int main()
{
	struct Book *p;
	
	p=(struct Book*)malloc(2*sizeof(struct Book));

	if(p==NULL){
		printf("memory allocation Error!\n");
		return 1;
	}
	
	p->number=1;
	strcpy(p->title,"C programming");
	
	(p+1)->number=2;
	strcpy((p+1)->title,"Electronics");
	
	printf("%s %s\n",p->title,(p+1)->title);
	
	free(p);
	return 0;
}

