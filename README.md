# Arduino and an LED Matrix

A basic example of controlling an 8 x 8 LED matrix using an Arduino.

## Arduino Code

Open up [Arduino Create](https://create.arduino.cc/editor/) and add the following code:

```csharp
#include <MaxMatrix.h>

int DIN = 7;
int CLK = 6;
int CS = 5;
int maxInUse = 1;

MaxMatrix m(DIN, CS, CLK, maxInUse); 

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

void setup() {
  
  m.init();
  m.setIntensity(1);
  
}

void loop() {
  
  m.writeSprite(0, 0, smile01);
  delay( 500 );
  m.writeSprite(0, 0, smile02);
  delay( 500 );
  m.writeSprite(0, 0, smile03);
  delay( 500 );
  
}
```

[View the Arduino code on Arduino Create](https://create.arduino.cc/editor/professoradam/3858d28f-b91f-4d77-a90e-ff8519007a8a/preview)

You will need to setup the following circuit using your Arduino:

![Tinkercad Circuit](https://raw.githubusercontent.com/codeadamca/arduino-led-matrix/main/tinkercad-led-matrix.jpg)

[View the Circuit on Tinkercad](https://www.tinkercad.com/things/cirt8n99Qga)


## Tutorial Requirements:

* [Arduino Create](https://create.arduino.cc/editor) 

Full tutorial URL: https://codeadam.ca/learning/arduino-led-matrix.html

<a href="https://codeadam.ca">
<img src="https://codeadam.ca/images/code-block.png" width="100">
</a>
