/*
FUNCTION_NAME: FUN_09756524
ENTRY_POINT: 09756524
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_4;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_09756524(void)

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
  
  puVar4 = 
  Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
  ;
  puVar3 = 
  Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
  ;
  if ((DAT_0a5476cb & 1) == 0) {
    FUN_04447ba8(
                Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
                );
    FUN_04447ba8(
                Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
                );
    FUN_04447ba8(PTR_DAT_09f635d0);
    FUN_04447ba8(
                Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_AbductionStateBuilder>_TypeInfo
                );
    FUN_04447ba8(
                Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
                );
    FUN_04447ba8(
                Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
                );
    FUN_04447ba8(
                Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
                );
    FUN_04447ba8(System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_TypeInfo);
    FUN_04447ba8(System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_TypeInfo);
    FUN_04447ba8(
                Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
                );
    FUN_04447ba8(
                System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>_TypeInfo
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
    DAT_0a5476cb = 1;
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
    lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f635d0);
    FUN_0556c664(lVar10,uVar11,
                 *(undefined8 *)
                  Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_AbductionStateBuilder>_TypeInfo
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar10;
    thunk_FUN_044bb4b4(plVar6,lVar10);
    lVar7 = *(long *)puVar4;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  puVar3 = 
  Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
  ;
  lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar12 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar12 = thunk_FUN_0448520c(*(undefined8 *)
                                 System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>_TypeInfo
                               );
    FUN_06f7b274(lVar12,uVar11,
                 *(undefined8 *)
                  Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar6 = lVar12;
    thunk_FUN_044bb4b4(plVar6,lVar12);
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_054e57b8(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar3);
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
        lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f635d0);
        FUN_0556c664(lVar10,uVar11,
                     *(undefined8 *)
                      Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
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
                                     System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>_TypeInfo
                                   );
        FUN_06f7b274(lVar12,uVar11,
                     *(undefined8 *)
                      Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
                     ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
        *plVar6 = lVar12;
        thunk_FUN_044bb4b4(plVar6,lVar12);
      }
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      FUN_054e57b8(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar3);
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
          lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f635d0);
          FUN_0556c664(lVar10,uVar11,
                       *(undefined8 *)
                        System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_TypeInfo,0);
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
                                       System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>_TypeInfo
                                     );
          FUN_06f7b274(lVar12,uVar11,
                       *(undefined8 *)
                        System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_TypeInfo,0
                      );
          plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
          *plVar6 = lVar12;
          thunk_FUN_044bb4b4(plVar6,lVar12);
        }
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        FUN_054e57b8(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar3);
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


