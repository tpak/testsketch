int i = 0;

// be sure to set baud rate to what your computer and board both support
void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(115200);
    delay(7500); // wait a few seconds for me to open serial monitor
    Serial.println(F("begin testsketch")); 
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(5000);
    Serial.print(F("loop: "));
    Serial.println(i++);
    Serial.flush();
}


