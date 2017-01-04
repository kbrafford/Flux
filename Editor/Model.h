#pragma once
#ifndef MODEL_H
#define MODEL_H

#include <Engine/Source/Mesh.h>
#include <Engine/Source/Material.h>

#include <vector>

namespace Flux {
    class Model {
    public:
        std::vector<Mesh> meshes;
        std::vector<Material> materials;

        void addMesh(const Mesh& mesh);
        void addMaterial(const Material& material);
    };
}

#endif /* MODEL_H */