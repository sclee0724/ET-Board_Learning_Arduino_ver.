/******************************************************************************************
* FileName: 05._Bluetooth_communication_photoresistor_sensor
* Description : 블루투스로 조도센서 값을 넘겨주는 예제
* Author : 이인정
* Created Date : 2021.06.03
* Reference : 
* modified : 2021.06.03 : LIJ : 헤더 수정
******************************************************************************************/
#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

int sensor = A1;                     // 조도센서
char names[] = "your_name";          // 자신의 이름을 적어주세요

void setup() {
  Serial.begin(115200);              // 통신속도 설정
  SerialBT.begin(names);             // 자신의 이름으로 된 블루투스 생성
}

void loop() {
  int sensor_result = analogRead(sensor);
    
  SerialBT.println(sensor_result);     // 블루투스로 시리얼 값 넘겨주기

  delay(1000);                         // 1초 대기
}
//┌────────────────────────────────┐
//│                                                    │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr       │
//│                                                    │
//└────────────────────────────────┘
