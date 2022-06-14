package main

import (
	"fmt"
	"strings"
)

func Print(message string) {
	fmt.Println(message)
}

// A function which takes a string and converts it to an integer.
func ConvertToInt(input string) int {
	var output int
	fmt.Sscanf(input, "%d", &output)

	return output
}

// A function which takes a integer and converts it to a string.
func ConvertToString(input int) string {
	var output string = fmt.Sprintf("%d", input)

	return output
}

func Input(message string) int {
	Print(message)

	var input string
	fmt.Scanln(&input)

	// Returns input as an integer.
	return ConvertToInt(input)
}

func main() {
	var row int = Input("Enter the number of rows: ")
	if row < 5 {
		row = 5
	}

	for i := 0; i < row; i++ {
		var space string = strings.Repeat(" ", row-i)
		var star string = strings.Repeat(" *", i+1)

		Print(space + star)
	}

	for j := row - 2; j > 0; j-- {
		var space string = strings.Repeat(" ", row-j)
		var star string = strings.Repeat(" *", j+1)

		Print(space + star)
	}

	var space string = strings.Repeat(" ", row)
	var star string = strings.Repeat(" *", 1)

	Print(space + star)
}
