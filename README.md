# Libft

Small, reusable C library built for 42. It re-implements key parts of libc and adds utilities (including a linked-list module) for later projects.

## Requirements
- **C compiler:** `cc`
- **Flags:** `-Wall -Wextra -Werror`
- **Build:** `make` (Norminette-compliant)

## Build
```bash
make         # build libft.a
make bonus   # include linked list (bonus)
make clean   # remove .o
make fclean  # remove .o and libft.a
make re      # full rebuild
```

## Usage

```bash
make
```
```bash
make bonus
```

## API

### Libc (re-implemented)
**Memory:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`  
**Strings:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`  
**Char/ctype:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`  
**Conversion:** `ft_atoi`

### Bonus (singly linked list)
```c
typedef struct s_list { void *content; struct s_list *next; } t_list;
```
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`,  
`ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Structure
```
libft/
├─ Makefile
├─ include/libft.h
├─ mandatory/ft_*.c
└─ bonus/ft_lst*.c
```

## Testing
- Build: `make`
- Link into small drivers or use community suites (e.g., libft-unit-test, war-machine, tripouille).

## Notes
- No globals; careful handling of edge cases and allocation failures.
- Behaviors match the standard libc unless the subject specifies otherwise.