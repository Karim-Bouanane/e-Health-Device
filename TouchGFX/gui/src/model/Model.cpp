#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <stm32f4xx_hal.h>

extern ADC_HandleTypeDef hadc1;

Model::Model() : modelListener(0)
{

}

volatile uint16_t tickCounter = 0;

void Model::tick()
{
	// Read Temperature
	float voltageMV;

	if (++tickCounter % 60 == 0) // update on each 1 seconds = 60 ticks
	{
		HAL_ADC_Start(&hadc1);
		HAL_ADC_PollForConversion(&hadc1, 100);
		voltageMV = HAL_ADC_GetValue(&hadc1) * 0.7326 ; // VOUT = reading from ADC * (3000mV / 4096). ADC is 12 bits precision

		modelListener->updateTemp(voltageMV / 10);
		tickCounter = 0;
	}


	// Read ECG
	modelListener->updateECGGraph((uint16_t)voltageMV);

	// Read SpO2

	//modelListener->updateSpO2(voltage*0.0007326);


}
