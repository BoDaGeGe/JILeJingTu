#include <graphics.h>
#include <Windows.h>
#include <MMSystem.h> // ����������Ҫ��ͷ�ļ�
#pragma comment(lib, "winmm.lib") // ���߱�����  ����winmm.lib���ļ�

int main(void)
{
	initgraph(600, 513);

	loadimage(0, _T("bg.jpg"));

	mciSendString(_T("play ���־���.mp3 repeat"), 0, 0, 0);

	system("pause");
	closegraph();
	return 0;

}
