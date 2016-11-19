CC = gcc
EXEC = debug.exe
MAIN = test_proto.c
SRC_DIR = srcs/
INC_DIR = includes/
INC_DIR_TEST = inc_test/
SRC_LIB_TEST = src_lib_test/libido.c
FLAGS = -Wall -Wextra -Werror

MAIN_TEST = main_test/
SRC_TEST = src_test/
ALLTEST = 	test_ft_atoi\
			test_ft_bzero\
			test_ft_isalnum\
			test_ft_isalpha\
			test_ft_isascii\
			test_ft_isdigit\
			test_ft_isprint\
			test_ft_lstadd\
			test_ft_lstdel\
			test_ft_lstiter\
			test_ft_memset\
			test_ft_memcpy\
			test_ft_memccpy\
			test_ft_memmove\
			test_ft_memchr\
			test_ft_memcmp\
			test_ft_strlen\
			test_ft_strdup\
			test_ft_strcpy\
			test_ft_strncpy\
			test_ft_strcat\
			test_ft_strncat\
			test_ft_strlcat\
			#test_ft_strsplit\

executer: compiler
	@echo "/---------------------------------------------\\"
	@echo "Execution : "
	@echo "\---------------------------------------------/"
	./$(EXEC)

compiler: $(MAIN)
	@echo "/---------------------------------------------\\"
	@echo "Compilation : "
	@echo "\---------------------------------------------/"
	$(CC) $(MAIN) -o $(EXEC) $(SRC_DIR)*.c -I$(INC_DIR)

