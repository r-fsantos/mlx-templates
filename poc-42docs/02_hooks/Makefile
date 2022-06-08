MLX_DIR		=	../../mlx-macos
MLX_MAKE	=	make -C $(MLX_DIR)
MLX_CLEAN	=	make clean -C $(MLX_DIR)
MLX_FLAGS	=	-lmlx
MLX_OPTIONS	=	-framework OpenGL -framework Appkit

SRC_DIR		=	.
SRC		=	$(SRC_DIR)/main.c


mlx:		
	#	$(MLX_MAKE) 	

all:		mlx	        
		clang -L$(MLX_DIR) $(MLX_FLAGS)	$(MLX_OPTIONS) $(SRC)
#		clang -fsanitize=address -g3 -L$(MLX_DIR) $(MLX_FLAGS)	$(MLX_OPTIONS) $(SRC)

run:		all
		./a.out
clean:
		$(MLX_CLEAN)
		rm -rf a.out
		rm -rf $(MLX_DIR)/libmlx.a

re:		clean all

