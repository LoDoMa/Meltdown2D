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

#include "oshelp.h"

#include <fstream>

namespace oshelp
{

bool fileExists(const char* fpath)
{
#if defined(OSHELP_NATIVE_FILEEXITS)
    return fileExists_fast(fpath);
#else
    std::ifstream fs(fpath);
    if (fs.good())
    {
        fs.close();
        return true;
    }
    else
        fs.close();
    return false;
#endif
}

}
