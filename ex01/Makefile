

NAME = isodd_test
MAKEFLAGS = --no-print-directory
BUILDDIR = objs
VPATH = src src/tests

# headers
INCLUDES = -I src/tests -I headers
LDFLAGS = -pthread -lgtest -lgtest_main

# Lists sources.
MAIN = test_main.cpp
# SRC = <othersources>.cpp

# Names sources
SOURCES = $(MAIN)
# SOURCES += $(SRC)

# Names objects
OBJS = $(addprefix $(BUILDDIR)/, $(SOURCES:%.cpp=%.o))

# Compiler
CC = g++
CF = -Wall -Wextra -Werror -std=c++17
GDB = -ggdb
VAL = valgrind --trace-children=no --leak-check=full --track-origins=yes ./$(NAME)

$(NAME): $(BUILDDIR) $(OBJS)
	@printf "Compiling $(NAME)\n"
	@$(CC) $(CF) $(OBJS) $(INCLUDES) $(LDFLAGS) -o $(NAME)
	@printf "Done!\n"

$(BUILDDIR):
	@mkdir -p $(BUILDDIR)

$(BUILDDIR)/%.o: %.cpp
	@$(CC) $(CF) $(GDB) $(INCLUDES) -c $< -o $@

all: $(NAME)

cls:
	@clear

clean:
	@rm -rf $(BUILDDIR)
	@rm -f core
	@rm -f vgcore*

fclean: clean
	@rm -f $(NAME)

re: fclean all

run: all
	$(VAL)

git: fclean
	git add -A
	git commit -m "make git"
	git push

PHONY:	all clean fclean re run docker docker_clean
