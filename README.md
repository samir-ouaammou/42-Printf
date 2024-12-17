
# 📝 **ft_printf - 1337 School Project**

Welcome to my **ft_printf** repository! 🚀  
The **ft_printf** project at **1337 School** was an essential exercise in understanding **variable argument lists** and **format specifiers** in C. The goal was to implement a simplified version of the `printf` function that supports various format specifiers like `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, and `%%`.

---

## 📊 **Project Overview**

The **ft_printf** project involves implementing a function that mimics the behavior of the standard `printf` function in C. The challenge is to handle variable arguments and format them according to different specifiers, ensuring the correct output for each type.

---

## 🔧 **Functions Implemented**

- **ft_printf()**: The main function that handles formatting and variable arguments.
- **ft_putchar()**: A helper function to print a character.
- **ft_putstr()**: A helper function to print a string.
- **ft_putnbr()**: A helper function to print an integer.
- **ft_putnbr_base()**: A helper function to print an integer in a specified base (for hexadecimals).
- **ft_putpointer()**: A helper function to print a pointer address.

---

## 📋 **Project Structure**

The project is structured as follows:

```
ft_printf/
│
├── src/              # Source files for the project
│   ├── ft_printf.c   # Main implementation of ft_printf()
│   ├── ft_utils.c    # Utility functions
│
├── include/          # Header files
│   └── ft_printf.h   # Header file with function prototypes
│
├── Makefile          # Makefile to compile the project
└── README.md         # Project documentation
```

---

## 📂 **Usage**

To use the **ft_printf** function, include the header file `ft_printf.h` and compile the source files along with your main program. Here's an example of how to use the function:

```c
#include "ft_printf.h"
#include <stdio.h>

int main() {
    int num = 42;
    ft_printf("Hello, World! %d\n", num);
    return 0;
}
```

---

## 🛠️ **Installation**

1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/samir-ouaammou/1337-Printf
   ```

2. Navigate to the project directory:
   ```bash
   cd 1337-Printf
   ```

3. Compile the source files using `make`:
   ```bash
   make
   ```

4. Clean up compiled files:
   ```bash
   make clean
   ```

5. To remove all object files and the executable:
   ```bash
   make fclean
   ```

6. To recompile the project from scratch:
   ```bash
   make re
   ```

---

## 🎯 **Challenges Overcome**

During this project, I faced and overcame challenges such as:
- **Handling variable arguments**: I had to understand how to use `va_list`, `va_start`, and `va_arg` to process variable arguments.
- **Format specifiers**: Implementing support for different format specifiers and ensuring the correct output for each.
- **Memory management**: Managing memory effectively while formatting and printing different types of data.

---

## 🏆 **Key Achievements**

- Implemented a simplified version of the `printf` function.
- Mastered the use of **variable arguments** and **format specifiers** in C.
- Gained experience in **string manipulation** and **integer conversion**.
- Successfully handled edge cases such as invalid format specifiers and mixed data types.

---

## 🚀 **Next Steps**

With **ft_printf** completed, I am now focused on:
- Implementing more advanced projects like **libft**, **get_next_line**, and **Born2beroot**.
- Further refining my understanding of **system-level programming** and **dynamic memory management**.

---

## 🌟 **Reflection**

The **ft_printf** project was a challenging and rewarding experience that allowed me to improve my understanding of **variable arguments** and **format specifiers** in C. It also taught me how to handle various data types and format them efficiently. I am excited to apply these skills to future projects.

---

Thank you for checking out my **ft_printf** project! 🚀 Stay tuned for more updates as I continue to enhance my skills and tackle new challenges.
