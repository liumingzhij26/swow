/*
  +--------------------------------------------------------------------------+
  | Swow                                                                     |
  +--------------------------------------------------------------------------+
  | Licensed under the Apache License, Version 2.0 (the "License");          |
  | you may not use this file except in compliance with the License.         |
  | You may obtain a copy of the License at                                  |
  | http://www.apache.org/licenses/LICENSE-2.0                               |
  | Unless required by applicable law or agreed to in writing, software      |
  | distributed under the License is distributed on an "AS IS" BASIS,        |
  | WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. |
  | See the License for the specific language governing permissions and      |
  | limitations under the License. See accompanying LICENSE file.            |
  +--------------------------------------------------------------------------+
  | Author: Twosee <twosee@php.net>                                          |
  +--------------------------------------------------------------------------+
 */

#ifndef SWOW_DEBUG_H
#define SWOW_DEBUG_H
#ifdef __cplusplus
extern "C" {
#endif

#include "swow.h"

int swow_debug_module_init(INIT_FUNC_ARGS);

SWOW_API smart_str *swow_build_trace_as_smart_str(smart_str *str, HashTable *trace); SWOW_INTERNAL
SWOW_API zend_string *swow_build_trace_as_string(HashTable *trace);

SWOW_API HashTable *swow_get_trace(zend_long options, zend_long limit);
SWOW_API smart_str *swow_get_trace_as_smart_str(smart_str *str, zend_long options, zend_long limit); SWOW_INTERNAL
SWOW_API zend_string *swow_get_trace_as_string(zend_long options, zend_long limit);
SWOW_API HashTable *swow_get_trace_as_list(zend_long options, zend_long limit);

#ifdef __cplusplus
}
#endif
#endif /* SWOW_DEBUG_H */
