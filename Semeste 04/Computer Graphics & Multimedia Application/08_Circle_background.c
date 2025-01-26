// //  This code Run Only Turbo C++
// #include <stdio.h>
// #include <graphics.h>
// #include <conio.h>
// #include <math.h>

// void dcircle(int h, int k, int r);
// void dpixel(int x, int y, int h, int k);
// void cfill(int x, int y, int fcolor, int bcolor);

// void main() {
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
//     setbkcolor(YELLOW);
//     dcircle(30, 30, 27);
//     cfill(30, 30, BLUE, RED);
//     getch();
//     closegraph();
// }

// void dcircle(int h, int k, int r) {
//     int y, i;
//     for (i = 0; i <= r; i++) {
//         y = sqrt((r * r) - (i * i));
//         dpixel(i, y, h, k);
//     }
// }

// void dpixel(int x, int y, int h, int k) {
//     putpixel(h + x, k + y, RED);
//     putpixel(h - x, k + y, RED);
//     putpixel(h + x, k - y, RED);
//     putpixel(h - x, k - y, RED);
//     putpixel(h + y, k + x, RED);
//     putpixel(h - y, k + x, RED);
//     putpixel(h + y, k - x, RED);
//     putpixel(h - y, k - x, RED);
// }

// void cfill(int x, int y, int fcolor, int bcolor) {
//     int current;
//     current = getpixel(x, y);
//     if (current != bcolor && current != fcolor) {
//         putpixel(x, y, fcolor);
//         cfill(x + 1, y, fcolor, bcolor);
//         cfill(x - 1, y, fcolor, bcolor);
//         cfill(x, y + 1, fcolor, bcolor);
//         cfill(x, y - 1, fcolor, bcolor);
//     }
// }