#define F_CPU 14745600UL
#include <avr/io.h>
#include <util/delay.h>

// 단일 문자 전송 함수
void putch(unsigned char data) {
	// 송신 가능할 때까지 대기
	while (!(UCSR0A & (1 << UDRE0)));
	UDR0 = data;
}

int main(void) {
	// 출력할 문자열
	unsigned char text[] = "Hello 3\r\n";
	unsigned char i;

	// ------------------- 포트 초기화 -------------------

	// TX 핀(PE1)을 HIGH로 설정하여 USART IDLE 상태 유지
	PORTE |= (1 << PE1);   // TX 기본값: HIGH
	DDRE |= (1 << PE1);    // PE1을 출력으로 설정

	// ------------------- 초기 지연 -------------------

	// MCU 부팅 후 터미널 연결될 시간을 확보 (중요)
	_delay_ms(1000);  // 💡 1초 지연 → 하이퍼터미널이 먼저 준비되게 함

	// ------------------- USART0 초기화 -------------------

	UCSR0A = 0x00;

	// 송신(TX) 및 수신(RX) 기능 활성화
	UCSR0B = (1 << RXEN0) | (1 << TXEN0);

	// 비동기 모드, 8비트 데이터, No parity, 1 Stop bit
	UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);

	// 보율 설정: 115200bps @ 14.7456MHz → UBRR = 7
	UBRR0H = 0;
	UBRR0L = 7;

	// ------------------- 문자열 반복 전송 -------------------

	while (1) {
		i = 0;

		// 문자열 끝까지 문자 전송
		while (text[i] != '\0') {
			putch(text[i++]);
		}

		_delay_ms(1000);  // 1초 간격으로 반복 출력
	}
}
