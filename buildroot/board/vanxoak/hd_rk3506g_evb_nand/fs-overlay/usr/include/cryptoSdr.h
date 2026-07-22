#ifndef __CRYPTO_SDR_H__
#define	__CRYPTO_SDR_H__

#ifdef __cplusplus
 extern "C" {
#endif 

#include "stdio.h"
#include "unistd.h"
#include "stdint.h"

int CryptoSdr_Init(void);
void CryptoSdr_Close(void);
int CryptoSdr_AuthDev();
int CryptoSdr_UpdatePage(uint8_t page_id, uint8_t *page_data);
int CryptoSdr_ReadPage(uint8_t page_id, uint8_t *page_data);
int CryptoSdr_GetUsid(uint8_t *usid);
int CryptoSdr_CalMac(uint8_t *random, uint8_t  page_id, uint8_t *mac);

#ifdef __cplusplus
}
#endif

#endif /* end of __CRYPTO_SDR_H__ */