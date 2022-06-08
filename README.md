# MiniLibX

`MiniLibX`  is an easy way to create graphical software, without any X-Window/Cocoa program-
ming knowledge. It provides simple window creation, a drawing tool, image and basic events
management.

This README is pretty straight-forward. To get more detail about `MiniLibX` core concepts, please refer to here.

# Usage

Initialize a connection between the software and the display. This is done by calling `mlx` "constructor". If `mlx_init()` fails to set up the connection to the graphical system, it will return `NULL`,
otherwise a non-null pointer is returned as a connection identifier. To know:

```
void *mlx_init ();
```

Once  this  connection  is  established, one will be able to use other `MiniLibX` functions to send the graphical orders, like "I want to draw a yellow pixel in this window" or "did the user hit a key?".



## Linking `MiniLibX` on BSD/Linux and X-Window
---

To use `MiniLibX` functions, you'll need to  link  your  software  with  several  libraries,
including  the `MiniLibX` library itself.  To do this, simply add the following arguments at
linking time:

```
-L(path-to-mlx) -lmlx -lXext -lX11
```

## Linking `MiniLibX` on MACOSX
---

To use `MiniLibX` functions, you'll need to link your software with  the  `MiniLibX`  library,
and several system frameworks:

```
-L(path-to-mlx) -lmlx -framework OpenGL -framework AppKit
```
