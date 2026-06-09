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
		}
		while (option != 5);
	}
}