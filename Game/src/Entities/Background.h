#pragma once

namespace Engine
{
    class EntityManager;
    struct Texture;
}

namespace Game
{

    class Background
    {
    public:
        bool Init(Engine::EntityManager* entityManager_, Engine::TextureManager* textureManager_);
        void Update(float dt);
    };
}
