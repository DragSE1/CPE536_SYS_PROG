#include <stdio.h>
#include <string.h>
#include "header.h"

void Reply(char *Hi);

int main()
{
	char chat[10];

	printf("Say something\n");
	fgets(chat,10,stdin);
	Reply(chat);

	return 0;
}



