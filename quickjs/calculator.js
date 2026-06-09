const readline = require("readline");
const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

function Add(a, b) { return a + b; }
function Subtract(a, b) { return a - b; }
function Divide(a, b) { return b === 0 ? "Undefined" : a / b; }
function Multiply(a, b) { return a * b; }

console.log("============= CALCULATOR ===============");
console.log("1. Add");
console.log("2. Subtract");
console.log("3. Divide");
console.log("4. Multiply");
console.log("5. Exit");

function displayMenu()
{
	rl.question("\nChoose your Operation : ", (choice) => {
		if( choice === "5")
		{
			console.log("Goodbye...");
			rl.close();
			return;
		}

		rl.question("Enter first number: ", (a)=> {
			rl.question("Enter second number: ", (b) => {
				a = parseFloat(a);
				b = parseFloat(b);

				switch(choice) {
					case "1" : console.log("Result : ", Add(a, b)); break;
					case "2" : console.log("Result : ", Subtract(a, b)); break;
					case "3" : console.log("Result : ", Divide(a, b)); break;
					case "4" : console.log("Result : ", Multiply(a, b)); break;
					default: 
						console.log("Invalid input!");
				}

				displayMenu(); // loop back to menu.
			});
		});
	});
}

displayMenu();