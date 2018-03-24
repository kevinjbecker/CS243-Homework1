///
/// File: triangle.c
///
/// program prints multiple triangles "right-aligned" triangles of this form:
///     *
///   ***
/// *****
///
/// @author kjb2503 : Kevin Becker
///
// // // // // // // // // // // // // // // // // // // // // // // //

#include <stdio.h> // includes standard input output
#include <stdlib.h> //EXIT_SUCCESS

///
/// Function: drawTriangle
///
/// Description: draw a right-aligned triangle whose height/width is "size"
///
/// @param size  the size of the triangle to draw
///
void drawTriangle(int size)
{
    // From the instructions: "If the function's argument is even, the function
    // increments the size by 1"
    // based on that this line determines if the parameter is even or odd and
    // increments it by one if it is even
    int totStars = (size % 2 == 0 ? size + 1 : size);

    // loops through the entire maxWidth
    // note: starts at 1 so things work properly
    for(int row = 1; row <= (totStars + 1)/2; row++)
    {
        // the number of asterisks to be printed on this current row
        int numStarsThisRow = (2 * row) - 1;

        // loops through the padding (which is the total number of characters
        // per row minus the number of chars per row)
        for(int padding = 0; padding < (totStars - numStarsThisRow); padding++)
        {
            printf(" ");
        }

        // prints the asterisks which are apart of the triangle
        for(int star = 0; star < numStarsThisRow; star++)
        {
            printf("*");
        }

        //prints a new line so we can begin the next one
        printf("\n");
    }
    printf("\n");
}

///
/// Function: main
///
/// Description: draw 3 triangles of size 1, 4, and 6.
/// There is one blank line between each triangle, and after the last one.
///
/// @returns errorCode error Code; EXIT_SUCCESS if no error.
int main(int argc, char **argv)
{
    // just so we don't fail on try if -Werror is enabled
    (void)argc;
    (void)argv;

    // draws triangles: 1, 4, and 6... which is really 1, 5, 7
    // as per the instructions
    drawTriangle(1);
    drawTriangle(4);
    drawTriangle(6);

    return EXIT_SUCCESS;
}
