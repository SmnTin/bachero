#ifndef BACHERO_ENGINE_PHYSICS_SURFACE
#define BACHERO_ENGINE_PHYSICS_SURFACE

namespace Engine::Physics {
    struct Surface {
        float restitution = 0.5;
        float friction = 0.5;
    };

    class SurfaceFactory {
    public:
        static Surface createIce() {
            return {0.1, 0.0};
        }

        static Surface createWood() {
            return {0.1, 0.8};
        }

        static Surface createMetal() {
            return {0.3, 0.3};
        }

        static Surface createConcrete() {
            return {0.0, 0.7};
        }

        static Surface createEmpty() {
            return {0.0, 0.0};
        }

        static Surface createBasic() {
            return {};
        }
    };
}

#endif //BACHERO_ENGINE_PHYSICS_SURFACE