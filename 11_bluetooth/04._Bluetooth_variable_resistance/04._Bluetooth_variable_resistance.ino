/******************************************************************************************
 * FileName     : 04._Bluetooth_photoresistor_sensoer
 * Description  : 블루투스를 이용하여 가변저항의 값을 앱에 보내기
 * Author       : 이인정
 * Created Date : 2021.06.02
 * Reference    : 
 * Modified     : 2021.06.02 : LIJ : 헤더 수정
 * Modified     : 2021.06.02 : WDW : 작동하지 않는 코드 수정, 파일 이름 변경
 * Modified     : 2021.06.11 : WDW : 연결됐다고 알리는 부분 추가
 * Modified     : 2021.12.16 : LEH : 소스 크린징
******************************************************************************************/

#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

char names[] = "your_name";                 // 자신의 이름을 적어주세요
int sensor = A0;                            // 가변저항센서


void setup() {
  Serial.begin(115200);                     // 통신속도 설정
  SerialBT.begin(names);                    // 자신의 이름으로 된 블루투스 생성

  while(!SerialBT.connected(1000)) {
  Serial.println("연결되지 않았습니다.");
  }
  delay(1000);                              // 제대로 연결이 되어야하니 잠시 대기

  String message = names + String(" : 연결에 성공했습니다!");
  Serial.println(message);                  // 시리얼에 연결에 성공했다고 출력
  SerialBT.println(message.c_str());        // 연결된 블루투스에 성공했다고 전송
}


void loop() {
  int sensor_result = analogRead(sensor);   // 센서가 측정한 값 저장
  String sensor_data = String(sensor_result, DEC);
  
  SerialBT.println(sensor_data);
  delay(1000);
  
}

//=========================================================================================
//
// (주)한국공학기술연구원 http://et.ketri.re.kr
//
//=========================================================================================
