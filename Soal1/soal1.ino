int button = 2;
int button2 = 3;
int button3 = 4;
int led = 5;
int led2 = 6;
int led3 = 7;
int buttonPushCounter1 = 0;
int buttonState1 = 0;
int lastButtonState1 = 0;
int buttonPushCounter2 = 0;
int buttonState2 = 0;
int lastButtonState2 = 0;
int buttonPushCounter3 = 0;
int buttonState3 = 0;
int lastButtonState3 = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(button, INPUT);
    pinMode(led, OUTPUT);
    pinMode(button2, INPUT);
    pinMode(led2, OUTPUT);
    pinMode(button3, INPUT);
    pinMode(led3, OUTPUT);
}

void loop()
{
    buttonF1();
    nyala1();
    buttonF2();
    nyala2();
    buttonF3();
    nyala3();
}

void buttonF1()
{
    buttonState1 = digitalRead(button);
    if (buttonState1 != lastButtonState1)
    {
        if (buttonState1 == HIGH)
        {
            buttonPushCounter1++;
        }
        else
        {
            Serial.println("changing....");
        }
        delay(10);
    }
    lastButtonState1 = buttonState1;
    if (buttonPushCounter1 > 2)
    {
        buttonPushCounter1 = 1;
    }
}

void nyala1()
{
    if (buttonPushCounter1 == 2)
    {
        digitalWrite(led, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
    }
    else if (buttonPushCounter1 == 1)
    {
        digitalWrite(led, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
    }
}

void buttonF2()
{
    buttonState2 = digitalRead(button2);
    if (buttonState2 != lastButtonState2)
    {
        if (buttonState2 == HIGH)
        {
            buttonPushCounter2++;
        }
        else
        {
            Serial.println("changing....");
        }
        delay(10);
    }
    lastButtonState2 = buttonState2;
    if (buttonPushCounter2 > 2)
    {
        buttonPushCounter2 = 1;
    }
}

void nyala2()
{
    if (buttonPushCounter2 == 2)
    {
        digitalWrite(led, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        delay(1000);
    }
    else if (buttonPushCounter2 == 1)
    {
        digitalWrite(led, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
    }
}

void buttonF3()
{
    buttonState3 = digitalRead(button3);
    if (buttonState3 != lastButtonState3)
    {
        if (buttonState3 == HIGH)
        {
            buttonPushCounter3++;
        }
        else
        {
            Serial.println("changing....");
        }
        delay(10);
    }
    lastButtonState3 = buttonState3;
    if (buttonPushCounter3 > 2)
    {
        buttonPushCounter3 = 1;
    }
}

void nyala3()
{
    if (buttonPushCounter3 == 2)
    {
        digitalWrite(led3, HIGH);
        delay(500);
        digitalWrite(led2, HIGH);
        delay(500);
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
        digitalWrite(led2, LOW);
        delay(500);
        digitalWrite(led3, LOW);
        delay(500);
    }
    else if (buttonPushCounter3 == 1)
    {
        digitalWrite(led, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
    }
}