check_file:
	@echo "/---------------------------------------------\\"
	@echo "- CHECK FILE -"
	@echo "\---------------------------------------------/"
	@echo "/---------------------------------------------\\"
	@echo -e -n "|\t\t"
	@echo "- PART ONE -"
	@echo "\---------------------------------------------/"
	@[ -f $(SRC_DIR)ft_memset.c ] && echo -e "ft_memset\tOK" || echo -e "ft_memset\tFALSE"
	@[ -f $(SRC_DIR)ft_bzero.c ] && echo -e "ft_bzero\tOK" || echo -e "ft_bzero\tFALSE"
	@[ -f $(SRC_DIR)ft_memcpy.c ] && echo -e "ft_memcpy\tOK" || echo -e "ft_memcpy\tFALSE"
	@[ -f $(SRC_DIR)ft_memccpy.c ] && echo -e "ft_memccpy\tOK" || echo -e "ft_memccpy\tFALSE"
	@[ -f $(SRC_DIR)ft_memmove.c ] && echo -e "ft_memmove\tOK" || echo -e "ft_memmove\tFALSE"
	@[ -f $(SRC_DIR)ft_memchr.c ] && echo -e "ft_memchr\tOK" || echo -e "ft_memchr\tFALSE"
	@[ -f $(SRC_DIR)ft_memcmp.c ] && echo -e "ft_memcmp\tOK" || echo -e "ft_memcmp\tFALSE"
	@[ -f $(SRC_DIR)ft_strlen.c ] && echo -e "ft_strlen\tOK" || echo -e "ft_strlen\tFALSE"
	@[ -f $(SRC_DIR)ft_strdup.c ] && echo -e "ft_strdup\tOK" || echo -e "ft_strdup\tFALSE"
	@[ -f $(SRC_DIR)ft_strcpy.c ] && echo -e "ft_strcpy\tOK" || echo -e "ft_strcpy\tFALSE"
	@[ -f $(SRC_DIR)ft_strncpy.c ] && echo -e "ft_strncpy\tOK" || echo -e "ft_strncpy\tFALSE"
	@[ -f $(SRC_DIR)ft_strcat.c ] && echo -e "ft_strcat\tOK" || echo -e "ft_strcat\tFALSE"
	@[ -f $(SRC_DIR)ft_strncat.c ] && echo -e "ft_strncat\tOK" || echo -e "ft_strncat\tFALSE"
	@[ -f $(SRC_DIR)ft_strlcat.c ] && echo -e "ft_strlcat\tOK" || echo -e "ft_strlcat\tFALSE"
	@[ -f $(SRC_DIR)ft_strchr.c ] && echo -e "ft_strchr\tOK" || echo -e "ft_strchr\tFALSE"
	@[ -f $(SRC_DIR)ft_strrchr.c ] && echo -e "ft_strrchr\tOK" || echo -e "ft_strrchr\tFALSE"
	@[ -f $(SRC_DIR)ft_strstr.c ] && echo -e "ft_strstr\tOK" || echo -e "ft_strstr\tFALSE"
	@[ -f $(SRC_DIR)ft_strnstr.c ] && echo -e "ft_strnstr\tOK" || echo -e "ft_strnstr\tFALSE"
	@[ -f $(SRC_DIR)ft_strcmp.c ] && echo -e "ft_strcmp\tOK" || echo -e "ft_strcmp\tFALSE"
	@[ -f $(SRC_DIR)ft_strncmp.c ] && echo -e "ft_strncmp\tOK" || echo -e "ft_strncmp\tFALSE"
	@[ -f $(SRC_DIR)ft_atoi.c ] && echo -e "ft_atoi   \tOK" || echo -e "ft_atoi   \tFALSE"
	@[ -f $(SRC_DIR)ft_isalpha.c ] && echo -e "ft_isalpha\tOK" || echo -e "ft_isalpha\tFALSE"
	@[ -f $(SRC_DIR)ft_isdigit.c ] && echo -e "ft_isdigit\tOK" || echo -e "ft_isdigit\tFALSE"
	@[ -f $(SRC_DIR)ft_isalnum.c ] && echo -e "ft_isalnum\tOK" || echo -e "ft_isalnum\tFALSE"
	@[ -f $(SRC_DIR)ft_isascii.c ] && echo -e "ft_isascii\tOK" || echo -e "ft_isascii\tFALSE"
	@[ -f $(SRC_DIR)ft_isprint.c ] && echo -e "ft_isprint\tOK" || echo -e "ft_isprint\tFALSE"
	@[ -f $(SRC_DIR)ft_toupper.c ] && echo -e "ft_toupper\tOK" || echo -e "ft_toupper\tFALSE"
	@[ -f $(SRC_DIR)ft_tolower.c ] && echo -e "ft_tolower\tOK" || echo -e "ft_tolower\tFALSE"
	@echo "/---------------------------------------------\"
	@echo "- PART TWO -"
	@echo "\---------------------------------------------/"
	@[ -f $(SRC_DIR)ft_memalloc.c ] && echo -e "ft_memalloc\t : OK" || echo "ft_memalloc\t : FALSE"
	@[ -f $(SRC_DIR)ft_memdel.c ] && echo -e "ft_memdel\t : OK" || echo "ft_memdel\t : FALSE"
	@[ -f $(SRC_DIR)ft_strnew.c ] && echo -e "ft_strnew\t : OK" || echo "ft_strnew\t : FALSE"
	@[ -f $(SRC_DIR)ft_strdel.c ] && echo -e "ft_strdel\t : OK" || echo "ft_strdel\t : FALSE"
	@[ -f $(SRC_DIR)ft_strclr.c ] && echo -e "ft_strclr\t : OK" || echo "ft_strclr\t : FALSE"
	@[ -f $(SRC_DIR)ft_striter.c ] && echo -e "ft_striter\t : OK" || echo "ft_striter\t : FALSE"
	@[ -f $(SRC_DIR)ft_striteri.c ] && echo -e "ft_striteri\t : OK" || echo "ft_striteri\t : FALSE"
	@[ -f $(SRC_DIR)ft_strmap.c ] && echo -e "ft_strmap\t : OK" || echo "ft_strmap\t : FALSE"
	@[ -f $(SRC_DIR)ft_strmapi.c ] && echo -e "ft_strmapi\t : OK" || echo "ft_strmapi\t : FALSE"
	@[ -f $(SRC_DIR)ft_strequ.c ] && echo -e "ft_strequ\t : OK" || echo "ft_strequ\t : FALSE"
	@[ -f $(SRC_DIR)ft_strnequ.c ] && echo -e "ft_strnequ\t : OK" || echo "ft_strnequ\t : FALSE"
	@[ -f $(SRC_DIR)ft_strsub.c ] && echo -e "ft_strsub\t : OK" || echo "ft_strsub\t : FALSE"
	@[ -f $(SRC_DIR)ft_strjoin.c ] && echo -e "ft_strjoin\t : OK" || echo "ft_strjoin\t : FALSE"
	@[ -f $(SRC_DIR)ft_strtrim.c ] && echo -e "ft_strtrim\t : OK" || echo "ft_strtrim\t : FALSE"
	@[ -f $(SRC_DIR)ft_strsplit.c ] && echo -e "ft_strsplit\t : OK" || echo "ft_strsplit\t : FALSE"
	@[ -f $(SRC_DIR)ft_itoa.c ] && echo -e "ft_itoa\t : OK" || echo "ft_itoa\t : FALSE"
	@[ -f $(SRC_DIR)ft_putchar.c ] && echo -e "ft_putchar\t : OK" || echo "ft_putchar\t : FALSE"
	@[ -f $(SRC_DIR)ft_putstr.c ] && echo -e "ft_putstr\t : OK" || echo "ft_putstr\t : FALSE"
	@[ -f $(SRC_DIR)ft_putendl.c ] && echo -e "ft_putendl\t : OK" || echo "ft_putendl\t : FALSE"
	@[ -f $(SRC_DIR)ft_putnbr.c ] && echo -e "ft_putnbr\t : OK" || echo "ft_putnbr\t : FALSE"
	@[ -f $(SRC_DIR)ft_putchar_fd.c ] && echo -e "ft_putchar_fd\t : OK" || echo "ft_putchar_fd\t : FALSE"
	@[ -f $(SRC_DIR)ft_putstr_fd.c ] && echo -e "ft_putstr_fd\t : OK" || echo "ft_putstr_fd\t : FALSE"
	@[ -f $(SRC_DIR)ft_putendl_fd.c ] && echo -e "ft_putendl_fd\t : OK" || echo "ft_putendl_fd\t : FALSE"
	@[ -f $(SRC_DIR)ft_putnbr_fd.c ] && echo -e "ft_putnbr_fd\t : OK" || echo "ft_putnbr_fd\t : FALSE"
	@[ -f $(SRC_DIR)ft_putstr_fd.c ] && echo -e "ft_putstr_fd\t : OK" || echo "ft_putstr_fd\t : FALSE"
	@[ -f $(SRC_DIR)ft_putstr_fd.c ] && echo -e "ft_putstr_fd\t : OK" || echo "ft_putstr_fd\t : FALSE"
	@[ -f $(SRC_DIR)ft_putstr_fd.c ] && echo -e "ft_putstr_fd\t : OK" || echo "ft_putstr_fd\t : FALSE"
	@[ -f $(SRC_DIR)ft_putstr_fd.c ] && echo -e "ft_putstr_fd\t : OK" || echo "ft_putstr_fd\t : FALSE"
	
	
	
	
	
	@echo "/---------------------------------------------\\"
	@echo "- PART BONUS -"
	@echo "\---------------------------------------------/"
	@[ -f $(SRC_DIR)ft_lstnew.c ] && echo -e "ft_lstnew\t : OK" || echo "ft_lstnew\t : FALSE"
	@[ -f $(SRC_DIR)ft_lstdelone.c ] && echo -e "ft_lstdelone\t : OK" || echo "ft_lstdelone\t : FALSE"
	@[ -f $(SRC_DIR)ft_lstdel.c ] && echo -e "ft_lstdel\t : OK" || echo "ft_lstdel\t : FALSE"
	@[ -f $(SRC_DIR)ft_lstadd.c ] && echo -e "ft_lstadd\t : OK" || echo "ft_lstadd\t : FALSE"
	@[ -f $(SRC_DIR)ft_lstiter.c ] && echo -e "ft_lstiter\t : OK" || echo "ft_lstiter\t : FALSE"
	@[ -f $(SRC_DIR)ft_lstmap.c ] && echo -e "ft_lstmap\t : OK" || echo "ft_lstmap\t : FALSE"
	@echo "/---------------------------------------------\\"
	@echo "- END -"
	@echo "\---------------------------------------------/"
	
test_all: $(ALLTEST)

test_ft_memset:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_memset_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_bzero:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_bzero_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_memcpy:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_memcpy_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_memccpy:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_memccpy_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_memmove:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_memmove_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_memchr:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_memchr_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_memcmp:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_memcmp_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_strlen:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_strlen_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_strdup:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_strdup_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_strcpy:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_strcpy_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_strsplit:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_strsplit_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_strncpy:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_strncpy_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_strcat:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_strcat_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_strncat:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_strncat_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_strlcat:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_strlcat_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_atoi:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_atoi_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_isalnum:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_isalnum_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_isalpha:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_isalpha_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_isascii:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_isascii_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_isdigit:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_isdigit_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_isprint:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_isprint_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_itoa:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_itoa_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_lstadd:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_lstadd_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_lstdel:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_lstdel_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out

test_ft_lstiter:
	@$(CC) -o tmp.out $(MAIN_TEST)ft_lstiter_main.c $(SRC_LIB_TEST) $(SRC_DIR)*.c -I$(INC_DIR) -I$(INC_DIR_TEST) $(FLAGS)
	@./tmp.out
	@rm tmp.out