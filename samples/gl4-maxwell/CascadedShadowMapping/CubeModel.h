//----------------------------------------------------------------------------------
// File:        gl4-maxwell/CascadedShadowMapping/CubeModel.h
// SDK Version: v2.0 
// Email:       gameworks@nvidia.com
// Site:        http://developer.nvidia.com/
//
// Copyright (c) 2014, NVIDIA CORPORATION. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//----------------------------------------------------------------------------------
#pragma once

#include <NvModel/NvModel.h>

class CubeModel : public NvModel
{
public:
    CubeModel()
        : NvModel()
    {
        const unsigned int positionsSize = 32;
        float positions[] = {
            -1.0f, -1.0f,  1.0f, 1.0f,
             1.0f, -1.0f,  1.0f, 1.0f,
            -1.0f,  1.0f,  1.0f, 1.0f,
             1.0f,  1.0f,  1.0f, 1.0f,
            -1.0f, -1.0f, -1.0f, 1.0f,
             1.0f, -1.0f, -1.0f, 1.0f,
            -1.0f,  1.0f, -1.0f, 1.0f,
             1.0f,  1.0f, -1.0f, 1.0f,
        };
        const unsigned int pIndicesSize = 36;
        uint32_t pIndices[] = {
            0, 1, 2, 2, 1, 3,   // f
            4, 6, 5, 5, 6, 7,   // b
            4, 0, 6, 6, 0, 2,   // l
            1, 5, 3, 3, 5, 7,   // r
            2, 3, 6, 6, 3, 7,   // t
            4, 5, 0, 0, 5, 1,   // b
        };
        const unsigned int normalsSize = 18;
        float normals[] = {
            0.0f, 0.0f, 1.0f,
            0.0f, 0.0f, -1.0f,
            -1.0f, 0.0f, 0.0f,
            1.0f, 0.0f, 0.0f,
            0.0f, 1.0f, 0.0f,
            0.0f, -1.0f, 0.0f,
        };
        const unsigned int nIndicesSize = 36;
        uint32_t nIndices[] = {
            0, 0, 0, 0, 0, 0,
            1, 1, 1, 1, 1, 1,
            2, 2, 2, 2, 2, 2,
            3, 3, 3, 3, 3, 3,
            4, 4, 4, 4, 4, 4,
            5, 5, 5, 5, 5, 5,
        };

        NvModel::_positions.insert(NvModel::_positions.begin(), positions, positions + positionsSize);
        NvModel::_pIndex.insert(NvModel::_pIndex.begin(), pIndices, pIndices + pIndicesSize);
        NvModel::_normals.insert(NvModel::_normals.begin(), normals, normals + normalsSize);
        NvModel::_nIndex.insert(NvModel::_nIndex.begin(), nIndices, nIndices + nIndicesSize);
        NvModel::_posSize = 4;
    }

    ~CubeModel()
    {
    }
};