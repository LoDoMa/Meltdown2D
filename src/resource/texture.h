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

#ifndef TEXTURE_H_
#define TEXTURE_H_

#include "resource.h"
#include "../meltdown.h"

class Texture: public Resource
{
public:
    Texture(const char* m_fpath);
    virtual ~Texture();

    virtual void bind();

    inline const char* getPath() const { return m_fpath; }
private:
    const char* m_fpath;
};



#if defined(MELTDOWN_OPENGL)

#include "GL/glew.h"

class TextureGL: public Texture
{
public:
    TextureGL(const char* path);
    ~TextureGL();

    void bind();
private:
    GLuint m_id;
};

#endif

#endif /* TEXTURE_H_ */
