# **Libft**

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

## 🚀 Why This Library?
Combining **Libft**, **ft_printf**, and **get_next_line** provides a powerful foundation for developing C projects. It simplifies repetitive tasks like memory management, formatted output, and file handling, enabling focus on higher-level logic.

By merging these tools, this library becomes a reusable and reliable resource for future work at **42 School** and beyond.

---

## 📂 File Structure
