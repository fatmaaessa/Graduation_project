/*********************************************/
/*********************************************/
/*********  Author: FatmaEssa        *********/
/*********  Layer: MCAL              *********/
/*********  SWC: SPI_private         *********/
/*********  Version: 1.00            *********/
/*********************************************/

#ifndef SPI_PRIVATE_H
#define SPI_PRIVATE_H

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#define SPI1_BASE_ADD   (u32)(0x40013000)
/******************************************************************************************/


typedef struct
{
	volatile    u32 CR1;
	//volatile 	u16 Reserved1;
	volatile 	u32 CR2;
	//volatile 	u16 Reserved2;
	volatile 	u32 SR;
	//volatile 	u16 Reserved3;
	volatile 	u32 DR;
	//volatile 	u16 Reserved4;
	volatile 	u32 CRCPR;
	//volatile 	u16 Reserved5;
	volatile 	u32 RXCRCR;
	//volatile 	u16 Reserved6;
	volatile 	u32 TXCRCR;
	//volatile 	u16 Reserved7;
	volatile 	u32 I2SCFGR;
	//volatile 	u16 Reserved8;
	volatile 	u32 I2SPR;

}SPI1_RegMap_t;

#define SPI1 ((volatile SPI1_RegMap_t*)(SPI1_BASE_ADD ))

/******************************************************************************************/


#define  SPI_CHPA                   0   // SPI_Clock Phase_PIN
#define  SPI_CPOL                   1   // SPI_Clock polarity_PIN
#define  SPI_MSTR                   2   // SPI_Master selection_PIN
#define  SPI_BR0                    3   // SPI_Baud rate control0_PIN
#define  SPI_BR1                    4   // SPI_Baud rate control1_PIN
#define  SPI_BR2                    5   // SPI_Baud rate control2_PIN
#define  SPI_SPE                    6   // SPI_enable_PIN
#define  SPI_LSBFIRST               7   // SPI_Frame format_PIN
#define  SPI_SSI                    8   // SPI_ Internal slave select_PIN
#define  SPI_SSM                    9   // SPI_Software slave management_PIN
#define  RXONLY                     10  // SPI_Receive only_PIN
#define  SPI_DFF                    11  // SPI_ Data frame format_PIN
/******************************************************************************************/

#define  SPI1_TXEIE                 7   //SPI Tx buffer empty interrupt enable
#define  SPI1_RXNEIE                6   //SPI RX buffer not empty interrupt enable

/******************************************************************************************/

#define  SPI_BSY                    7   //SPI Busy flag

#endif
