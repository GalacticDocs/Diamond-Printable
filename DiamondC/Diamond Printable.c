#include<stdio.h>

static void Print(char message[]) {
	printf("[C] %s", message);
}

static int ConvertToInt(char value[30]) {
	return atoi(value);
}

static int Input(char question[30]) {
	int answer;

	Print(question);
	scanf("%d", &answer);

	return answer;
}

static char Repeat(char value[5], int times) {
	char result;
	for (int _i = 0; _i < times; _i++) {
		result = result + value;
	}

	return result;
}

int main() {
	int rows = Input("Enter the amount of rows: ");
	if (rows < 5) {
		rows = 5;
	}

	for (int i = 0; i < rows; i++) {
		char space = Repeat(" ", rows - i);
		char star = Repeat(" *", i + 1);

		Print(space + star);
	}

	for (int i = rows - 2; i >= 0; i--) {
		char space = Repeat(" ", rows - i);
		char star = Repeat(" *", i + 1);

		Print(space + star);
	}

	return 0;
}