// numberbaseball.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include "pch.h"
#include <iostream>

int main()
{
    srand(time(NULL));
    rand();

    int nCom[3], nUser[3];
    int ball = 0, strike = 0, out = 0;

    while (true) {
        for (int i = 0; i != 3; i++) {
            nCom[i] = rand() % 10;
        }
        if (nCom[0] != nCom[1] && nCom[1] != nCom[2] && nCom[0] != nCom[2])
            break;
    }

    cout << "[숫자야구]\n" << endl << "임의의 숫자 3개를 정하였습니다" << endl;

    while (strike != 3)
    {
        cout << "숫자 3개를 선택하여주세요: ";
        cin >> nUser[0] >> nUser[1] >> nUser[2];

        

        ball = 0, strike = 0, out = 0;

        for (int i = 0; i < 3; i++) {
            if (nUser[i] == nCom[i])
                strike++;
            else if (nUser[i] == nCom[(i + 1) % 3] || nUser[i] == nCom[(i + 2) % 3])
                ball++;
            else
                out++;
        }
        cout << "[결과]\t" << ball << "볼\t" << strike << "스트라이크\t" << out << "아웃" << endl;

        
    }
    cout << "숫자 3개 맞추셨습니다 ㅊㅊㅊㅊ" << endl;


    system("pause");
    /*srand(time(NULL));
    rand();
    int nCom1 = rand() % 10, nCom2 = rand() % 10, nCom3 = rand() % 10;
    while(nCom1 == nCom2 || nCom2 == nCom3 || nCom1 == nCom3)
        nCom1 = rand() % 10, nCom2 = rand() % 10, nCom3 = rand() % 10;
    cout << "[숫자야구]\n" << endl << "임의의 숫자 3개를 정하였습니다" << endl;

    int nPlayer1, nPlayer2, nPlayer3;
    int ball = 0, strike = 0, out = 0;

    while (strike != 3)
    {
        cout << "숫자 3개를 선택하여주세요: ";
        cin >> nPlayer1 >> nPlayer2 >> nPlayer3;

        if (nPlayer1 > 9 || nPlayer2 > 9 || nPlayer3 > 9) {
            cout << "장난치지 마세요" << endl;
            continue;
        }
        ball = 0, strike = 0, out = 0;

        if (nCom1 == nPlayer1)
            strike++;
        else if (nCom2 == nPlayer1 || nCom3 == nPlayer1)
            ball++;
        else
            out++;

        if (nCom2 == nPlayer2)
            strike++;
        else if (nCom1 == nPlayer2 || nCom3 == nPlayer2)
            ball++;
        else
            out++;

        if (nCom3 == nPlayer3)
            strike++;
        else if (nCom1 == nPlayer3 || nCom2 == nPlayer3)
            ball++;
        else
            out++;

        cout << "[결과]\t" << ball << "볼\t" << strike << "스트라이크\t" << out << "아웃" << endl;

    }
    
    cout << "숫자 3개 맞추셨습니다 ㅊㅊㅊㅊ" << endl;


    system("pause");*/
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
