
#include <LiquidCrystal.h>


const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {

  lcd.begin(16, 2);
  lcd.print("Solar Light");


  pinMode(A5,INPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:

  int ldr=analogRead(A5);
    lcd.print(ldr);
    if (ldr > 500){
      digitalWrite(3,LOW);
    }
    else {
      digitalWrite(3,HIGH);
    }
  
  }

  
