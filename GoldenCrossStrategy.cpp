#include "stdafx.h"
#include "GoldenCrossStrategy.h"


//사용할 계좌번호와 비밀번호를 저장합니다.
CString AccountCode = "";
CString AccountPass = "";

//클래스 생성자입니다.
//일반적으로 클래스의 변수들을 초기화 합니다.
CGoldenCrossStrategy::CGoldenCrossStrategy()
{
	NearPrice = 100;
	TradeMoney = 10;


}

CGoldenCrossStrategy::~CGoldenCrossStrategy(void)
{
}

//전략이 최초 로딩될 때 처리할 작업을 정의 합니다.
//이 동작은 여러번 시작/중단 하더라도 한번만 수행됩니다.
//클래스 생성자에서는 변수초기화만 처리하고, 나머지 작업은 여기서 처리하는것을 권장합니다. 
void CGoldenCrossStrategy::OnLoad()
{

}

//전략이 시작되면 처리할 작업을 정의합니다.
//여러번 호출 될 수 있습니다.
void CGoldenCrossStrategy::OnStart()
{

}


//전략 수행이 중단되면 처리할 작업을 정의합니다.
//여러번 호출 될 수 있습니다.
void CGoldenCrossStrategy::OnStop()
{

}

//요청한 조회 데이터가 수신되면 호출 됩니다.
//프로토콜을 씨뿔뿔의 데이터 타입으로 변환하는 복잡한 과정은 packet.h / packet.cpp 를 참고하세요.
void CGoldenCrossStrategy::OnReceiveData(LPRECV_PACKET packet)
{
	if (packet->szTrCode == NAME_t1102)
	{
		StockSiseResponse stockSise = Packet::MakeStockSiseResponse(packet);

	}

	//CFuOrder(AccountCode, AccountPass, 10, 150000);
	//Request(
}

void CGoldenCrossStrategy::OnRealData(LPRECV_REAL_PACKET realpacket)
{

}

void CGoldenCrossStrategy::OnMessage(int reqId, const CString& msg)
{

}

void CGoldenCrossStrategy::OnTimeout()
{

}