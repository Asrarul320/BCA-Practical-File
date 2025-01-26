// //  This code Run Only Turbo C++
// #include <graphics.h>
// #include <conio.h>
// #include <dos.h>

// void circleBres(int, int, int);
// void drawCircle(int, int, int, int);

// void main() {
//     int gd = DETECT, gm;
//     int xc, yc, r;

//     initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
//     printf("Enter the center coordinates of the circle: ");
//     scanf("%d%d", &xc, &yc);
//     printf("Enter the radius of the circle: ");
//     scanf("%d", &r);

//     circleBres(xc, yc, r);

//     getch();
//     closegraph();
// }

// void circleBres(int xc, int yc, int r) {
//     int x = 0, y = r;
//     int d = 3 - 2 * r;

//     while (x <= y) {
//         drawCircle(xc, yc, x, y);
//         if (d < 0) {
//             d = d + 4 * x + 6;
//         } else {
//             d = d + 4 * (x - y) + 10;
//             y--;
//         }
//         x++;
//         drawCircle(xc, yc, x, y);
//         delay(50);
//     }
// }

// void drawCircle(int xc, int yc, int x, int y) {
//     putpixel(xc + x, yc + y, RED);
//     putpixel(xc - x, yc + y, YELLOW);
//     putpixel(xc + x, yc - y, BLUE);
//     putpixel(xc - x, yc - y, GREEN);
//     putpixel(xc + y, yc + x, GREEN);
//     putpixel(xc - y, yc + x, YELLOW);
//     putpixel(xc + y, yc - x, RED);
//     putpixel(xc - y, yc - x, YELLOW);
// }