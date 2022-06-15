const rl = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

/**
 * A function which takes a string and prints the text into console/terminal.
 * @param {string} message
 */
const Print = (message) => {
    process.stdout.write(message + "\n");
};

/** 
 * A function which takes a string and converts it to an integer. 
 * @param {string} input
 */
const ConvertToInt = (input) => {
    return parseInt(input);
};

const Main = () => {
    rl.question("Enter the number of rows: ", (rows) => {
        let row = ConvertToInt(rows);
        if (row < 5) {
            row = 5;
        }

        for (let i = 0; i < row; i++) {
            const space = " ".repeat(row - i);
            const star = " *".repeat(i + 1);

            Print(space + star);
        }

        for (let j = row - 2; j >= 0; j--) {
            const space1 = " ".repeat(row - j);
            const star1 = " *".repeat(j + 1);

            Print(space1 + star1);
        }

        rl.close();
    });

    rl.on("close", () => process.exit(0));
};

Main();