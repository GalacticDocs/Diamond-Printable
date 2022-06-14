using System;

namespace DiamondCS
{
    class Program
    {
        static void Print(string message)
        {
            Console.WriteLine(message);
        }

        // A function which takes a string and converts it to an integer.
        static int ConvertToInt(string str)
        {
            return Convert.ToInt32(str);
        }

        // A function which takes a integer and converts it to a string.
        static string ConvertToString(int num)
        {
            return Convert.ToString(num);
        }

        static int Input(string message)
        {
            Print(message);
            int answer = ConvertToInt(Console.ReadLine());
            Print(" ");

            return answer;
        }

        // Repeats provided string (1st argument) the amount of times as provided as 2nd argument.
        static string RepeatString(string str, int times)
        {
            string result = "";
            for (int i = 0; i < times; i++)
            {
                result += str;
            }
            return result;
        }

        static void Main(string[] args)
        {
            int row = Input("Enter the number of rows: ");
            if (row < 5)
            {
                row = 5;
            }

            for (int i = 0; i < row; i++)
            {
                string space = RepeatString(" ", row - i);
                string star = RepeatString(" *", i + 1);
                
                Print(space + star);
            }

            for (int i = row - 2; i >= 0; i--)
            {
                string space1 = RepeatString(" ", row - i);
                string star1 = RepeatString(" *", i + 1);

                Print(space1 + star1);
            }
        }
    }
}