func Print(message: String) {
	print(message)
}

func ConvertToInt(input: String) -> Int {
	return Int(input)!
}

func Input(question: String) -> Int {
	Print(message: question)
	let str: String = readLine() ?? "0"

	return ConvertToInt(input: str)
}

func RepeatString(value: String, times: Int) -> String {
	var result: String = "";
	for _ in stride(from: 1, to: times, by: 1) {
		result += value
	}

	return result;
}

var row = Input(question: "Enter the number of rows: ")
if (row < 5) {
	row = 5
}

func main() {
	for i in stride(from: 0, to: row, by: 1) {
    	let space: String = RepeatString(value: " ", times: row-i)
		let stars: String = RepeatString(value: " *", times: i+1)

		Print(message: space+stars)
	}	

	for j in stride(from: row-2, to: 0, by: -1) {
		let space1: String = RepeatString(value: " ", times: row-j)
		let stars1: String = RepeatString(value: " *", times: j+1)

		Print(message: space1+stars1)
	}
}

main()
