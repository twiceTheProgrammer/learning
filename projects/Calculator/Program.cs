using System;

class Calculator
{
	static void Main(String[] args)
	{
		int option;
		double a, b;

		Console.WriteLine("============== CALCULATOR ==============");
		do
		{
			Console.WriteLine("1. Add\n2. Subtract\n3. Divide\n4. Multiply\n5. Exit");
			Console.WriteLine("Choose option : ");

			if (!int.TryParse(Console.ReadLine(), out option))
			{
				Console.WriteLine("Invalid input!");
				continue;
			}

			if (option >= 1 && option <= 4)
			{
				Console.WriteLine("Enter first number: ");
				a = Convert.ToDouble(Console.ReadLine());

				Console.WriteLine("Enter second number: ");
				b = Convert.ToDouble(Console.ReadLine());
			}
			else
			{
				a = b = 0;
			}
			switch(option)
			{
				case 1: Console.WriteLine($"{a} + {b} = {Add(a, b)}"); break;
				case 2: Console.WriteLine($"{a} - {b} = {Subtract(a, b)}"); break;
				case 3: Console.WriteLine($"{a} / {b} = {Divide(a, b)}"); break;
				case 4: Console.WriteLine($"{a} x {b} = {Multiply(a, b)}"); break;
				case 5: Console.WriteLine("Goodbye..."); break;
				default: Console.WriteLine("Invalid input!"); break;
			}
		}
		while (option != 5);
	}

	static double Add(double a, double b) { return a + b; }
	static double Subtract(double a, double b) { return a - b; }
	static double Multiply(double a, double b) { return a * b; }
	static double Divide(double a, double b)
	{
		if(b == 0 )
		{
			Console.WriteLine("Error: Division by zero!");
			return double.NaN;
		}
		return a / b;
	}
}