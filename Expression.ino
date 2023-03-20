void blinking(int pause = 0) {
  for (int i = 0; i < 8; i++) {
    face.clearDisplay();

    face.drawBitmap(0, 0, blink_frames[i], 128, 32, SSD1306_WHITE);

    face.display();
  }

  delay(pause);
}


void dizzyFeeling(int times) {
  for (int j = 0; j < times; j++) {
    for (int i = 0; i < 4; i++) {
      face.clearDisplay();

      face.drawBitmap(0, 0, dizzy_frames[i], 128, 32, SSD1306_WHITE);

      face.display();
      delay(50);
    }
  }
}


void happy_face() {
  face.clearDisplay();

  face.drawBitmap(0, 0, face_Happy_frame, 128, 32, SSD1306_WHITE);

  face.display();
}

void angry_face() {
  face.clearDisplay();

  face.drawBitmap(0, 0, face_Angry_frame, 128, 32, SSD1306_WHITE);

  face.display();
}

void default_face() {
  face.clearDisplay();

  face.drawBitmap(0, 0, face_Default_frame, 128, 32, SSD1306_WHITE);

  face.display();
}

void dizzy_face() {
  face.clearDisplay();

  face.drawBitmap(0, 0, face_Dizzy_frame, 128, 32, SSD1306_WHITE);

  face.display();
}