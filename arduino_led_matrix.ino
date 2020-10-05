// Include matrix library
#include <MaxMatrix.h>

// Initialize pins
int DIN = 7;
int CLK = 6;
int CS = 5;
int maxInUse = 1;

// Initialize LED matrix
MaxMatrix m(DIN, CS, CLK, maxInUse); 

// Define three patterns for faces
char smile01[] = {8, 8,
  B00111100,
  B01000010,
  B10010101,
  B10100001,
  B10100001,
  B10010101,
  B01000010,
  B00111100
};
char smile02[] = {8, 8,
  B00111100,
  B01000010,
  B10010101,
  B10010001,
  B10010001,
  B10010101,
  B01000010,
  B00111100
};
char smile03[] = {8, 8,
  B00111100,
  B01000010,
  B10100101,
  B10010001,
  B10010001,
  B10100101,
  B01000010,
  B00111100
};

// The setup function runs once when you press reset or power the board
void setup() {
  
  m.init();
  m.setIntensity(1);
  
}

// The loop function runs over and over again forever
void loop() {
  
  m.writeSprite(0, 0, smile01);
  delay( 500 );
  m.writeSprite(0, 0, smile02);
  delay( 500 );
  m.writeSprite(0, 0, smile03);
  delay( 500 );
  
}