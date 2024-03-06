#pragma comment(lib, "ws2_32.lib")
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <iostream>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <stdio.h>

int main() {
    WSADATA wsa;
    if(WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        return 1;
    }

    //원래의 IPv4 주소 출력
    const char* ipv4test = "192.168.30.84";
    printf("IPv4 주소: %s\n", ipv4test);

    //inet_addr() 함수 연습
    printf("IPv4 주소(변환 후) = 0x%x\n", inet_addr(ipv4test));

    //inet_ntoa() 함수 연습
    printf("IPv4 주소(다시 변환 후) = %s\n", inet_ntoa(ipv4num));

    printf("\n");

    WSACleanup();
    return 0;
}