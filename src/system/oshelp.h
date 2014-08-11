/*
 * Copyright (C) 2014 LoDoMa
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *  http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OSHELP_H_
#define OSHELP_H_

#include "../meltdown.h"

#if defined(MELTDOWN_LINUX)
#include "linuxhelp.h"
#endif

namespace oshelp
{

bool fileExists(const char* fpath);

}

#endif /* OSHELP_H_ */
