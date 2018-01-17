# main GameContainer.class Display.class HUD.class MainMenu.class Road.class \
# PhysicalObject.class SpawnPoints.class Player.class Obstacle.class Enemy.class \
# PlayerBullet.class Pickup.class Vector2.class


NAME = rush

CC := clang++
CFLAGS	+= -Wall -Wextra -Werror

SFILES = AUnit.class.cpp			HUD.class.cpp			Pickup.class.cpp		SpawnPoints.class.cpp \
Bullet.class.cpp		MainMenu.class.cpp		Player.class.cpp		Vector2.class.cpp \
Display.class.cpp		Node.class.cpp			main.cpp \
Enemy.class.cpp			Obstacle.class.cpp		Position.class.cpp \
GameContainer.class.cpp		PhysicalObject.class.cpp	Road.class.cpp

ODIR = obj

SDIR = src

SRC = $(addprefix $(SDIR)/,$(SFILES))

OBJ = $(addprefix $(ODIR)/,$(SFILES:.cpp=.o))

INC = includes/

$(ODIR)/%.o: $(SDIR)/%.cpp
	@$(CC) $(CFLAGS) -I $(INC) -c $^ -o $@
	@/bin/echo -n "===="

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n\033[32m[object files created ( ͡° ͜ʖ ͡°)]\033[0m"
	@$(CC) $(CFLAGS) -I $(INC) -o $@ $(OBJ) -lncurses
	@echo "\033[32m[executable [$(NAME)] created ( ͡° ͜ʖ ͡°)]\033[0m"

$(OBJ): | $(ODIR)

$(ODIR):
	@mkdir $(ODIR)

clean:
	@rm -rf $(ODIR)
	@echo "\033[31m[object files deleted (╯°□°）╯︵ ┻━┻ ]\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[31m[executable [$(NAME)] deleted ᕙ(⇀‸↼‶)ᕗ ]\033[0m"

re: fclean all
