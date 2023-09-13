#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}


// Prints an arrow of specified size whose left edge is at col leftCol.
void print_arrow(int leftCol, int size)
{
    // Draw the arrowhead (triangle)
    print_triangle(leftCol, size);

    // Calculate the column to start drawing the square to be centered around the triangle
    int squareLeftCol = leftCol + size - 2;

    // Draw the shaft (square)
    print_square(squareLeftCol, size);  // Adjust the size of the square as needed
}





