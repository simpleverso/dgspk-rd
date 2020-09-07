#include "DigiKeyboard.h"
#define KEY_PrintScreen     70
#define KEY_Menu     118
#define KEY_Tab    43


void setup() {
  pinMode(1, OUTPUT); //LED on Model A
}

void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT); //minimize all windows
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_PrintScreen); //prntscr
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT); //Open Menu
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_V);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_D);
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(100);
  DigiKeyboard.println("mspaint");
  DigiKeyboard.delay(1200);
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT); //paste
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT); //save
  DigiKeyboard.delay(500); 
  DigiKeyboard.println("%userprofile%\\a.bmp"); //save in users folder
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT); //file
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_K); //set as desktop
  DigiKeyboard.delay(100); 
  DigiKeyboard.sendKeyStroke(KEY_T); //tile
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); //close paint
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT | MOD_SHIFT_LEFT); //back to desktop as it was
 
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(5000);
 
}
