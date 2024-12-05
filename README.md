# 📔 **Libft** 
![Libft Image](https://github.com/user-attachments/assets/85fc28ca-d12f-4977-b64e-0d9d07b3ff03)

## 📚 Overview
**Libft** is a custom implementation of the C standard library functions, designed as the foundational project at **42 School**. It includes not only the essential functions but also additional utilities for future development needs. Over time, I expanded this library by integrating my own implementations of **ft_printf** and **get_next_line**, creating a versatile and reusable library for future projects.

---

## 🛠 Features

### **Core Library Functions**
Re-implementation of common C library functions such as:
- Memory management: `ft_memset`, `ft_memcpy`, `ft_calloc`, etc.
- String manipulation: `ft_strlen`, `ft_strncmp`, `ft_strdup`, etc.
- Character checks and conversions: `ft_isalpha`, `ft_tolower`, etc.
- Linked list utilities: `ft_lstnew`, `ft_lstadd_back`, etc.

### **ft_printf Integration**
A fully functional recreation of the `printf` function that supports:
- Format specifiers: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, and `%%`.
- Seamless integration for formatted output needs in future projects.

### **get_next_line Integration**
A utility function that reads a file or standard input line-by-line:
- Efficient buffer-based file reading.
- Handles multiple file descriptors simultaneously.
- Essential for reading data streams and files in future projects.

---

## 🔧 How to Use

### Integrating Libft into Your Project

After compiling the library, you can link it to your project with the following:

```bash
gcc -o my_project main.c -L. -lft
```

## 📦 Installation

### Clone the repository:
```bash
git clone https://github.com/m3irel3s/42_Libft
```

### Navigate to the cloned directory:

```bash
cd 42_Libft
```

### Build the library:
```
make
```

## ⚙️ Makefile Commands

Here’s an overview of the available Makefile commands:

| Command        | Description                              |
|----------------|------------------------------------------|
| `make`         | Compiles the library into `libft.a`.     |
| `make clean`   | Removes object files and executables.    |
| `make fclean`  | Removes `libft.a` and object files.      |
| `make re`      | Recompiles the entire library.           |

---

## 💡 Inspiration

This project is inspired by the need to create reusable and efficient utilities that can be integrated into many C-based programs. It aims to simplify the development of future projects by providing foundational tools for string manipulation, memory management, file reading, and formatted output.
