# More about the MiniLibX

## **TODO: Create table of contents.**


## BSD/LINUX X-WINDOW CONCEPT
---

X-Window is a network-oriented graphical system for Unix.  It is based on two main parts:
On  one  side,  your  software wants to draw something on the screen and/or get keyboard &
mouse entries.

On the other side, the X-Server manages the screen, keyboard and mouse (It is  often  refered to as a "display").

A network connection must be established between these two entities to send drawing orders
(from the software to the X-Server), and keyboard/mouse events (from the X-Server  to  the
software).


## MACOSX CONCEPT
---

The MacOSX operating system handle graphical access to the screen (or "display").
On  one  side,  your  software wants to draw something on the screen and/or get keyboard &
mouse entries.
On the other side, the underlying MacOSX graphical framework that handles the screen,  the
windowing system, keyboard and mouse.
A connection between these two entities must be established.

## INCLUDE FILE
---

`mlx.h` should be included for a correct use of the `MiniLibX API`. It only contains function
prototypes, no structure is needed.


## LIBRARY FUNCTIONS
First of all, you need to initialize the connection between your software and the display.
Once  this  connection  is  established, you'll be able to use other `MiniLibX` functions to
send the graphical orders, like "I want to draw a yellow pixel in this window" or "did the
user hit a key?".

The  mlx_init  function will create this connection. No parameters are needed, ant it will
return a void * identifier, used for further calls to the library routines.

All other `MiniLibX` functions are described in the following man pages:

```
mlx_new_window      : manage windows
mlx_pixel_put       : draw inside window
mlx_new_image       : manipulate images
mlx_loop            : handle keyboard or mouse events
```
