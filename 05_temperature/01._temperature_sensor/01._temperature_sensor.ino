/******************************************************************************************
 * FileName     : 01._temperature_sensor
 * Description  : 온도 센서 값 출력 해보기(시리얼 모니터 출력)
 * Author       : 이인정
 * Created Date : 2021.05.28
 * Reference    : 
 * Modified     : 2021.06.02 : LIJ : 헤더 수정
 * Modified     : 2021.12.16 : LEH : 소스 크린징
******************************************************************************************/

int sensor = A2;                            // 온도 센서


void setup() {  
  Serial.begin(115200);                     // 통신속도
}


void loop() {  
  int sensor_result = analogRead(sensor);   // 센서가 측정한 값 저장
  Serial.println(sensor_result);
  delay(200);                               // 0.2초 대기
}

//=========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//=========================================================================================
