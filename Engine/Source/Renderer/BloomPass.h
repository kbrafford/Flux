#pragma
#ifndef BLOOM_PASS_H
#define BLOOM_PASS_H

#include <Engine/Source/RenderPhase.h>

#include <Engine/Source/Shader.h>

#include <memory>

namespace Flux {
    class Texture;
    class Framebuffer;

    class BloomPass : public RenderPhase
    {
    public:
        BloomPass();

        void SetSource(const Texture* source);
        void SetTarget(const Framebuffer* target);

        void render(const Scene& scene) override;

    private:
        std::unique_ptr<Shader> shader;

        const Texture* source;
        const Framebuffer* target;
    };
}

#endif /* BLOOM_PASS_H */