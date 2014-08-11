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

#include "resman.h"

#include <stdio.h>
#include "../meltdown.h"

#include "texture.h"
#include "sound.h"

ResourceMan::ResourceMan()
{
    m_idctr = 0;

    printf("resource manager created\n");
}

ResourceMan::~ResourceMan()
{
    printf("resource manager destroyed\n");
}

static Texture* newTexture(const char* fpath)
{
#if defined(MELTDOWN_OPENGL)
    return new TextureGL(fpath);
#endif
}

static Sound* newSound(const char* fpath)
{
    return new Sound(fpath);
}

resID ResourceMan::loadResource(ResourceType restype, const char* fpath)
{
    resID id = m_idctr++;

    Resource* res;
    switch(restype)
    {
    case TEXTURE:
        res = newTexture(fpath);
        break;
    case SOUND:
        res = newSound(fpath);
        break;
    }

    m_resources[id] = res;
    return id;
}

void ResourceMan::unloadResource(resID id)
{

}
