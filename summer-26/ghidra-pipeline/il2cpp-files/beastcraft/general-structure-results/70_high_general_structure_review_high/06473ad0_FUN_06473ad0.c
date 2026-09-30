/*
FUNCTION_NAME: FUN_06473ad0
ENTRY_POINT: 06473ad0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_10;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06473ad0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_48;
  
  puVar2 = 
  UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_StringCreationState_TypeInfo;
  if ((bRam0000000006e9c675 & 1) == 0) {
    FUN_02e3ca1c(UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Writer_Chunk_TypeInfo);
    FUN_02e3ca1c(Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_TypeInfo);
    FUN_02e3ca1c(
                Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_BurstDirectCall_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_StringCreationState_TypeInfo
                );
    FUN_02e3ca1c(
                Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate_TypeInfo
                );
    FUN_02e3ca1c(
                System_Threading_CancellationTokenSource_LinkedNCancellationTokenSource_<>c_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_CanvasScalerSettings_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_CanvasSettings_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                );
    FUN_02e3ca1c(System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                );
    FUN_02e3ca1c(
                System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a41508);
    FUN_02e3ca1c(
                System_Reactive_Concurrency_ConcurrencyAbstractionLayerImpl_FastPeriodicTimer_<>c_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a42ef0);
    bRam0000000006e9c675 = 1;
  }
  puVar3 = 
  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_BurstDirectCall_TypeInfo;
  puVar1 = UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Writer_Chunk_TypeInfo;
  local_48 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_04ae9b4c(param_1,param_2,0,*(undefined8 *)puVar1);
  FUN_064e4840(param_1,0,0);
  plVar7 = (long *)FUN_04ae8e30(param_1,*(undefined8 *)puVar3);
  puVar2 = 
  UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_CanvasScalerSettings_TypeInfo;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x248))(plVar7,0,*(undefined8 *)(*plVar7 + 0x250));
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar8 = *(long *)puVar2;
    }
    FUN_063b5a40(param_1,**(undefined8 **)(lVar8 + 0xb8),0);
    lVar8 = FUN_04ae8e30(param_1,*(undefined8 *)puVar3);
    if (lVar8 != 0) {
      FUN_063b5a40(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),0);
      puVar6 = System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
      puVar1 = PTR_DAT_06a41508;
      if (*(long *)(param_1 + 0x508) != 0) {
        FUN_063b5a40(*(long *)(param_1 + 0x508),
                     *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),0);
        uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar6);
        FUN_06473e78(uVar9,*(undefined8 *)puVar1);
        plVar7 = (long *)(param_1 + 0x548);
        *(undefined8 *)(param_1 + 0x548) = uVar9;
        thunk_FUN_02ee2be8(plVar7,uVar9);
        if (*(long *)(param_1 + 0x548) != 0) {
          FUN_063b36a4(*(long *)(param_1 + 0x548),
                       *(undefined8 *)
                        System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
                       ,0);
          if (*plVar7 != 0) {
            FUN_064e4840(*plVar7,1,0);
            puVar5 = 
            UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
            ;
            puVar4 = 
            UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_CanvasSettings_TypeInfo
            ;
            puVar1 = 
            Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate_TypeInfo
            ;
            if (*plVar7 != 0) {
              FUN_063b5a40(*plVar7,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),0);
              uVar10 = *(undefined8 *)(param_1 + 0x548);
              uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar4);
              FUN_05207864(uVar9,param_1,*(undefined8 *)puVar1,0);
              FUN_0392ed68(uVar10,uVar9,*(undefined8 *)puVar5);
              lVar8 = FUN_04ae8e30(param_1,*(undefined8 *)puVar3);
              puVar1 = PTR_DAT_06a42ef0;
              if (lVar8 != 0) {
                local_48 = *(undefined8 *)(lVar8 + 0x440);
                FUN_063bed9c(&local_48,*(undefined8 *)(param_1 + 0x548),0);
                uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar6);
                FUN_06473e78(uVar9,*(undefined8 *)puVar1);
                plVar7 = (long *)(param_1 + 0x550);
                *(undefined8 *)(param_1 + 0x550) = uVar9;
                thunk_FUN_02ee2be8(plVar7,uVar9);
                if (*(long *)(param_1 + 0x550) != 0) {
                  FUN_063b36a4(*(long *)(param_1 + 0x550),
                               *(undefined8 *)
                                System_Reactive_Concurrency_ConcurrencyAbstractionLayerImpl_FastPeriodicTimer_<>c_TypeInfo
                               ,0);
                  if (*plVar7 != 0) {
                    FUN_064e4840(*plVar7,1,0);
                    puVar1 = 
                    System_Threading_CancellationTokenSource_LinkedNCancellationTokenSource_<>c_TypeInfo
                    ;
                    if (*plVar7 != 0) {
                      FUN_063b5a40(*plVar7,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20)
                                   ,0);
                      uVar10 = *(undefined8 *)(param_1 + 0x550);
                      uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar4);
                      FUN_05207864(uVar9,param_1,*(undefined8 *)puVar1,0);
                      FUN_0392ed68(uVar10,uVar9,*(undefined8 *)puVar5);
                      lVar8 = FUN_04ae8e30(param_1,*(undefined8 *)puVar3);
                      if (lVar8 != 0) {
                        local_48 = *(undefined8 *)(lVar8 + 0x440);
                        FUN_063bed9c(&local_48,*plVar7,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


