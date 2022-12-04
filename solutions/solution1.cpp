int my_number = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println(my_number);
  my_number = my_number + 1;
  delay(1000);
}