#pragma once
#ifndef SKY_PASS_H
#define SKY_PASS_H

#include "RenderPhase.h"

#include "Shader.h"

#include <memory>

namespace Flux {
    class SkyPass : public RenderPhase
    {
    public:
        SkyPass();

        void Resize(const Size& windowSize) override;

        void render(RenderState& renderState, const Scene& scene) override;

    private:
        Shader skyboxShader;
        Shader skysphereShader;
    };
}

#endif /* SKY_PASS_H */
