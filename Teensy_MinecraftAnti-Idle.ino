int counter = 0;
int i;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5000);
  for (i=0; i<40; i++){
    Mouse.move(2, -1);
    delay(25);
  }
  Mouse.set_buttons(1, 0, 0);
  delay(100);
  Mouse.set_buttons(0, 0, 0);
  
  Keyboard.press(KEY_A);
  delay(2000);
  Keyboard.release(KEY_A);
  delay(10000);
  for (i=0; i<40; i++) {
    Mouse.move(2, 2);
    delay(25);
  }
  Mouse.set_buttons(1, 0, 0);
  delay(100);
  Mouse.set_buttons(0, 0, 0);
  
  Keyboard.press(KEY_D);
  delay(2000);
  Keyboard.release(KEY_D);
  delay(10000);

  for (i=0; i<40; i++){
    Mouse.move(-4, -1);
    delay(25);
  }
  Mouse.set_buttons(1, 0, 0);
  delay(100);
  Mouse.set_buttons(0, 0, 0);
  
  Keyboard.press(KEY_S);
  delay(2000);
  Keyboard.release(KEY_S);
  delay(10000);
  Keyboard.press(KEY_W);
  delay(2000);
  Keyboard.release(KEY_W);
  delay(10000);
  counter += 1;
  //Let the people know, Anti-Idle
  if (counter >= 50){
    Keyboard.print("t");
    delay(500);
    Keyboard.print("DnD - Do Not Disturb. Anti-Idling for Iron :-D");
    Keyboard.press(KEY_ENTER);
    delay(100);
    Keyboard.release(KEY_ENTER);
    counter = 0;
  }
}
