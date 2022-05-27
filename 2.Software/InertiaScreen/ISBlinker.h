#define BLINKER_WIFI

#include <Blinker.h>
#include <Blinker/BlinkerDebug.h>

String input;
unsigned int speed = 1023;

char auth[] = "a2ca17d80890";
char ssid[] = "HUAWEI-0J1AF5";
char pswd[] = "aA010516";

// �½��������
BlinkerButton Button1("btn-slow");
BlinkerButton Button2("btn-quick");
BlinkerButton Button3("btn-stop");

void button1_callback(const String& state) {
    BLINKER_LOG("get slow button state: ", speed);
    input = "1";
}

void button2_callback(const String& state) {
    BLINKER_LOG("get quick button state: ", speed);
    input = "2";
}

void button3_callback(const String& state) {
    BLINKER_LOG("get switch button state: ", speed);
    input = "3";
}