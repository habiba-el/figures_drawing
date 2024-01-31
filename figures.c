//Habiba El Yousfi

#include <stdio.h>
void draw_A(unsigned short size);
void draw_B(unsigned short size);
void draw_C(unsigned short size);
void draw_D_and_E(unsigned short size);


int main (void){
    int num;
    printf("Enter a number between 1 and 15 for the width of the figure > ");
    scanf("%d", &num);
    draw_D_and_E(num);
return 0;
}

/***********************************/

void draw_character(char symbol, unsigned short size ){ /* Draws size caracters using symbol */
    unsigned short i;
    for (i=0; i<size; i++){
    printf("%c", symbol);
    }
}

void top_hourglass(unsigned short size, char symbol){ // Draws the top of the hourglass without a frame
    int i;
    for (i=size; i>=1; i-=2){
        draw_character(' ', (size-i)/2);
        draw_character(symbol, size);
        printf("\n");
    }
} 

//Draws the top of the hourglass with the frame symbol at the beginning and at the end of each line
void top_hourglass_framed(unsigned short size, char symbol, char frame, unsigned short frame_thickness, unsigned short space_thickness){
    unsigned short i;
    for (i=size; i>=1; i-=2){ 
        draw_character(frame, frame_thickness); //frame at the beginning of the line
        draw_character(' ', (size-i)/2+space_thickness); //space that needs to be left + space wanted by the user between the figure and the frame
        draw_character(symbol, i);
        draw_character(' ', (size-i)/2+space_thickness); 
        draw_character(frame, frame_thickness); //frame at the end of the line
        printf("\n");
    }
}

// Draws the bottom of the hourglass without frame
void bottom_hourglass(unsigned short size, char symbol){
    unsigned short i;
    /*testing if the number entered by the user is odd or even
    * if it's odd, the lower part will start with 3 drawings of the hourglass symbol
    * if it's even, it will start with 4
    */
    if (size%2==1){
        for (i=3; i<=size; i+=2){
            draw_character(' ', (size-i)/2);
            draw_character(symbol, i);
            printf("\n");
        }
    }else {
        for (i=4; i<=size; i+=2){
            draw_character(' ', (size-i)/2);
            draw_character(symbol, i);
            printf("\n");
        }
    }
}

//Draws the bottom of the hourglass with the frame symbol at the beginning and at the end of each line
void bottom_hourglass_framed(unsigned short size, char symbol, char frame, unsigned short frame_thickness, unsigned short space_thickness){
    unsigned short i;
    if (size%2==1){ 
        for (i=3; i<=size; i+=2){
            draw_character(frame, frame_thickness);
            draw_character(' ', (size-i)/2+space_thickness); //space that needs to be left + space wanted by the user between the figure and the frame
            draw_character(symbol, i);
            draw_character(' ', (size-i)/2+space_thickness);
            draw_character(frame, frame_thickness);
            printf("\n");
        }
    }else {
        for (i=4; i<=size; i+=2){
            draw_character(frame, frame_thickness);
            draw_character(' ', (size-i)/2+space_thickness);
            draw_character(symbol, i);
            draw_character(' ', (size-i)/2+space_thickness);
            draw_character(frame, frame_thickness);
            printf("\n");
        }
    }
}

//Draws the top of the butterfly with the frame symbol at the beginning and at the end of each line
void top_butterfly_framed(unsigned short size, char symbol, char frame, unsigned short frame_thickness, unsigned short space_thickness){
    unsigned short i;
    /* Test to see if the number enetered by the user is odd of even
    *  if it's odd then the program will execute size / 2 (the smallest whole part of the number)
    *  if it's even, the programe will be executed size/2 - 1 time
    */
    if (size%2==1){
        for (int i = 1; i <= size / 2; i++) {
            draw_character(frame, frame_thickness);
            draw_character(' ', space_thickness); //space that needs to be left + space wanted by the user between the figure and the frame
            draw_character(symbol, i);
            draw_character(' ', size-2*i);
            draw_character(symbol, i);
            draw_character(' ', space_thickness);
            draw_character(frame, frame_thickness);
            printf("\n");
        }}
    else{
       for (int i = 1; i < size / 2; i++) {
            draw_character(frame, frame_thickness);
            draw_character(' ', space_thickness);
            draw_character(symbol, i);
            draw_character(' ', size-2*i);
            draw_character(symbol, i);
            draw_character(' ', space_thickness);
            draw_character(frame, frame_thickness);
            printf("\n");
        }}

    //draws the middle line of the butterfly
    draw_character(frame, frame_thickness);
    draw_character(' ', space_thickness);
    draw_character(symbol, size);
    draw_character(' ', space_thickness);
    draw_character(frame, frame_thickness);
    printf("\n");
}

void bottom_butterfly_framed(unsigned short size, char symbol, char frame, unsigned short frame_thickness, unsigned short space_thickness){
    unsigned short i;
    //same as the top_butterfly_framed
    if (size%2==1){
        for (i=size/2; i>=1; i--) {
            draw_character(frame, frame_thickness);
            draw_character(' ', space_thickness);
            draw_character(symbol, i);
            draw_character(' ', size-2*i);
            draw_character(symbol, i);
            draw_character(' ', space_thickness);
            draw_character(frame, frame_thickness);
            printf("\n");
        }}
    else {
        for (i=size/2-1; i>=1; i--) {
            draw_character(frame, frame_thickness);
            draw_character(' ', space_thickness);
            draw_character(symbol, i);
            draw_character(' ', size-2*i);
            draw_character(symbol, i);
            draw_character(' ', space_thickness);
            draw_character(frame, frame_thickness);
            printf("\n");
    }}  
}

