#include <stdio.h>
#include <string.h>
typedef struct {
    char color[10];
    double radius;
}Ball;

typedef struct  {
	int width;
	int length;
}Square;

typedef struct GEOMETRY{
	Ball ball;
	Square square;
}Geometry;

void show (Geometry *geometry);

int main(void) {
   // struct Ball ball = {"red", 4.0};
    Geometry geometry;
   	
   // geometry.ball ={"red",4.0};
   // geometry.square ={2,4}; 
   // geometry.ball.color= {"red"};
    strcpy(geometry.ball.color, "red");
    geometry.ball.radius =4.0;
    geometry.square.width =2;
    geometry.square.length =4;
    show(&geometry);

    return 0;
}

void show (Geometry *geometry) {
     Square* g_square=(Square*)&geometry->square;
     int* WIDTH = (int*)&geometry->square.width;
     int* s_width=(int*)g_square->width;
     
    // long* Width =(long*)WIDTH; 
     printf("ball: %s\t%.2f\n", geometry->ball.color, geometry->ball.radius);
     printf("square:%d\t %d\n ", geometry->square.width, geometry->square.length);
     
     printf("&geometry.ball.color=%p\n",&(geometry->ball.color));
     printf("&geometry.ball.radius=%p\n",&(geometry->ball.radius));
     printf("&geometry.square=%p\n",&(geometry->square));
     printf("&geometry.square.width=%p\n",&(geometry->square.width));
     printf("&geometry.square.length=%p\n",&(geometry->square.length));
    // printf("g_square=%p\n",g_square);
     // printf("&g_square=%p\n",&g_square);
     printf("Width=%p\n",WIDTH);
     printf("s_width=%p\n",s_width);
}

