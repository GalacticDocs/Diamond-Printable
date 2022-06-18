#include <iostream>
#include <string>

using namespace std;

static void Print(string str) {
    cout << str << endl;
}

// Converts a string to an integer.
static int ConvertToInt(string str) {
	return stoi(str);
}

// A function which takes a string as question and returns the user input as integer.
static int Input(string question) {
	string input;
	
	cout << question;
	cin >> input;
	
	return ConvertToInt(input);
}

// Repeats provided string (1st argument) the amount of times as provided as 2nd argument and returns the created string.
static string Repeat(string str, int times) {
	string result = "";
	for (int i = 0; i < times; i++) {
		result += str;
	}
	
	return result;
}

int main()
{
    int row = Input("Enter the amount of rows: ");
	if (row < 5) {
		row = 5;
	}

	for (int i = 0; i < row; i++) {
		string space = Repeat(" ", row - i);
		string star = Repeat(" *", i + 1);
		
		Print(space + star);
	}

	for (int i = row - 2; i >= 0; i--) {
		string space = Repeat(" ", row - i);
		string star = Repeat(" *", i + 1);
		
		Print(space + star);
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
