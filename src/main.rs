use std::io;

fn print(string: &str) {
    println!("{}", string);
}

fn convert_to_int(string: &str) -> i32 {
    string.parse::<i32>().unwrap()
}

fn input(question: &str) -> String {
    print(question);
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    return input.trim().to_string();
}

fn i32_to_usize(i32er: i32) -> usize {
    return i32er as usize;
}

fn main() {
    let mut row: i32 = input("Enter the number of rows: ").parse().unwrap();
    if row < 5 {
        row = 5;
    }

    for i in 0..row {
        let space = " ".repeat(i32_to_usize(row - i));
        let star = " *".repeat(i32_to_usize(i + 1));

        println!("{}{}", &space, &star);
    }

    for i in (0..row - 1).rev() {
        let space1 = " ".repeat(i32_to_usize(row - i));
        let star1 = " *".repeat(i32_to_usize(i + 1));

        println!("{}{}", &space1, &star1);
    }
}
