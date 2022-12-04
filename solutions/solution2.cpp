int my_number = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print(my_number);
  if (my_number < 7 || my_number > 21) {
    Serial.println(" - nighttime");
  } else {
    Serial.println(" - daytime");
  }
  my_number = my_number + 1;
  if (my_number > 23) {
    my_number = 0;
  }
  
  delay(1000);
}
