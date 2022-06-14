module main

import readline

fn printable(message string) {
	println(message)
}

// A function which takes a string and converts it to an integer.
fn string_to_int(input string) int {
	return input.int()
}

// A function which takes a integer and converts it to a string.
fn int_to_string(input int) string {
	return input.str()
}

// A function which reads a line from stdin and returns it.
fn input(message string) ?string {
	return readline.read_line(message)
}

// A function which repeats provided string (1st argument) the amount of times as provided in the 2nd argument.
fn repeat(input string, times int) string {
	mut result := ""

	for i := 0; i < times; i++ {
		result += input
	}
	
	return result
}

fn main() {
	inp := input("Enter the number of rows: ")?
	mut row := string_to_int(inp)
	if row < 5 {
		row = 5
	}

	for i := 0; i < row; i++ {
		space := repeat(" ", row-i)
		star := repeat(" *", i+1)

		printable(space + star)
	}

	for j := row-2; j > 0; j-- {
		space := repeat(" ", row-j)
		star := repeat(" *", j+1)

		printable(space + star)
	}

	space := repeat(" ", row)
	star := repeat(" *", 1)

	printable(space + star)
}
