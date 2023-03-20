void jump() {
  looped = 1;
  if (digitalRead(sensor) == 1 && sensorCrossed == 0) {
    digitalWrite(jump_motor_1, HIGH);
    digitalWrite(jump_motor_2, LOW);
    analogWrite(jump_motor_speed, jumpSpeed);
  }

  else if (sensorCrossed != 2) sensorCrossed = 1;

  if (digitalRead(sensor) == 0 && sensorCrossed == 1) sensorCrossed = 2;

  if (digitalRead(sensor) == 0 && sensorCrossed == 2) {
    digitalWrite(jump_motor_1, HIGH);
    digitalWrite(jump_motor_2, LOW);
    analogWrite(jump_motor_speed, jumpSpeed);
    jumpDelayStart = millis();
  }

  if (digitalRead(sensor) == 1 && sensorCrossed == 2) {
    digitalWrite(jump_motor_1, HIGH);
    digitalWrite(jump_motor_2, LOW);
    analogWrite(jump_motor_speed, 0);

    if (millis() - jumpDelayStart > jumpDelay) {
      sensorCrossed = 0;
      looped = 0;

      jumpDelayStart = 0;
    }
  }
}

void left(int speed){
  digitalWrite(turn_motor_1, LOW);
  digitalWrite(turn_motor_2, HIGH);
  analogWrite(turn_motor_speed, speed);
}

void right(int speed){
  digitalWrite(turn_motor_1, HIGH);
  digitalWrite(turn_motor_2, LOW);
  analogWrite(turn_motor_speed, speed);
}

void stop_motion() {
  digitalWrite(jump_motor_1, HIGH);
  digitalWrite(jump_motor_2, HIGH);
  analogWrite(jump_motor_speed, 0);
  digitalWrite(turn_motor_1, HIGH);
  digitalWrite(turn_motor_2, HIGH);
  analogWrite(turn_motor_speed, 0);
}