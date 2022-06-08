#include <mlx.h>

/**
 * mlx_init() -> void *
 * 		MLX Instance (Interface/Connection between grap sys and program)
 * max_new_window() -> void *
 * 		Window. Receives the reference to MLX Instance, and bounds it 
 * 		window width and heigth.
 * mlx_loop() -> void
 * 		Renderizes, in an infinit loop, the mlx
 * 
 * 
 */

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	void	*mlx_2;
	void	*mlx_win_2;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 960, 720, "42Docs. Hello, World!");
	mlx_2 = mlx_init();
	mlx_win_2 = mlx_new_window(mlx, 960, 720, "testing a second screen");
	mlx_loop(mlx);
	return (0);
}

