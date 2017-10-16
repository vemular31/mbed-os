/* mbed Microcontroller Library
 * Copyright (c) 2016 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MBED_PRINTF_H
#define MBED_PRINTF_H

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Minimal printf
 *
 * Prints directly to stdio/UART without using malloc.
 * Doesn't suppoet any modifiers.
 *
 * Supports:
 *   %d: signed long int
 *   %u: unsigned long int
 *   %p: void* (e.g. 0x00123456)
 *   %s: string
 *   %X: unsigned char printed as hexadecimal number (e.g., FF)
 */
int mbed_printf(const char *format, ...);

/**
 * Minimal snprintf
 *
 * Prints directly to buffer without using malloc.
 * Doesn't suppoet any modifiers.
 *
 * Supports:
 *   %d: signed long int
 *   %u: unsigned long int
 *   %p: void* (e.g. 0x00123456)
 *   %s: string
 *   %X: unsigned char printed as hexadecimal number (e.g., FF)
 */
int mbed_snprintf(char* buffer, size_t length, const char* format, ...);

/**
 * Minimal printf
 *
 * Prints directly to stdio/UART without using malloc.
 * Doesn't suppoet any modifiers.
 *
 * Supports:
 *   %d: signed long int
 *   %u: unsigned long int
 *   %p: void* (e.g. 0x00123456)
 *   %s: string
 *   %X: unsigned char printed as hexadecimal number (e.g., FF)
 */
int mbed_vprintf(const char* format, va_list arguments);

/**
 * Minimal snprintf
 *
 * Prints directly to buffer without using malloc.
 * Doesn't suppoet any modifiers.
 *
 * Supports:
 *   %d: signed long int
 *   %u: unsigned long int
 *   %p: void* (e.g. 0x00123456)
 *   %s: string
 *   %X: unsigned char printed as hexadecimal number (e.g., FF)
 */
int mbed_vsnprintf(char* buffer, size_t length, const char* format, va_list arguments);

#ifdef __cplusplus
}
#endif

#endif // MBED_PRINTF_H
