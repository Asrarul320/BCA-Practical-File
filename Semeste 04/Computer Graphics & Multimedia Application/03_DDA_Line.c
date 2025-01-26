// //  This code Run Only Turbo C++
// #include <stdio.h>
// #include <conio.h>
// #include <graphics.h>
// #include <dos.h>

// void lineDDA(int, int, int, int);

// int main() {
//     int x1, y1, xn, yn;
//     int gd = DETECT, gm;
    
//     initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    
//     printf("Enter the starting coordinates of the line:\n");
//     scanf("%d %d", &x1, &y1);
    
//     printf("Enter the ending coordinates of the line:\n");
//     scanf("%d %d", &xn, &yn);
    
//     lineDDA(x1, y1, xn, yn);
    
//     getch();
//     closegraph();
//     return 0;
// }

// void lineDDA(int x1, int y1, int xn, int yn) {
//     int dx, dy, m, i;
//     float x, y, delX, delY;

//     dx = xn - x1;
//     dy = yn - y1;
    
//     if (abs(dx) >= abs(dy)) {
//         m = abs(dx);
//     } else {
//         m = abs(dy);
//     }
    
//     delX = dx / (float)m;
//     delY = dy / (float)m;
    
//     x = x1;
//     y = y1;
    
//     for (i = 0; i <= m; i++) {
//         putpixel(x, y, RED);
//         x += delX;
//         y += delY;
//         delay(20);
//     }
// }