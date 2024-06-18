# 🦊 What is ft_printf?

Because ft_putnbr() and ft_putstr() aren't enough!

The aim of this project is to recreate some of the most useful functionalities of printf(). It teaches you about **variadic functions**, but also expands your [`Libft`](https://github.com/flmarsou/1-Libft).

# ⚒️ Compilation

1. Run `make` to compile the library.
Run `make re` to recompile everything.

2. You can include it to any other library in your projects.

# 🧼 Cleaning

1. Run `make clean` to remove every object files.
2. Run `make fclean` to remove every object files, including the library.

---

# ✨ Summary

|     |     |
| --- | --- |
| Program name | libftprintf.a |
| Turn in files | Makefile, \*.h, \*/\*.h, \*.c, \*/\*.c |
| External functs. | malloc, free, write, va_start, va_arg, va_copy, va_end |
| Libft authorized | Yes |
| Description | Write a function called ft_printf(), that will mimic the original printf()

# 📑 List of Files

- [x] [`ft_printf`](https://github.com/flmarsou/2.1-printf/blob/main/src/ft_printf.c) - Main file containing the scanner and parser.
- [x] [`ft_putchr`](https://github.com/flmarsou/2.1-printf/blob/main/src/ft_putchr.c) - **%c** prints a character.
- [x] [`ft_putstr`](https://github.com/flmarsou/2.1-printf/blob/main/src/ft_putstr.c) - **%s** prints a string.
- [x] [`ft_putnbr`](https://github.com/flmarsou/2.1-printf/blob/main/src/ft_putnbr.c) - **%d** & **%i** prints an integer.
- [x] [`ft_putuni`](https://github.com/flmarsou/2.1-printf/blob/main/src/ft_putuni.c) - **%u** prints an unsigned integer.
- [x] [`ft_puthex`](https://github.com/flmarsou/2.1-printf/blob/main/src/ft_puthex.c) - **%x** & **%X** prints an integer in base 16.
- [x] [`ft_putptr`](https://github.com/flmarsou/2.1-printf/blob/main/src/ft_putptr.c) - **%p** prints an address to a pointer.
