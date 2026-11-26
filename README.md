# ⚡ Electricity Bill Calculator

A simple C program that calculates electricity bills based on the number of units consumed using predefined rate slabs.

## 📌 Project Overview

This project is built using the C programming language. It takes electricity consumption (units) as input from the user and calculates the total bill using different rates.

## ✨ Features

- User input for electricity units
- Slab-based bill calculation
- Invalid input handling for negative units
- User-defined function
- Simple and beginner-friendly C code

## 💰 Electricity Rate Slabs

| Electricity Units | Rate |
|---|---|
| 0–100 | ₹3/unit |
| 101–200 | ₹5/unit (additional units) |
| Above 200 | ₹7/unit (additional units) |

*Note: These are sample rates used for this project, not official electricity tariffs.*

## 🖥️ Sample Output

```text
Enter electricity units: 50
Total bill = Rs. 150.00
```

```text
Enter electricity units: 150
Total bill = Rs. 550.00
```

```text
Enter electricity units: 250
Total bill = Rs. 1150.00
```

## 🛠️ Technologies Used

- C Programming Language
- GCC Compiler
- Git
- GitHub

## 📂 Project Structure

```text
Electricity-Bill-Calculator/
├── electricity_bill_calculator.c
└── README.md
```

## ▶️ How to Run

**1. Clone the repository**

```bash
git clone YOUR_REPOSITORY_URL
```

**2. Navigate to the project folder**

```bash
cd Electricity-Bill-Calculator
```

**3. Compile the program**

```bash
gcc electricity_bill_calculator.c -o bill
```

**4. Run the program**

Windows:

```bash
bill.exe
```

Linux/macOS:

```bash
./bill
```

## 📚 Concepts Used

- Variables and Data Types
- Functions
- If-Else Statements
- User Input and Output
- Arithmetic Operations

## 👨‍💻 Author

**Himanshu**

---

⭐ *A beginner C programming project created for learning and practice.*
