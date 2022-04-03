# comments

#Target : dependency
#<TAB>Command

PROJECT_NAME = output.exe
SRC = calc_main.c\
src\calc_comp.c\
src\calc_stat.c

INC = inc

#$(PROJECT_NAME): $(SRC)
build:
	gcc -I $(INC) $(SRC) -o output.exe
	
run: $(PROJECT_NAME)
	$(PROJECT_NAME)
	
# clean:
# 	del /q *.exe