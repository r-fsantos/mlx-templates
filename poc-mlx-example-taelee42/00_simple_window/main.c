#include "../../mlx-macos/mlx.h"

int	main(void)
{
	void	*mlx;
	void	*win;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 500, 500, "mlx_poc");
	mlx_loop(mlx);
	return (0);
}

