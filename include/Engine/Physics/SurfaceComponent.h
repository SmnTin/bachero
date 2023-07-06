#ifndef BACHERO_ENGINE_PHYSICS_SURFACE_COMPONENT
#define BACHERO_ENGINE_PHYSICS_SURFACE_COMPONENT

#include "Engine/ECS/ECS.h"
#include "Engine/Physics/Surface.h"

namespace Engine::Physics {
    class SurfaceComponent : public ECS::DataOnlyComponent {
    public:
        explicit SurfaceComponent(Surface surface_ = SurfaceFactory::createEmpty())
                : surface(surface_) {}
        Surface surface;
    };
}

#endif //BACHERO_ENGINE_PHYSICS_SURFACE_COMPONENT