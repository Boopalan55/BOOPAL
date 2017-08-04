#include <stdio.h>
int main()
{
    char bc;
    printf("Please Enter an alphabet: \n");
    scanf(" %c", &bc);
    if(bc == 'a' || bc == 'e' || bc == 'i' || bc == 'o' || bc == 'u' ||
		bc == 'A' || bc == 'E' || bc == 'I' || bc == 'O' || bc == 'U')  {
		printf("\n %c is a VOWEL.", bc);
	}
    else {
    	printf("\n %c is a CONSONANT.", bc);
	}
    return 0;
}
