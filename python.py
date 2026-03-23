def registration_checker():
    name = input("Enter student name: ")

    while True:
        units_input = input("Enter number of registered units: ")
        if units_input.isdigit():
            units = int(units_input)
            break
        else:
            print("Invalid input. Please enter a number.")

    status = "Overload - Approval Required" if units > 7 else "Registration Accepted"

    print("\n--- Registration Summary ---")
    print(f"Student: {name}")
    print(f"Units: {units}")
    print(f"Status: {status}")

if __name__ == "__main__":
    registration_checker()