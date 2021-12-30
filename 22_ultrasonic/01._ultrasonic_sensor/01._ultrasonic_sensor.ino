/******************************************************************************************
 * FileName     : 01._ultrasonic_sensor
 * Description  : 초음파 센서를 이용하여 물체와의 거리 측정 해보기
 * Author       : 이인정
 * Created Date : 2021.06.04
 * Reference    : 
 * Modified     : 2021.06.04 : LIJ : 헤더 수정
 * Modified     : 2021.12.16 : LEH : 소스 크린징
******************************************************************************************/

int TRIG = D9;                          // TRIG 핀 설정 (초음파 보내는 핀)
int ECHO = D8;                          // ECHO 핀 설정 (초음파 받는 핀)


void setup()
{
  Serial.begin(115200);                 // 통신속도
  pinMode(TRIG, OUTPUT);                // 핀 모드 설정
  pinMode(ECHO, INPUT);                 // 핀 모드 설정
}


void loop()
{
  long duration, distance;
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  duration = pulseIn (ECHO, HIGH);      // 물체에 반사되어돌아온 초음파의 시간을 저장
  
  distance = duration * 17 / 1000;      // 측정된 값을 Cm 로 변환하기 위해 공식을 대입
  
  Serial.print(distance);               // 측정된 물체로부터 거리값 시리얼 모니터로 출력
  Serial.println(" Cm");
  
  delay(1000);                          // 1초 대기
}

//=========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//=========================================================================================