void top_butterfly(unsigned short size, char symbol){
    int i;
    if (size%2==1){
        for (int i = 1; i <= size/2; i++) {
            draw_character(symbol, i);
            draw_character(' ', size-2*i);
            draw_character(symbol, i);
            printf("\n");
        }}
    else{
       for (int i = 1; i < size / 2; i++) {
            draw_character(symbol, i);
            draw_character(' ', size-2*i);
            draw_character(symbol, i);
            printf("\n");
        }}
    draw_character(symbol, size); //drawing middle line 
    printf("\n");
}

void bottom_butterfly(unsigned short size, char symbol){
        int i;
    if (size%2==1){
        for (i=size/2-1; i>=1; i--) {
            draw_character(symbol, i);
            for (int space = size-2*i; space > 0; space--) {
                printf(" ");
            }
            draw_character(symbol, i);
            printf("\n");
        }}
    else{
       for (i=size/2-1; i>=1; i--) {
            draw_character(symbol, i);
            for (int space = size - 2 * i; space > 0; space--) {
                printf(" ");
            }
            draw_character(symbol, i);
            printf("\n");
        }}
}

// Draws the top of the frame with the number of frame rows and space between the frame and the figure the user has entered
void top_frame(unsigned short size, char frame, unsigned short frame_thickness, unsigned short space_thickness){
    unsigned short i;
    for (i=0; i<frame_thickness; i++){
        draw_character(frame, size+space_thickness*2+frame_thickness*2);
        printf("\n");
    }
    for (i=0; i<space_thickness; i++){
        draw_character(frame, frame_thickness); //blank framed lines before the figure
        draw_character(' ', size+space_thickness*2);
        draw_character(frame, frame_thickness);
        printf("\n");
    }
}

// Draws the top of the frame with the number of frame rows and space between the frame and the figure the user has entered
void bottom_frame(unsigned short size, char frame, unsigned short frame_thickness, unsigned short space_thickness){
    unsigned short i;
    for (i=0; i<space_thickness; i++){
        draw_character(frame, frame_thickness); //blank framed lines after the figure
        draw_character(' ', size+space_thickness*2);
        draw_character(frame, frame_thickness);
        printf("\n");
    }
    for (i=0; i<frame_thickness; i++){
        draw_character(frame, size+space_thickness*2+frame_thickness*2);
        printf("\n");
    }
}

/*******************************************/


void draw_A(unsigned short size){
    if (size>0 && size%2==1){
        top_hourglass(size, 'X');
        bottom_hourglass(size, 'X');
    }else printf("Error. The number must be odd");
}

void draw_B(unsigned short size){
    top_hourglass(size, 'X');
    bottom_hourglass(size, 'X');
}

void draw_C(unsigned short size){ 
    unsigned short i;
    char frame, symbol;
    printf("Please enter the symbol you want as a frame >");
    scanf(" %c", &frame);
    printf("Please enter the symbol you want for the hourglass >");
    scanf(" %c", &symbol);

    draw_character(frame, size+4); //top of the frame

    printf("\n%c", frame); //blank framed line before the hourglass
    draw_character(symbol, size+2);
    printf("%c \n", frame);

    top_hourglass_framed(size, symbol, frame, 1, 1);

    bottom_hourglass_framed(size, symbol, frame, 1, 1);

    printf("%c", frame); //blank framed line after the hourglass
    draw_character(symbol, size+2);
    printf("%c \n", frame);

    draw_character(frame, size+4); //bottom of the frame
}

void draw_D_and_E(unsigned short size) {
    char symbol, frame, frame_input, figure, ch;
    unsigned short frame_thickness, space;
    
    // Clear the input of any lingering whitespace.
    do scanf("%c", &ch); while (ch != '\n');

    // Get user input for the figure
    printf("Do you want to draw a butterfly or an hourglass (write b or h) >");
    scanf(" %c", &figure);
    
    // Get user input for the symbol
    printf("Please enter the symbol you want for the figure > ");
    scanf(" %c", &symbol);

    // Get user input for framing or not
    printf("Do you want to frame the figure? (Y/N) > ");
    scanf(" %c", &frame_input);

    if (frame_input == 'Y' || frame_input == 'y') {
        printf("Please enter the symbol you want for the frame > ");
        scanf(" %c", &frame);
        printf("Enter a number between 1 and 5 for the thickness of the frame> ");
        scanf("%hu", &frame_thickness);
        printf("Please enter a number between 0 and 5 for the space between the frame and the figure> ");
        scanf("%hu", &space);
        
        top_frame(size, frame, frame_thickness, space);
        if (figure == 'b' || figure == 'B'){
            top_butterfly_framed(size, symbol, frame, frame_thickness, space);
            bottom_butterfly_framed(size, symbol, frame, frame_thickness, space);
        }
        else if (figure == 'h' || figure == 'H') {
            top_hourglass_framed (size, symbol, frame, frame_thickness, space);
            bottom_hourglass_framed (size, symbol, frame, frame_thickness, space);
        }
        bottom_frame(size, frame, frame_thickness, space);

    } else {
        if (figure == 'b' || figure == 'B'){
            top_butterfly(size, symbol);
            bottom_butterfly(size, symbol);
        }
    else if (figure == 'h' || figure == 'H'){
            top_hourglass(size, symbol);
            bottom_hourglass (size, symbol);
        }
    }
}