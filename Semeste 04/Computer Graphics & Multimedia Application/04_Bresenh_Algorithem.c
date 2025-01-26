// //  This code Run Only Turbo C++
// #include <stdio.h>
// #include <conio.h>
// #include <graphics.h>
// #include <dos.h>

// void lineBres(int, int, int, int);

// int main() {
//     int x1, y1, xn, yn;
//     int gd = DETECT, gm;
    
//     initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    
//     printf("Enter the starting coordinates of the line:\n");
//     scanf("%d %d", &x1, &y1);
    
//     printf("Enter the ending coordinates of the line:\n");
//     scanf("%d %d", &xn, &yn);
    
//     lineBres(x1, y1, xn, yn);
    
//     getch();
//     closegraph();
//     return 0;
// }

// void lineBres(int x1, int y1, int xn, int yn) {
//     int dx, dy, p, x, y;
//     int xEnd, yEnd;
//     int incX, incY, inc1, inc2;
    
//     dx = abs(xn - x1);
//     dy = abs(yn - y1);
    
//     p = 2 * dy - dx;
//     inc1 = 2 * dy;
//     inc2 = 2 * (dy - dx);
    
//     if (x1 > xn) {
//         x = xn;
//         y = yn;
//         xEnd = x1;
//     } else {
//         x = x1;
//         y = y1;
//         xEnd = xn;
//     }
    
//     putpixel(x, y, WHITE);
    
//     while (x < xEnd) {
//         x++;
//         if (p < 0) {
//             p += inc1;
//         } else {
//             y++;
//             p += inc2;
//         }
//         putpixel(x, y, WHITE);
//         delay(20);
//     }
// }