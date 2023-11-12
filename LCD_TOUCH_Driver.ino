#include <ArduinoJson.h>
#include <DHT.h>

#define DHTPIN 12      // Pino ao qual estamos conectados
#define DHTTYPE DHT11  // DHT 11

const int pinoTrigger = 9;
const int pinoEcho = 10;

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("Teste DHTxx e Sensor Ultrassônico!");

  pinMode(pinoTrigger, OUTPUT);
  pinMode(pinoEcho, INPUT);

  dht.begin();
}

void loop() {
  // Leitura da temperatura e umidade
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  // Medição de distância com o sensor ultrassônico
  digitalWrite(pinoTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(pinoTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinoTrigger, LOW);

  long duracao = pulseIn(pinoEcho, HIGH);
  int distancia = duracao * 0.034 / 2;

  // Criar o objeto JSON
  StaticJsonDocument<200> doc;
  
  doc["temperatura"] = t;
  doc["umidade"] = h;
  doc["distancia"] = distancia;

  // Serializar o objeto JSON
  String jsonStr;
  
  serializeJson(doc, jsonStr);

  // Imprimir o resultado na Serial
  Serial.println(jsonStr);

  delay(2000); // Aguardar um momento antes da próxima leitura
}
