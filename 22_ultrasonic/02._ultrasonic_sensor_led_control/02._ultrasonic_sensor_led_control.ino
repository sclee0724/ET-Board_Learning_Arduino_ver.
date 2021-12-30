/******************************************************************************************
 * FileName     : 02._ultrasonic_sensor_led
 * Description  : 초음파 센서를 이용하여 거리에 따라 LED를 켜보기
 * Author       : 이인정
 * Created Date : 2021.06.04
 * Reference    : 
 * Modified     : 2021.06.04 : LIJ : 헤더 수정
 * Modified     : 202112.16  : LEH : 소스 크린징
******************************************************************************************/

int TRIG = D9;                     // TRIG 핀 설정 (초음파 보내는 핀)
int ECHO = D8;                     // ECHO 핀 설정 (초음파 받는 핀)

int led_red    = D2;               // 빨강색 LED
int led_green  = D4;               // 초록색 LED
int led_yellow = D5;               // 노랑색 LED
 

void setup()
{
  Serial.begin(115200);            // 통신속도
  pinMode(TRIG, OUTPUT);           // 핀 모드 설정
  pinMode(ECHO, INPUT);            // 핀 모드 설정
  pinMode(led_red, OUTPUT);        // 핀 모드 설정
  pinMode(led_green, OUTPUT);      // 핀 모드 설정
  pinMode(led_yellow, OUTPUT);     // 핀 모드 설정
}


void loop()
{
  long duration, distance;
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
    
  duration = pulseIn (ECHO, HIGH);
  distance = duration * 17 / 1000; // 거리계산
  
  if(distance > 20){               // 물체와의 거리가 20cm 이상일때 초록 LED 켜기
    digitalWrite(led_green, HIGH); 
    digitalWrite(led_red, LOW);
    digitalWrite(led_yellow, LOW);
  }
  
  if(distance < 20 ){              // 물체와의 거리가 10이상 20미만일때 노랑 LED 켜기
    digitalWrite(led_yellow, HIGH);
    digitalWrite(led_green, LOW);
    digitalWrite(led_red, LOW);
  }
  
  if(distance < 10){               // 물체와의 거리가 10미만일때 빨강 LED 켜기
    digitalWrite(led_red, HIGH);
    digitalWrite(led_green, LOW);
    digitalWrite(led_yellow, LOW);
  }
}

//=========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//=========================================================================================
