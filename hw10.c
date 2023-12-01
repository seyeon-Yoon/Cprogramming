#define _CRT_SECURES_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

struct City {
	char name[50];
	char country[50];
	int population;
};

void clearNewline(char* str) {
	size_t len = strlen(str);
	if (len > 0 && str[len - 1] == '\n') {
		str[len - 1] = '\0';
	}
}

int main() {
	struct City cities[3];

	printf("Input three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("Name> ");
		fgets(cities[i].name, 50, stdin);
		clearNewline(cities[i].name);

		printf("Country> ");
		fgets(cities[i].country, 50, stdin);
		clearNewline(cities[i].country);

		printf("Population > ");
		scanf_s("%d", &cities[i].population);
		getchar();
	}

	printf("\nPrinting the three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %d people\n", i + 1, cities[i].name, cities[i].country, cities[i].population);
	}
	system("pause");
	return 0;
	
}