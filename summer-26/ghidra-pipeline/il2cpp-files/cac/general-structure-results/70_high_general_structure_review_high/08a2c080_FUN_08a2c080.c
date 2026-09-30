/*
FUNCTION_NAME: FUN_08a2c080
ENTRY_POINT: 08a2c080
PROGRAM: cac-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


long FUN_08a2c080(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = UnityEngine_UIElements_BaseSlider<int>_TypeInfo;
  puVar2 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ScreenSpaceShadows_ScreenSpaceShadowsPostPass_PassData,_RasterGraphContext>_TypeInfo
  ;
  if ((DAT_096a4a2e & 1) == 0) {
    FUN_03f13384(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ScreenSpaceShadows_ScreenSpaceShadowsPostPass_PassData,_RasterGraphContext>_TypeInfo
                );
    FUN_03f13384(UnityEngine_UIElements_BaseSlider<float>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_UIR_BasicNodePool<TextureEntry>_TypeInfo);
    FUN_03f13384(Newtonsoft_Json_Utilities_BidirectionalDictionary<string,_object>_TypeInfo);
    FUN_03f13384(
                UnityEngine_ResourceManagement_ResourceProviders_BinaryAssetProvider<ContentCatalogData_Serializer>_TypeInfo
                );
    FUN_03f13384(
                Unity_XR_CoreUtils_Bindings_Variables_BindableEnum<NearFarInteractor_Region>_TypeInfo
                );
    FUN_03f13384(
                Unity_XR_CoreUtils_Bindings_Variables_BindableEnum<XRInputModalityManager_InputMode>_TypeInfo
                );
    FUN_03f13384(
                Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<AffordanceStateData>_TypeInfo
                );
    FUN_03f13384(Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<bool>_TypeInfo);
    FUN_03f13384(Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<Color>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_BaseSlider<int>_TypeInfo);
    FUN_03f13384(Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>_TypeInfo);
    FUN_03f13384(Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float>_TypeInfo);
    FUN_03f13384(PTR_DAT_091551b8);
    FUN_03f13384(Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float2>_TypeInfo);
    FUN_03f13384(PTR_DAT_091163a0);
    FUN_03f13384(Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float3>_TypeInfo);
    FUN_03f13384(PTR_DAT_0912a038);
    FUN_03f13384(PTR_DAT_0911f0c0);
    FUN_03f13384(Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float4>_TypeInfo);
    DAT_096a4a2e = 1;
  }
  puVar4 = Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float4>_TypeInfo;
  puVar1 = PTR_DAT_0911f0c0;
  lVar5 = FUN_03f13470(*(undefined8 *)puVar2,4);
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03f6fea8(lVar7);
    lVar7 = *(long *)puVar3;
  }
  puVar8 = *(undefined8 **)(lVar7 + 0xb8);
  uVar9 = *(undefined8 *)puVar4;
  uVar10 = *(undefined8 *)puVar1;
  lVar11 = puVar8[1];
  if (lVar11 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(lVar7);
      puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_03f4e68c(*(undefined8 *)
                                 UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>_TypeInfo);
    FUN_05055d38(lVar11,uVar12,
                 *(undefined8 *)UnityEngine_UIElements_UIR_BasicNodePool<TextureEntry>_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar11;
    thunk_FUN_03f86000(plVar6,lVar11);
    lVar7 = *(long *)puVar3;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03f6fea8(lVar7);
    lVar7 = *(long *)puVar3;
  }
  puVar2 = UnityEngine_UIElements_BaseSlider<float>_TypeInfo;
  puVar8 = *(undefined8 **)(lVar7 + 0xb8);
  lVar13 = puVar8[2];
  if (lVar13 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(lVar7);
      puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar13 = thunk_FUN_03f4e68c(*(undefined8 *)
                                 Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>_TypeInfo
                               );
    FUN_06b922fc(lVar13,uVar12,
                 *(undefined8 *)
                  Newtonsoft_Json_Utilities_BidirectionalDictionary<string,_object>_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    *plVar6 = lVar13;
    thunk_FUN_03f86000(plVar6,lVar13);
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_04fcec04(&local_70,uVar10,uVar9,lVar11,lVar13,*(undefined8 *)puVar2);
  puVar4 = Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float3>_TypeInfo;
  puVar1 = PTR_DAT_0912a038;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x28) = uStack_68;
    *(undefined8 *)(lVar5 + 0x20) = local_70;
    *(undefined8 *)(lVar5 + 0x38) = uStack_58;
    *(undefined8 *)(lVar5 + 0x30) = uStack_60;
    thunk_FUN_03f86000(lVar5 + 0x20,0);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      lVar7 = *(long *)puVar3;
    }
    puVar8 = *(undefined8 **)(lVar7 + 0xb8);
    uVar9 = *(undefined8 *)puVar4;
    uVar10 = *(undefined8 *)puVar1;
    lVar11 = puVar8[3];
    if (lVar11 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar12 = *puVar8;
      lVar11 = thunk_FUN_03f4e68c(*(undefined8 *)
                                   UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>_TypeInfo);
      FUN_05055d38(lVar11,uVar12,
                   *(undefined8 *)
                    UnityEngine_ResourceManagement_ResourceProviders_BinaryAssetProvider<ContentCatalogData_Serializer>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      *plVar6 = lVar11;
      thunk_FUN_03f86000(plVar6,lVar11);
      lVar7 = *(long *)puVar3;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      lVar7 = *(long *)puVar3;
    }
    puVar8 = *(undefined8 **)(lVar7 + 0xb8);
    lVar13 = puVar8[4];
    if (lVar13 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar12 = *puVar8;
      lVar13 = thunk_FUN_03f4e68c(*(undefined8 *)
                                   Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>_TypeInfo
                                 );
      FUN_06b922fc(lVar13,uVar12,
                   *(undefined8 *)
                    Unity_XR_CoreUtils_Bindings_Variables_BindableEnum<NearFarInteractor_Region>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
      *plVar6 = lVar13;
      thunk_FUN_03f86000(plVar6,lVar13);
    }
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    FUN_04fcec04(&local_70,uVar10,uVar9,lVar11,lVar13,*(undefined8 *)puVar2);
    puVar4 = Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float>_TypeInfo;
    puVar1 = PTR_DAT_091551b8;
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar5 + 0x48) = uStack_68;
      *(undefined8 *)(lVar5 + 0x40) = local_70;
      *(undefined8 *)(lVar5 + 0x58) = uStack_58;
      *(undefined8 *)(lVar5 + 0x50) = uStack_60;
      thunk_FUN_03f86000(lVar5 + 0x40,0);
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar7 = *(long *)puVar3;
      }
      puVar8 = *(undefined8 **)(lVar7 + 0xb8);
      uVar9 = *(undefined8 *)puVar4;
      uVar10 = *(undefined8 *)puVar1;
      lVar11 = puVar8[5];
      if (lVar11 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
          puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar12 = *puVar8;
        lVar11 = thunk_FUN_03f4e68c(*(undefined8 *)
                                     UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>_TypeInfo);
        FUN_05055d38(lVar11,uVar12,
                     *(undefined8 *)
                      Unity_XR_CoreUtils_Bindings_Variables_BindableEnum<XRInputModalityManager_InputMode>_TypeInfo
                     ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
        *plVar6 = lVar11;
        thunk_FUN_03f86000(plVar6,lVar11);
        lVar7 = *(long *)puVar3;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar7 = *(long *)puVar3;
      }
      puVar8 = *(undefined8 **)(lVar7 + 0xb8);
      lVar13 = puVar8[6];
      if (lVar13 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
          puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar12 = *puVar8;
        lVar13 = thunk_FUN_03f4e68c(*(undefined8 *)
                                     Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>_TypeInfo
                                   );
        FUN_06b922fc(lVar13,uVar12,
                     *(undefined8 *)
                      Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<AffordanceStateData>_TypeInfo
                     ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
        *plVar6 = lVar13;
        thunk_FUN_03f86000(plVar6,lVar13);
      }
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      FUN_04fcec04(&local_70,uVar10,uVar9,lVar11,lVar13,*(undefined8 *)puVar2);
      puVar4 = Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float2>_TypeInfo;
      puVar1 = PTR_DAT_091163a0;
      if (2 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x68) = uStack_68;
        *(undefined8 *)(lVar5 + 0x60) = local_70;
        *(undefined8 *)(lVar5 + 0x78) = uStack_58;
        *(undefined8 *)(lVar5 + 0x70) = uStack_60;
        thunk_FUN_03f86000(lVar5 + 0x60,0);
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
          lVar7 = *(long *)puVar3;
        }
        puVar8 = *(undefined8 **)(lVar7 + 0xb8);
        uVar9 = *(undefined8 *)puVar4;
        uVar10 = *(undefined8 *)puVar1;
        lVar11 = puVar8[7];
        if (lVar11 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
            puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar12 = *puVar8;
          lVar11 = thunk_FUN_03f4e68c(*(undefined8 *)
                                       UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>_TypeInfo
                                     );
          FUN_05055d38(lVar11,uVar12,
                       *(undefined8 *)
                        Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<bool>_TypeInfo,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
          *plVar6 = lVar11;
          thunk_FUN_03f86000(plVar6,lVar11);
          lVar7 = *(long *)puVar3;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
          lVar7 = *(long *)puVar3;
        }
        puVar8 = *(undefined8 **)(lVar7 + 0xb8);
        lVar13 = puVar8[8];
        if (lVar13 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
            puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar12 = *puVar8;
          lVar13 = thunk_FUN_03f4e68c(*(undefined8 *)
                                       Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>_TypeInfo
                                     );
          FUN_06b922fc(lVar13,uVar12,
                       *(undefined8 *)
                        Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<Color>_TypeInfo,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
          *plVar6 = lVar13;
          thunk_FUN_03f86000(plVar6,lVar13);
        }
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        FUN_04fcec04(&local_70,uVar10,uVar9,lVar11,lVar13,*(undefined8 *)puVar2);
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar5 + 0x88) = uStack_68;
          *(undefined8 *)(lVar5 + 0x80) = local_70;
          *(undefined8 *)(lVar5 + 0x98) = uStack_58;
          *(undefined8 *)(lVar5 + 0x90) = uStack_60;
          thunk_FUN_03f86000(lVar5 + 0x80,0);
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f13634();
}


