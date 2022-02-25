#include <gui/parametres_screen/ParametresView.hpp>
#include "main.h"

#define MAX_WIFIINFO_SIZE 34	// 32 for SSID, 1 byte for quality value and 1 byte for array terminator

extern UART_HandleTypeDef huart1;

ParametresView::ParametresView()
{

}

void ParametresView::setupScreen()
{
    //listWifi.setHeight(0); //Compensates for the list height that is set to 200 by the designer

	// Send scan command to wifi module
	const char* cmd_scan = "SCAN:\n";
	HAL_UART_Transmit(&huart1, (uint8_t *)cmd_scan, 7, 150);

	// Read scan results
	uint8_t wifiInfo[MAX_WIFIINFO_SIZE];
	const uint8_t qualityIndex = MAX_WIFIINFO_SIZE - 2;

	for(uint8_t i = 0; i < sizeWifiList; i++)
	{
		while(HAL_UART_Receive(&huart1, (uint8_t *)wifiInfo, MAX_WIFIINFO_SIZE - 1, 500) != HAL_TIMEOUT)
		{
			uint8_t qualityValue = wifiInfo[qualityIndex] - '0'; // convert char to int

			if(qualityValue > '3' && qualityValue < '0')
				break; // invalid quality value

			wifiInfo[qualityIndex] = '\0';	// close array from this position to just read SSID
			listElements[i].setupListElement((char*)wifiInfo, wifiSignal[qualityValue]);
			listWifi.add(listElements[i]);
		}
	}
}

void ParametresView::tearDownScreen()
{
    
}
