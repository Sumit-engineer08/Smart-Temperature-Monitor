# Smart Temperature Monitor

A beginner-friendly C project that simulates a basic temperature monitoring system.

## Features

- Accepts temperature in Celsius from the user
- Classifies temperature as Cold, Normal, Warm, or Hot
- Displays a high-temperature warning at 40°C or above
- Uses a separate function for temperature classification
- Demonstrates basic C programming concepts

## Technologies

- C Programming
- GCC compiler

## Concepts Used

- Variables and data types
- `scanf()` and `printf()`
- `if-else` statements
- Functions
- Floating-point values
- Basic input validation

## How to Run

### 1. Compile

```bash
gcc temperature_monitor.c -o temperature_monitor
```

### 2. Run

Linux/macOS:

```bash
./temperature_monitor
```

Windows:

```bash
temperature_monitor.exe
```

## Sample Output

```text
====================================
   SMART TEMPERATURE MONITOR
====================================
Enter temperature in Celsius: 32

Temperature: 32.00 C
Status: Warm
```

## Temperature Classification

| Temperature | Status |
|---|---|
| Below 15°C | Cold |
| 15°C to below 25°C | Normal |
| 25°C to below 35°C | Warm |
| 35°C and above | Hot |
| 40°C and above | High-temperature warning |

## Future Improvements

- Connect the program to a real temperature sensor
- Implement the project using Arduino
- Add an LCD/OLED display
- Add LED and buzzer alerts
- Store temperature readings
- Add min/max temperature tracking

## Author

**Sumit Kale**

This project was created as a beginner C programming and embedded-systems learning project.
