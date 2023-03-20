// declaring all pinModes


void init_Piku(){


  pinMode(jump_motor_1, OUTPUT);
  pinMode(jump_motor_2, OUTPUT);
  pinMode(jump_motor_speed, OUTPUT);
  pinMode(turn_motor_1, OUTPUT);
  pinMode(turn_motor_1, OUTPUT);
  pinMode(turn_motor_speed, OUTPUT);
  pinMode(touch_power_pin, OUTPUT);
  pinMode(touch_detect_pin, INPUT_PULLUP);
  pinMode(sensor, INPUT);

  digitalWrite(touch_power_pin, LOW);

  Serial.begin(9600); //for debugging
  bluetooth.begin(9600);
  face.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  face.clearDisplay();
  face.drawBitmap(0, 0, face_Default_frame, 128, 32, SSD1306_WHITE);
  face.display();


  while(!bluetooth.available());

  starting_sound();
  delay(100);

}