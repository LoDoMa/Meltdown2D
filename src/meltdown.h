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

#ifndef MELTDOWN_H_
#define MELTDOWN_H_

#include <exception>

// #define MELTDOWN_WINDOWS 1
   #define MELTDOWN_LINUX 1
// #define MELTDOWN_OSX 1
// #define MELTDOWN_XBOX 1
// #define MELTDOWN_XBOX360 1
// #define MELTDOWN_XBOXONE 1
// #define MELTDOWN_PS 1
// #define MELTDOWN_PS3 1
// #define MELTDOWN_ANDROID 1
// #define MELTDOWN_IOS 1

   #define MELTDOWN_OPENGL 1
// #define MELTDOWN_GLES 1
// #define MELTDOWN_DIRECTX 1

class LimeException: public std::exception
{
public:
    LimeException(const char* msg);
    virtual ~LimeException() throw();

    const char* what() const throw();
private:
    const char* m_msg;
};

#endif /* MELTDOWN_H_ */
