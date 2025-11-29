#include <stdio.h>

int main() {
	// 06 Mentions 
	float Note;
	printf("Entrez votre note "); scanf("%f", &Note);
	printf("Mention : ");

	if (0 > Note || Note > 20)
		printf("Note invalide");
	else if (Note < 10)
		printf("Ajournee");
	else if (Note < 12)
		printf("Passable\n");
	else if (Note < 14)
		printf("Assez bien\n");
	else if (Note < 16)
		printf("Bien\n");
	else
		printf("Très bien\n");
	return 0;
}