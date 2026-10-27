# Embedded Command History Using Stack in C

## 1. Overview

The Embedded Command History System is a C programming project that uses a stack to store and manage commands entered by the user. It demonstrates how stack operations can be used to maintain command history in embedded-system applications.

The system follows the **LIFO (Last In, First Out)** principle, meaning the last command added is the first command removed.

## 2. Objectives

- To understand the implementation of a stack in C.
- To perform push, pop, and peek operations.
- To store and display previously entered commands.
- To search and clear commands from the history.
- To understand the use of stacks in embedded systems.

## 3. Theory

A stack is a linear data structure that follows the **LIFO (Last In, First Out)** principle. In this project, an array is used to store commands, and a variable called `top` keeps track of the latest command.

Initially, `top = -1`, which indicates that the stack is empty. When a new command is added, `top` is incremented. When the latest command is removed, `top` is decremented.

Commands such as `LED_ON`, `LED_OFF`, `MOTOR_START`, and `MOTOR_STOP` can be stored in the stack. This project simulates how command history can be managed in an embedded system.

## 4. Key Points

- **Data Structure:** Stack
- **Programming Language:** C
- **Storage Method:** Array
- **Principle:** LIFO (Last In, First Out)
- **Push:** Adds a command to the stack.
- **Pop:** Removes the latest command.
- **Peek:** Displays the latest command without removing it.
- **Display:** Shows all commands from newest to oldest.
- **Search:** Checks whether a command exists in the history.
- **Clear:** Removes all commands from the stack.
- **Overflow:** Occurs when trying to add a command to a full stack.
- **Underflow:** Occurs when trying to remove a command from an empty stack.

## 5. Algorithm

1. Start the program.
2. Initialize the stack with `top = -1`.
3. Display the menu of operations.
4. Accept the user's choice.
5. Perform the selected operation: push, pop, peek, display, search, or clear.
6. Check for stack overflow and underflow where necessary.
7. Repeat the process until the user selects Exit.
8. Stop the program.

## 6. How to Compile and Run

gcc command_history.c -o command_history.exe
command_history.exe

## 7. Sample Output

```text
===== EMBEDDED COMMAND HISTORY =====
1. Push Command
2. Pop Command
3. Peek Latest Command
4. Display History
5. Search Command
6. Clear History
0. Exit

Enter your choice: 1
Enter command: LED_ON
Command added successfully!

Enter your choice: 1
Enter command: MOTOR_START
Command added successfully!

Enter your choice: 1
Enter command: LED_OFF
Command added successfully!

Enter your choice: 4

--- COMMAND HISTORY ---
3. LED_OFF
2. MOTOR_START
1. LED_ON

Enter your choice: 3

Latest command: LED_OFF

Enter your choice: 2
Removed command: LED_OFF

Enter your choice: 0
Exiting program...
```

## 8. Applications

- Embedded-system command management.
- Microcontroller command-line interfaces.
- Command history in debugging tools.
- Basic device-control simulations.
- Learning undo and history mechanisms using stacks.

## 9. Advantages

- Simple and easy to implement.
- Helps understand stack operations.
- Provides organized command management.
- Handles full-stack and empty-stack conditions.
- Can be extended for microcontroller-based applications.

## 10. Limitations

- Stores only a fixed number of commands.
- Command history is lost when the program terminates.
- Does not control actual hardware in its current form.
- Removing a command does not automatically reverse a physical device action.

## 11. Conclusion

The Embedded Command History System demonstrates the practical application of a stack in C programming. Using push, pop, peek, display, search, and clear operations, the project explains how commands can be stored and managed according to the LIFO principle. It provides a foundation for developing more advanced embedded-system command-management applications.
