void starting_sound(){
  tone(buzzer, 3500, 100);
  delay(100);
  tone(buzzer, 3900, 100);
  delay(100);
  tone(buzzer, 3500, 100);
  delay(50);
}

void happy_sound(){
  tone(buzzer, 3500, 100);
  delay(100);
  tone(buzzer, 3900, 100);
  delay(100);
  tone(buzzer, 3500, 100);
  delay(100);
  tone(buzzer, 3900, 100);
  delay(100);
  tone(buzzer, 3500, 100);
  delay(100);
  tone(buzzer, 3900, 200);
  delay(200);
  tone(buzzer, 3500, 100);
}

void stopping_sound(){
  tone(buzzer, 1000, 100);
}


void angry_sound(){
  tone(buzzer, 150, 300);
}