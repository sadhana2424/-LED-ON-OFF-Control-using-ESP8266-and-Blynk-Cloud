
#define BLYNK_TEMPLATE_ID "TMPL3nXtIzKPu"
#define BLYNK_TEMPLATE_NAME "led"
#define BLYNK_AUTH_TOKEN "Kwq6vjAoNz2J_Dfo7DVO-9uM5DL8Ot0s"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "Sadhana";
char pass[] = "123456789";

#define LED_PIN D1

BLYNK_WRITE(V0)
{
  int value = param.asInt();

  if(value == 1)
  {
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
  }
}

void setup()
{
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}
