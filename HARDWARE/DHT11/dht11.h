/*
 * @Author: AlanGolphi
 * @Date: 2020-05-11 19:02:07
 * @LastEditTime: 2020-12-21 21:04:59
 */
#ifndef __DHT11_H
#define __DHT11_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////

//��14�ĳ���13

#define DHT11_IO GPIOB
#define DHT11_PIN GPIO_Pin_13
//IO��������
#define DHT11_IO_IN()                \
    {                                \
        DHT11_IO->CRH &= 0XF0FFFFFF; \
        DHT11_IO->CRH |= 8 << 24;    \
    }
#define DHT11_IO_OUT()               \
    {                                \
        DHT11_IO->CRH &= 0XF0FFFFFF; \
        DHT11_IO->CRH |= 3 << 24;    \
    }
////IO��������
#define DHT11_DQ_OUT PBout(13) //���ݶ˿�	PA0
#define DHT11_DQ_IN PBin(13) //���ݶ˿�	PA0

u8 DHT11_Init(void); //��ʼ��DHT11
u8 DHT11_Read_Data(u8* temp, u8* humi); //��ȡ��ʪ��
u8 DHT11_Read_Byte(void); //����һ���ֽ�
u8 DHT11_Read_Bit(void); //����һ��λ
u8 DHT11_Check(void); //����Ƿ����DHT11
void DHT11_Rst(void); //��λDHT11
#endif
