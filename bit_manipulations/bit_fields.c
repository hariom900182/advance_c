#include <stdio.h>

struct Packet
{

    unsigned int opaq_trans : 1;   // 0 = opaque, 1 = transparent
    unsigned int color : 3;        // 0-7 different 8 colors
    unsigned int : 4;              // padding
    unsigned int border : 1;       // 0 = no border, 1 = border
    unsigned int border_color : 3; // color from 0-7
    unsigned int border_style : 2; // 0 = solid, 1= dashed, 2=dotted
    unsigned int : 2;              // padding
};

struct Packet pack;

void set_default_packet()
{
    pack.border = 1;
    pack.border_color = 0;
    pack.border_style = 0;
    pack.color = 0;
    pack.opaq_trans = 0;
}
void color_text(unsigned int value)
{
    switch (value)
    {
    case 0:
        printf("C1\n");
        break;
    case 1:
        printf("C2\n");
        break;
    case 2:
        printf("C3\n");
        break;
    case 3:
        printf("C4\n");
        break;
    case 4:
        printf("C5\n");
        break;
    case 5:
        printf("C6\n");
        break;
    case 6:
        printf("C7\n");
        break;
    case 7:
        printf("C8\n");
        break;
    }
}
void display_packet()
{

    printf("Fill: ");
    switch (pack.opaq_trans)
    {
    case 0:
        printf("Opaque\n");
        break;
    case 1:
        printf("Transparent\n");
    }
    printf("Border: ");
    switch (pack.border)
    {
    case 0:
        printf("No\n");
        break;
    case 1:
        printf("Yes\n");
    }
    printf("Border color: ");
    color_text(pack.border_color);

    printf("Border style: ");
    switch (pack.border_style)
    {
    case 0:
        printf("Solid\n");
        break;
    case 1:
        printf("Dashed\n");
        break;
    case 2:
        printf("Dotted\n");
    }
    printf("-----------------------\n");
}
void main()
{
    set_default_packet();
    display_packet();
    pack.border_color = 3;
    pack.border_style = 2;
    display_packet();
}