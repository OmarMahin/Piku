void follow_signal() {
  if (bluetooth.available()) {
    char read = bluetooth.read();
    if (read != 'T')  command = read;
    Serial.println(command);
  }

  if (angry == 0 && dizzy != 2) {
    if (command == 'F' || looped == 1) {
      turning = 0;
      jump();
    }

    else if (command == 'L' && dizzy != 2) {
      left(200);
      turning++;
      if (turning == dizzyThres + 1) dizzy_face();
      if (turning > dizzyThres) {
        stopping_sound();
        dizzy = 1;
      }
    }

    else if (command == 'R' && dizzy != 2) {
      right(200);
      turning++;
      if (turning == dizzyThres + 1) dizzy_face();
      if (turning > dizzyThres) {
        stopping_sound();
        dizzy = 1;
      }
    }

    else if (dizzy == 1 && turning == 0) {
      dizzy = 2;
    }

    else {

      turning = 0;
      stop_motion();
    }
  }

  else if (dizzy == 2) {
    dizzyFeeling(5);
    dizzy = 0;
    angry = 1;
    angry_face();
  }

  else if (angry == 1) {
    if (command != 'S') angry_sound();
  }
}
