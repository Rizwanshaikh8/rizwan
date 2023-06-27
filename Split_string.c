#include <stdio.h>
#include <string.h>

void splitWordsByComma(char* inputString) 
{
	int length = strlen(inputString);
    	int i;

    	for (i = 0; i < length; i++) 
	{
        	if (inputString[i] == ' ') 
		{
            		inputString[i] = ',';
        	}
    	}

    	printf("Split words: %s\n", inputString);
}

int main() 
{
    	char inputString[100];

	printf("Enter a string: ");
    	fgets(inputString, sizeof(inputString), stdin);

    	inputString[strcspn(inputString, "\n")] = '\0';

    	splitWordsByComma(inputString);

    	return 0;
}
