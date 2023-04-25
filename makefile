CC		= gcc
CFLAGS	= -Wall -O2 -g
LDFLAGS	= -lglfw -lm

BINDIR	= bin/
INCDIR	= inc/
SRCDIR	= src/
OBJDIR	= obj/

#mac Intel
#LIB et HEAD PATHS
HEADPATH = -I/usr/local/Cellar/glfw/3.3.8/include
LIBPATH = -L/usr/local/Cellar/glfw/3.3.8/lib -framework GLUT -framework OpenGL

# Fichiers TD 04
GLOB_OBJ_TD= $(OBJDIR)3D_tools.o

# Fichiers exercice 01
OBJ_PROJET= $(GLOB_OBJ_TD) $(OBJDIR)draw_scene.o $(OBJDIR)main.o $(OBJDIR)corridor.o
EXEC_PROJET= projet.out

# Regles compilation TD 04

all : projet

projet : $(OBJ_PROJET)
	$(CC) $(CFLAGS) $(OBJ_PROJET) -o $(BINDIR)$(EXEC_PROJET) $(LIBPATH) $(LDFLAGS)

clean :
	rm -rf *~
	rm -rf $(SRCDIR)*/*~
	rm -rf $(OBJDIR)
	rm -rf $(BINDIR)*

$(OBJDIR)%.o: $(SRCDIR)%.c $(INCDIR)*.h
	mkdir -p `dirname $@`
	$(CC) -o $@ -I $(INCDIR) -c $< $(CFLAGS) $(HEADPATH)
