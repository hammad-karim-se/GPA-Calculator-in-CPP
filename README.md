# GPA Calculator (C++ OOP)

A console-based GPA Calculator developed in C++ using Object-Oriented Programming (OOP) principles. This project calculates a student's GPA based on course grades and credit hours while demonstrating class design, encapsulation, constructors, and object composition.

## Features

- Calculate GPA using letter grades and credit hours
- Supports standard university grading scales
- Validates grades and credit hours
- Calculates total grade points
- Displays final GPA with formatted output
- Menu-free, user-friendly console interface
- Modular design using separate class files

## OOP Concepts Implemented

- Classes & Objects
- Encapsulation
- Constructors
- Member Functions
- Object Composition
- Data Hiding
- Separate Header (.h) and Source (.cpp) Files

## Project Structure

```text
GPA-Calculator/
│
├── Course.h
├── Course.cpp
├── GPA.h
├── GPA.cpp
└── main.cpp
```

### Class Responsibilities

#### Course Class

Represents an individual course.

**Attributes**
- Grade
- Credit Hours

**Functions**
- Store course information
- Convert letter grades into grade points
- Provide controlled access through getters

#### GPA Class

Manages multiple courses and performs GPA calculations.

**Functions**
- Take user input
- Validate data
- Calculate total grade points
- Calculate GPA
- Display results

## How It Works

1. User enters the total number of courses.
2. Grade and credit hours are entered for each course.
3. Each course is stored as a `Course` object.
4. The GPA class processes all course objects.
5. Total grade points and GPA are calculated.
6. Results are displayed in a formatted report.

## Supported Grades

| Grade | Grade Points |
|--------|------------|
| A | 4.00 |
| A- | 3.67 |
| B+ | 3.33 |
| B | 3.00 |
| B- | 2.67 |
| C+ | 2.33 |
| C | 2.00 |
| C- | 1.67 |
| D+ | 1.33 |
| D | 1.00 |
| F | 0.00 |

## Sample Output

```text
------ GPA Calculator ------

Enter Total Number of Courses: 3

--- Course 1 ---
Enter Grade: A
Enter Credit Hours: 3

--- Course 2 ---
Enter Grade: B+
Enter Credit Hours: 4

--- Course 3 ---
Enter Grade: A-
Enter Credit Hours: 3

--------- Result ---------

Grade Points: 37.99
Total Credits: 10

GPA: 3.80
```

## Technologies Used

- C++
- Object-Oriented Programming (OOP)
- Classes & Objects
- Constructors
- Arrays of Objects
- Input Validation
- iomanip Library
- Header & Source File Organization

## Learning Outcomes

This project helped strengthen understanding of:

- Designing classes and objects
- Encapsulation and data hiding
- Object composition ("has-a" relationship)
- Organizing projects into multiple files
- GPA calculation logic
- Writing maintainable and reusable code

## Future Improvements

- CGPA Calculator
- GPA History Storage using File Handling
- Semester Management
- Dynamic Storage using Vectors
- Menu-Driven Interface
- Grade Report Generation

## Author

**Hammad Karim**
BS Software Engineering Student
