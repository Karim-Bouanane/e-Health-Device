#include <gui/parametres_screen/ParametresView.hpp>
#include "main.h"

extern UART_HandleTypeDef huart2;

ParametresView::ParametresView()
{

}

void ParametresView::setupScreen()
{
    //listWifi.setHeight(0); //Compensates for the list height that is set to 200 by the designer

	// Scan wifi ap
	char* cmd_scan = "SCAN:\n";
	HAL_UART_Transmit(&huart2, (uint8_t *)cmd_scan, 7, 150);


	// Read Scan results

	/*
	char wifiAP[30];

	do{

		if(HAL_UART_Receive(&huart2, (uint8_t *)wifi++, 1, 500) == HAL_UART_STATE_TIMEOUT)
		{
			break;
		}


	}while((*wifi) == ':');
	*/


    listElements[0].setupListElement("ensiasstudent", "good");
    listElements[1].setupListElement("ensiasstudent", "good");
    listElements[2].setupListElement("ensiasstudent", "good");
    listElements[3].setupListElement("ensiasstudent", "good");
    listElements[4].setupListElement("ensiasstudent", "good");
    listElements[5].setupListElement("ensiasstudent", "good");
    listElements[6].setupListElement("ensiasstudent", "good");

    for (uint8_t i = 0; i < numberOfListElements; ++i)
    {
        listWifi.add(listElements[i]);
    }
}

void ParametresView::tearDownScreen()
{
    
}
