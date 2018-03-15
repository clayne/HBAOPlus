/* 
* Copyright (c) 2008-2018, NVIDIA CORPORATION. All rights reserved. 
* 
* NVIDIA CORPORATION and its licensors retain all intellectual property 
* and proprietary rights in and to this software, related documentation 
* and any modifications thereto. Any use, reproduction, disclosure or 
* distribution of this software and related documentation without an express 
* license agreement from NVIDIA CORPORATION is strictly prohibited. 
*/

#if SUPPORT_D3D11
#include "Renderer_DX11.h"
#endif

#if SUPPORT_D3D12
#include "Renderer_DX12.h"
#endif

//--------------------------------------------------------------------------------
inline static
GFSDK_SSAO_CustomHeap InitNewDelete(const GFSDK_SSAO_CustomHeap* pCustomHeap)
{
    GFSDK_SSAO_CustomHeap NewDelete;

    if (pCustomHeap)
    {
        NewDelete = *pCustomHeap;
    }
    else
    {
        NewDelete.new_ = ::operator new;
        NewDelete.delete_ = ::operator delete;
    }

    return NewDelete;
}

//--------------------------------------------------------------------------------
inline static
void* AllocateAndZeroMemory(const GFSDK_SSAO_CustomHeap& NewDelete, std::size_t SizeInBytes)
{
    void *pStorage = NewDelete.new_(SizeInBytes);
    if (!pStorage)
    {
        return NULL;
    }

    memset(pStorage, 0, SizeInBytes);

    return pStorage;
}

#if SUPPORT_D3D11

//--------------------------------------------------------------------------------
GFSDK_SSAO_DECL(GFSDK_SSAO_Status, GFSDK_SSAO_CreateContext_D3D11,
    ID3D11Device* pD3DDevice,
    GFSDK_SSAO_Context_D3D11** ppAOContext,
    const GFSDK_SSAO_CustomHeap* pCustomHeap,
    GFSDK_SSAO_Version HeaderVersion)
{
    if (!ppAOContext)
    {
        return GFSDK_SSAO_NULL_ARGUMENT;
    }

    GFSDK_SSAO_CustomHeap NewDelete = InitNewDelete(pCustomHeap);

    void *pStorage = AllocateAndZeroMemory(NewDelete, sizeof(GFSDK::SSAO::D3D11::Renderer));
    if (!pStorage)
    {
        return GFSDK_SSAO_MEMORY_ALLOCATION_FAILED;
    }

    GFSDK::SSAO::D3D11::Renderer* pAOContext = new(pStorage) GFSDK::SSAO::D3D11::Renderer(NewDelete);

    *ppAOContext = pAOContext;

    return pAOContext->Create(pD3DDevice, HeaderVersion);
}

#endif

#if SUPPORT_D3D12

//--------------------------------------------------------------------------------
GFSDK_SSAO_DECL(GFSDK_SSAO_Status, GFSDK_SSAO_CreateContext_D3D12,
    ID3D12Device* pD3DDevice,
    GFSDK_SSAO_UINT NodeMask,
    const GFSDK_SSAO_DescriptorHeaps_D3D12& DescriptorHeaps,
    GFSDK_SSAO_Context_D3D12** ppAOContext,
    const GFSDK_SSAO_CustomHeap* pCustomHeap,
    GFSDK_SSAO_Version HeaderVersion)
{
    if (!ppAOContext)
    {
        return GFSDK_SSAO_NULL_ARGUMENT;
    }

    GFSDK_SSAO_CustomHeap NewDelete = InitNewDelete(pCustomHeap);

    void *pStorage = AllocateAndZeroMemory(NewDelete, sizeof(GFSDK::SSAO::D3D12::Renderer));
    if (!pStorage)
    {
        return GFSDK_SSAO_MEMORY_ALLOCATION_FAILED;
    }

    GFSDK::SSAO::D3D12::Renderer* pAOContext = new(pStorage) GFSDK::SSAO::D3D12::Renderer(NewDelete);

    *ppAOContext = pAOContext;

    return pAOContext->Create(pD3DDevice, NodeMask, DescriptorHeaps, HeaderVersion);
}

#endif

GFSDK_SSAO_DECL(GFSDK_SSAO_Status, GFSDK_SSAO_GetVersion,
    GFSDK_SSAO_Version* pVersion)
{
    if (!pVersion)
    {
        return GFSDK_SSAO_NULL_ARGUMENT;
    }

    GFSDK::SSAO::BuildVersion BuildVersion;
    *pVersion = BuildVersion;

    return GFSDK_SSAO_OK;
}
