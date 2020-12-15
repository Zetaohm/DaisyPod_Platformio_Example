This is an example project using libDaisy and DaisySP on the ElectroSmith Pod. 

Discussion here:
https://forum.electro-smith.com/t/libdaisy-daisysp-on-platformio/966


After installing, you will need to modify framework files that exist at packages/framework-stm32cubeh7

first, delete  packages/framework-stm32cubeh7/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_conf_template.c

then modify lines 126 and 129 in packages/framework-stm32cubeh7/Middlewares/ST/STM32_USB_Device_Library/Core/Inc/usbd_core.h 

change uint32_t size to uint16_t size for both function declarations. 

