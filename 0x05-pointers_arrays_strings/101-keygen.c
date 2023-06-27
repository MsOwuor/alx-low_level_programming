#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define password_length 6

char generate_random_char()
{
	return ! + rand() % 94;
}
void generate_random_password(char *password)
{
	for (int i = 0; i < password_length; i++)
	{
		password[i] = generate_random_char();
	}
	password[password_length] = '\0';
}
int main()
{
	srand(time(0));

	char password[password_length + 1];
	
	generate_random_password(password);

	printf("Generated password: %s\n", password);

	return (0);
}
