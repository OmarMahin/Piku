void petting(){
  
  static int turns = 0;

    if (pet == 1 && millis() - last_pet_time > pet_delay){
      pet = 0;
      default_face();
    }
    if (digitalRead(touch_detect_pin) == 0){
        if (turns != 3)  {
          turns++;
          while(digitalRead(touch_detect_pin) == 0);
          delay(100);
        }

        else{
          turns = 0;
          pet = 1;
          while(digitalRead(touch_detect_pin) == 0);
          happy_sound();
          happy_face();
          if (angry != 1){
              for (int i = 0; i < 4;i++){
                looped = 1;
                while (looped == 1){
                  jump();
                  left(250);
                }
              }
          }
          else if (angry == 1)  angry = 0;

          last_pet_time = millis();
        }
    }

  
}