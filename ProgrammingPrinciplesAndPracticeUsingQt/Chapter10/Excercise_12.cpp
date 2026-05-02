/*
Author: Kirteekumar
Date:02.05.2026

Excercise12:
A superellipse is a two-dimensional shape deﬁned by the equation
(x/y)^m + (y/b)^n = 1 ; where m > 0 and n > 0.

Look up superellipse on the Web to get a better idea of what such shapes look like.
Write a program that draws ‘‘starlike’’ patterns by connecting points on a superellipse.
Take a, b, m, n, and N as arguments. Select N points on the superellipse deﬁned by a, b,
m, and n. Make the points equally spaced for some deﬁnition of ‘‘equal.’’ Connect each
of those N points to one or more other points (if you like you can make the number of
points to which to connect a point another argument or just use N–1, i.e., all the other
points).
*/

#include "string"
#include "PPP/Simple_window.h"


int main()
{
    Application app;


    Simple_window win = {{0,0},500,500,"my window"};
    //Point bp = {200,200}; //begining point

    //TODO: Too much mathematical

    //win.attach(txt);

    win.wait_for_button();

	return 0;
}
