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

#include "base.h"

#include <cstdio>

static resID tex1;

Engine::Engine()
: m_resman(0)
{
    
}

Engine::~Engine()
{
    
}

void Engine::start()
{
    engineInit();
    gameInit();
    run();
    gameDestroy();
    engineDestroy();
}

void Engine::engineInit()
{
    printf("engine stage - engine init - started\n");

    m_resman = new ResourceMan();

    printf("engine stage - engine init - finished\n");
}

void Engine::gameInit()
{
    printf("engine stage - game init - started\n");

    tex1 = m_resman->loadResource(ResourceMan::TEXTURE, "test 1");
    m_resman->loadResource(ResourceMan::TEXTURE, "test 2");
    
    printf("engine stage - game init - finished\n");
}

void Engine::run()
{
    printf("engine stage - run - started\n");

    m_resman->unloadResource(tex1);
    
    printf("engine stage - run - finished\n");
}

void Engine::gameDestroy()
{
    printf("engine stage - game destroy - started\n");
    
    printf("engine stage - game destroy - finished\n");
}

void Engine::engineDestroy()
{
    printf("engine stage - engine destroy - started\n");
    
    delete m_resman;

    printf("engine stage - engine destroy - finished\n");
}
