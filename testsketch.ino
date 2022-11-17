int i = 0;

// be sure to set baud rate to what your computer and board both support
void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(115200);
    delay(3000); // wait for serial monitor to open
    Serial.print(F("begin testsketch")); 
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(10000);
    Serial.print(F("loop: "));
    Serial.println(i++);
    Serial.flush();
}
