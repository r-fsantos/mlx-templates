#include <stdio.h>
#include <stdlib.h>
#include "../../mlx/mlx.h"

# define WIN_WIDTH 600
# define WIN_HEIGHT 600

# define IMG_WIDTH 600
# define IMG_HEIGHT 600

/*
** size_l, bpp and endian
** 	initial values will be filled when passed to mlx_get_data_addr()
*/
typedef struct	s_img
{
	void	*img_ptr;
	int	*data;
	int	size_l;
	int	bpp;
	int	endian;
}	t_img;

typedef struct	s_mlx
{
	void	*mlx_ptr;
	void	*win;
}	t_mlx;

/*
** TYPE CAST -> img.data: 
** If one let this as void * type, whenever a referenced is made to the array values,
** there is a need to multiply them by 4.
**
** Check out keuhdall's github linked in my README for more information.
*/
int	main(void)
{
	t_mlx	*mlx;
	t_img	img;
	int	count_w;
	int	count_h;

	mlx = malloc(sizeof(mlx));
	mlx->mlx_ptr = mlx_init();
	mlx->win = mlx_new_window(mlx->mlx_ptr, WIN_WIDTH, WIN_HEIGHT, "03_img_making");
	img.img_ptr = mlx_new_image(mlx->mlx_ptr, IMG_WIDTH, IMG_HEIGHT);
	img.data = (int *)mlx_get_data_addr(img.img_ptr, &img.bpp, &img.size_l, &img.endian);
	count_h = -1;
	while (++count_h < IMG_HEIGHT)
	{
		count_w = -1;
		while (++count_w < IMG_WIDTH)
		{
			if (count_w % 2)
				img.data[count_h * IMG_WIDTH + count_w] = 0xFFFFFF;
			else
				img.data[count_h * IMG_WIDTH + count_w] = 0xFF0000;
		}
	}
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win, img.img_ptr, 0, 0);
	mlx_loop(mlx->mlx_ptr);
	return (0);
}

