import { createInterface } from "readline";
const rl = createInterface({
    input: process.stdin,
    output: process.stdout
});

const Print = (message: string): void => {
    process.stdout.write(message + "\n");
};

const ConvertToInt = (string: string): number => {
    return parseInt(string);
};

const Main = () => {
    rl.question("Enter the number of rows: ", (rows) => {
        let row: number = ConvertToInt(rows);
        if (row < 5) {
            row = 5;
        }

        for (let i: number = 0; i < row; i++) {
            const space = " ".repeat(row - i);
            const star = " *".repeat(i + 1);

            Print(space + star);
        }

        for (let j: number = row - 2; j >= 0; j--) {
            const space1 = " ".repeat(row - j);
            const star1 = " *".repeat(j + 1);

            Print(space1 + star1);
        }
    });
};

Main();
