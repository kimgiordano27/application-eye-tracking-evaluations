/*
FUNCTION_NAME: FUN_09758724
ENTRY_POINT: 09758724
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6
*/


long FUN_09758724(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = UnityEngine_ResourceManagement_ChainOperationTypelessDepedency<SceneInstance>_TypeInfo;
  puVar3 = System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<ulong>_TypeInfo;
  if ((DAT_0a5476e0 & 1) == 0) {
    FUN_04447ba8(
                System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<ulong>_TypeInfo
                );
    FUN_04447ba8(UnityEngine_UIElements_ChangeEvent<bool>_TypeInfo);
    FUN_04447ba8(UnityEngine_UIElements_ChangeEvent<float>_TypeInfo);
    FUN_04447ba8(UnityEngine_UIElements_ChangeEvent<string>_TypeInfo);
    FUN_04447ba8(
                Unity_Services_Lobbies_ChangedOrRemovedLobbyValue<Dictionary<string,_ChangedOrRemovedLobbyValue<DataObject>>>_TypeInfo
                );
    FUN_04447ba8(
                Unity_Services_Lobbies_ChangedOrRemovedLobbyValue<Dictionary<string,_ChangedOrRemovedLobbyValue<PlayerDataObject>>>_TypeInfo
                );
    FUN_04447ba8(Unity_Services_Lobbies_ChangedOrRemovedLobbyValue<DataObject>_TypeInfo);
    FUN_04447ba8(Unity_Services_Lobbies_ChangedOrRemovedLobbyValue<PlayerDataObject>_TypeInfo);
    FUN_04447ba8(IngameDebugConsole_CircularBuffer<string>_TypeInfo);
    FUN_04447ba8(
                UnityEngine_ResourceManagement_ChainOperationTypelessDepedency<SceneInstance>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Collections_CircularBuffer<ValueTuple<Quaternion,_float>>_TypeInfo
                );
    FUN_04447ba8(PTR_DAT_09f40400);
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberPostPassData,_RasterGraphContext>_TypeInfo
                );
    FUN_04447ba8(System_Dynamic_Utils_CacheDict<Type,_MethodInfo>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f3c0c0);
    FUN_04447ba8(PTR_DAT_09f3c0c8);
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberSetupBloomPassData,_RasterGraphContext>_TypeInfo
                );
    DAT_0a5476e0 = 1;
  }
  puVar2 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberSetupBloomPassData,_RasterGraphContext>_TypeInfo
  ;
  puVar1 = PTR_DAT_09f3c0c8;
  lVar5 = FUN_04447c90(*(undefined8 *)puVar3,3);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  uVar8 = *(undefined8 *)puVar2;
  uVar9 = *(undefined8 *)puVar1;
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0448520c(*(undefined8 *)UnityEngine_UIElements_ChangeEvent<float>_TypeInfo);
    FUN_0556c7cc(lVar10,uVar11,*(undefined8 *)UnityEngine_UIElements_ChangeEvent<string>_TypeInfo,0)
    ;
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar10;
    thunk_FUN_044bb4b4(plVar6,lVar10);
    lVar7 = *(long *)puVar4;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  puVar3 = UnityEngine_UIElements_ChangeEvent<bool>_TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar12 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar12 = thunk_FUN_0448520c(*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_Collections_CircularBuffer<ValueTuple<Quaternion,_float>>_TypeInfo
                               );
    FUN_06f7b33c(lVar12,uVar11,
                 *(undefined8 *)
                  Unity_Services_Lobbies_ChangedOrRemovedLobbyValue<Dictionary<string,_ChangedOrRemovedLobbyValue<DataObject>>>_TypeInfo
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar6 = lVar12;
    thunk_FUN_044bb4b4(plVar6,lVar12);
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_054e5818(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar3);
  puVar2 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberPostPassData,_RasterGraphContext>_TypeInfo
  ;
  puVar1 = PTR_DAT_09f3c0c0;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x28) = uStack_68;
      *(undefined8 *)(lVar5 + 0x20) = local_70;
      *(undefined8 *)(lVar5 + 0x38) = uStack_58;
      *(undefined8 *)(lVar5 + 0x30) = uStack_60;
      thunk_FUN_044bb4b4(lVar5 + 0x20,0);
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar4;
      }
      uVar8 = *(undefined8 *)puVar2;
      uVar9 = *(undefined8 *)puVar1;
      lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
      if (lVar10 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar4;
        }
        uVar11 = **(undefined8 **)(lVar7 + 0xb8);
        lVar10 = thunk_FUN_0448520c(*(undefined8 *)
                                     UnityEngine_UIElements_ChangeEvent<float>_TypeInfo);
        FUN_0556c7cc(lVar10,uVar11,
                     *(undefined8 *)
                      Unity_Services_Lobbies_ChangedOrRemovedLobbyValue<Dictionary<string,_ChangedOrRemovedLobbyValue<PlayerDataObject>>>_TypeInfo
                     ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
        *plVar6 = lVar10;
        thunk_FUN_044bb4b4(plVar6,lVar10);
        lVar7 = *(long *)puVar4;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar4;
      }
      lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
      if (lVar12 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar4;
        }
        uVar11 = **(undefined8 **)(lVar7 + 0xb8);
        lVar12 = thunk_FUN_0448520c(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_Collections_CircularBuffer<ValueTuple<Quaternion,_float>>_TypeInfo
                                   );
        FUN_06f7b33c(lVar12,uVar11,
                     *(undefined8 *)
                      Unity_Services_Lobbies_ChangedOrRemovedLobbyValue<DataObject>_TypeInfo,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
        *plVar6 = lVar12;
        thunk_FUN_044bb4b4(plVar6,lVar12);
      }
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      FUN_054e5818(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar3);
      puVar2 = System_Dynamic_Utils_CacheDict<Type,_MethodInfo>_TypeInfo;
      puVar1 = PTR_DAT_09f40400;
      if (1 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x48) = uStack_68;
        *(undefined8 *)(lVar5 + 0x40) = local_70;
        *(undefined8 *)(lVar5 + 0x58) = uStack_58;
        *(undefined8 *)(lVar5 + 0x50) = uStack_60;
        thunk_FUN_044bb4b4(lVar5 + 0x40,0);
        lVar7 = *(long *)puVar4;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar4;
        }
        uVar8 = *(undefined8 *)puVar2;
        uVar9 = *(undefined8 *)puVar1;
        lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
        if (lVar10 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar7 = *(long *)puVar4;
          }
          uVar11 = **(undefined8 **)(lVar7 + 0xb8);
          lVar10 = thunk_FUN_0448520c(*(undefined8 *)
                                       UnityEngine_UIElements_ChangeEvent<float>_TypeInfo);
          FUN_0556c7cc(lVar10,uVar11,
                       *(undefined8 *)
                        Unity_Services_Lobbies_ChangedOrRemovedLobbyValue<PlayerDataObject>_TypeInfo
                       ,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
          *plVar6 = lVar10;
          thunk_FUN_044bb4b4(plVar6,lVar10);
          lVar7 = *(long *)puVar4;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar4;
        }
        lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
        if (lVar12 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar7 = *(long *)puVar4;
          }
          uVar11 = **(undefined8 **)(lVar7 + 0xb8);
          lVar12 = thunk_FUN_0448520c(*(undefined8 *)
                                       UnityEngine_XR_Interaction_Toolkit_Utilities_Collections_CircularBuffer<ValueTuple<Quaternion,_float>>_TypeInfo
                                     );
          FUN_06f7b33c(lVar12,uVar11,
                       *(undefined8 *)IngameDebugConsole_CircularBuffer<string>_TypeInfo,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
          *plVar6 = lVar12;
          thunk_FUN_044bb4b4(plVar6,lVar12);
        }
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        FUN_054e5818(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar3);
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x68) = uStack_68;
          *(undefined8 *)(lVar5 + 0x60) = local_70;
          *(undefined8 *)(lVar5 + 0x78) = uStack_58;
          *(undefined8 *)(lVar5 + 0x70) = uStack_60;
          thunk_FUN_044bb4b4(lVar5 + 0x60,0);
          return lVar5;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


