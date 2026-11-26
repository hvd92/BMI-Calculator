# Temperature Converter in C

A menu-driven C program that converts temperatures between Celsius, Fahrenheit, and Kelvin.

## Features
- Celsius to Fahrenheit
- Fahrenheit to Celsius
- Celsius to Kelvin
- Kelvin to Celsius
- Fahrenheit to Kelvin
- Kelvin to Fahrenheit
- Menu-driven interface with an exit option
- Invalid menu choice handling

## Conversion Formulas
| Conversion | Formula |
|---|---|
| Celsius to Fahrenheit | (C × 9/5) + 32 |
| Fahrenheit to Celsius | (F − 32) × 5/9 |
| Celsius to Kelvin | C + 273.15 |
| Kelvin to Celsius | K − 273.15 |
| Fahrenheit to Kelvin | (F − 32) × 5/9 + 273.15 |
| Kelvin to Fahrenheit | (K − 273.15) × 9/5 + 32 |

## Sample Output
```text
===== TEMPERATURE CONVERTER =====
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Celsius to Kelvin
4. Kelvin to Celsius
5. Fahrenheit to Kelvin
6. Kelvin to Fahrenheit
7. Exit
Enter your choice: 1
Enter temperature: 37
Result: 98.60 F
```

## How to Compile and Run
Compile using GCC:
```bash
gcc temperature_converter.c -o temperature_converter
```

Run on Windows:
```bash
temperature_converter.exe
```

Run on Linux/macOS:
```bash
./temperature_converter
```

## Concepts Used
- Variables and data types (`int`, `float`)
- `printf()` and `scanf()`
- `switch-case`
- `do-while` loop
- `if` statement
- Arithmetic operations

## Requirements
- GCC compiler (or another C compiler)

## Author
Himanshu

