/******************************************************************************************
 * FileName     : 03._Bluetooth_two_way_communication
 * Description  : 블루투스를 이용하여 시리얼 통신하기
 * Author       : 이인정
 * Created Date : 2021.06.03
 * Reference    : 
 * Modified     : 2021.06.03 : LIJ : 헤더 수정
 * Modified     : 2021.06.03 : WDW : 연결 체크하는 부분 추가
 * Modified     : 2021.06.11 : WDW : 연결됐다고 알리는 부분 추가
 * Modified     : 2021.12.16 : LEH : 소스 크린징
******************************************************************************************/

#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

char names[] = "your_name";          // 자신의 이름을 적어주세요


void setup() {
  Serial.begin(115200);              // 통신속도 설정
  SerialBT.begin(names);             // 자신의 이름으로 된 블루투스 생성

  while(!SerialBT.connected(1000)) {
    Serial.println("연결되지 않았습니다.");
  }
  delay(1000);                       //제대로 연결이 되어야하니 잠시 대기

  String message = names + String(" : 연결에 성공했습니다!");
  Serial.println(message);           // 시리얼에 연결에 성공했다고 출력
  SerialBT.println(message.c_str()); // 연결된 블루투스에 성공했다고 전송
}


void loop() {
  if (Serial.available()) {          // 시리얼에 읽을 데이터가 있다면
    SerialBT.write(Serial.read());   // 블루투스로 시리얼 값 넘겨주기
  }
  
  if (SerialBT.available()) {        // 블루투스에 읽을 데이터가 있다면
    Serial.write(SerialBT.read());   // 시리얼 모니터에 출력
  }
  delay(20);                         // 0.02초 대기
}

//=========================================================================================
//
// (주)한국공학기술연구원 http://et.ketri.re.kr
//
//=========================================================================================
