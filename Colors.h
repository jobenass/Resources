#ifndef PRINT_H
# define PRINT_H

# include <stdio.h>
# include <errno.h>

// Reset
# define Color_Off "\033[0m"

// Regular Colors
# define BBLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"

// Bold
# define BBBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"
# define BWHITE "\033[1;37m"

// Underline
# define UBBLACK "\033[4;30m"
# define URED "\033[4;31m"
# define UGREEN "\033[4;32m"
# define UYELLOW "\033[4;33m"
# define UBLUE "\033[4;34m"
# define UPURPLE "\033[4;35m"
# define UCYAN "\033[4;36m"
# define UWHITE "\033[4;37m"

// Background
# define On_BBLACK "\033[40m"
# define On_RED "\033[41m"
# define On_GREEN "\033[42m"
# define On_YELLOW "\033[43m"
# define On_BLUE "\033[44m"
# define On_PURPLE "\033[45m"
# define On_CYAN "\033[46m"
# define On_WHITE "\033[47m"

// High Intensty
# define IBBLACK "\033[0;90m"
# define IRED "\033[0;91m"
# define IGREEN "\033[0;92m"
# define IYELLOW "\033[0;93m"
# define IBLUE "\033[0;94m"
# define IPURPLE "\033[0;95m"
# define ICYAN "\033[0;96m"
# define IWHITE "\033[0;97m"

// Bold High Intensty
# define BIBBLACK "\033[1;90m"
# define BIRED "\033[1;91m"
# define BIGREEN "\033[1;92m"
# define BIYELLOW "\033[1;93m"
# define BIBLUE "\033[1;94m"
# define BIPURPLE "\033[1;95m"
# define BICYAN "\033[1;96m"
# define BIWHITE "\033[1;97m"

// High Intensty backgrounds
# define On_IBBLACK "\033[0;100m"
# define On_IRED "\033[0;101m"
# define On_IGREEN "\033[0;102m"
# define On_IYELLOW "\033[0;103m"
# define On_IBLUE "\033[0;104m"
# define On_IPURPLE "\033[10;95m"
# define On_ICYAN "\033[0;106m"
# define On_IWHITE "\033[0;107m"

#endif
