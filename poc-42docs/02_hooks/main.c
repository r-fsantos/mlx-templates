// #include "../../mlx-macos/mlx.h"
#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_mlx
{
	void	*ptr;
	void	*win;
}	t_mlx;

int	key_hook(int keycode, t_mlx *mlx)
{
	return (printf("keycode: %d\n", keycode));
}

int	main(void)
{
	t_mlx	*mlx;

	mlx = malloc(sizeof(t_mlx));
	mlx->ptr = mlx_init();
	mlx->win = mlx_new_window(mlx->ptr, 640, 480, "Hello world!");
	mlx_key_hook(mlx->win, key_hook, mlx);
	mlx_loop(mlx->ptr);
	return (0);
}
