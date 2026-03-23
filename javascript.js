const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout
});

readline.question("Enter student name: ", (name) => {
  function askUnits() {
    readline.question("Enter number of registered units: ", (units) => {
      if (!isNaN(units) && units.trim() !== "") {
        units = parseInt(units);
        let status = units > 7 ? "Overload - Approval Required" : "Registration Accepted";

        console.log("\n--- Registration Summary ---");
        console.log(`Student: ${name}`);
        console.log(`Units: ${units}`);
        console.log(`Status: ${status}`);

        readline.close();
      } else {
        console.log("Invalid input. Please enter a number.");
        askUnits();
      }
    });
  }
  askUnits();
});