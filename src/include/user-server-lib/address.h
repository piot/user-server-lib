/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Peter Bjorklund. All rights reserved.
 *  Licensed under the MIT License. See LICENSE in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
#ifndef USER_SERVER_ADDRESS_H
#define USER_SERVER_ADDRESS_H

#if TORNADO_OS_WINDOWS
#include <WinSock2.h>
#include <Windows.h>
#else
#include <netinet/in.h>
#endif

typedef struct sockaddr_in NetworkAddress;
int networkAddressEqual(const NetworkAddress* a, const NetworkAddress* b);
const char* networkAddressToString(const NetworkAddress* self, char* temp, size_t maxCount);

#endif
