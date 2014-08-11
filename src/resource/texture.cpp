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

#include "texture.h"

Texture::~Texture()
{

}

void Texture::bind()
{

}

#if defined(MELTDOWN_OPENGL)

TextureGL::TextureGL(const char* fpath)
{
    glGenTextures(1, &m_id);
}

TextureGL::~TextureGL()
{
    glDeleteTextures(1, &m_id);
}

void TextureGL::bind()
{
    glBindTexture(GL_TEXTURE_2D, m_id);
}

#endif
