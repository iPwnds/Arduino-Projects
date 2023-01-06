/*
int buttons[6];
// set up an array with 6 integers

int buttons[0] = 2;
// give the first element of the array the value 2
*/

int notes[] = {165,110,87,131};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int keyVal = analogRead(A0);
  
  Serial.println(keyVal);

  if(keyVal >= 1010 && keyVal <= 1025){
    tone(8, notes[0]);
  }

  else if(keyVal >= 990 && keyVal <= 1010){
    tone(8, notes[1]);
  }

  else if(keyVal >= 505 && keyVal <= 515){
    tone(8, notes[2]);
  }

  else if(keyVal >= 5 && keyVal <= 10){
    tone(8, notes[3]);
  }

  else{
    noTone(8);
  }
}
