MLX_DIR		=	../../mlx-macos
MLX_MAKE	=	make -C $(MLX_DIR)
MLX_FLAGS	=	-lmlx
MLX_OPTIONS	=	-framework OpenGL -framework Appkit

SRC_DIR		=	.
SRC		=	$(SRC_DIR)/main.c

all:	$(MLX)
	clang -L$(MLX_DIR) $(MLX_FLAGS)	$(MLX_OPTIONS) $(SRC)
	./a.out

$(MLX):
	@$(MLX_MAKE)


