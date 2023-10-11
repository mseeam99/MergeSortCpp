# Merge Sort in Pure OOP Fusion

This C++ program demonstrates the Merge Sort algorithm using a pure Object-Oriented Programming (OOP) fusion approach. Merge Sort is a popular sorting algorithm known for its efficiency and stability. In this implementation, we have utilized the power of OOP principles to achieve a modular and clean code structure.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [File Structure](#file-structure)
- [How to Compile and Run](#how-to-compile-and-run)

## Introduction

Merge Sort is a divide-and-conquer sorting algorithm that recursively breaks down an array into smaller sub-arrays until each sub-array contains a single element. Then, it merges these sub-arrays back together in a sorted manner. In this project, we've harnessed the principles of OOP to create a robust and organized implementation of Merge Sort.

## Usage

This program can be used as a standalone application for sorting integer arrays. To use it in your own projects or with different data types, you can adapt the provided `MergeSort` class. Here's how you can utilize it:

1. Include the `MergeSort.h` header in your C++ project.

2. Create an instance of the `MergeSort` class.

3. Use/call the `divide` method, which will call `conquer` method to perform divide and conquer strategy to sort the vector.

You can modify the program as needed to work with your specific requirements.

## File Structure

The project is organized as follows:

- `main.cpp`: Contains a sample implementation that demonstrates the use of the `MergeSort` class for sorting an array.
- `MergeSort.h`: Header file for the `MergeSort` class, defining its public interface and methods.
- `MergeSort.cpp`: Implementation of the `MergeSort` class, containing the sorting logic and private helper functions.
- `README.md`: This documentation file.

## How to Compile and Run

To compile and run the program, follow these steps:

1. Open your terminal or command prompt.

2. Navigate to the directory where your source code files are located.

3. Run the following command to compile the program and generate an executable named `myexe`:

```bash
g++ -o myexe main.cpp MergeSort.cpp && ./myexe
