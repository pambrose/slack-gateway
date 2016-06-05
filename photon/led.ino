int led = D0;
int ledValue = 0;

void setup() {
    pinMode(led,OUTPUT);

    Spark.variable("getLed", &ledValue, INT);
    Spark.function("setLed",ledToggle);
}

void loop() {
    ledValue = digitalRead(led);
}

int ledToggle(String command) {
    if (command=="on") {
        digitalWrite(led,HIGH);
        return 1;
    }
    else if (command=="off") {
        digitalWrite(led,LOW);
        return 0;
    }
    else {
        return -1;
    }
}

