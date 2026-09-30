/*
FUNCTION_NAME: FUN_05582ea8
ENTRY_POINT: 05582ea8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_15;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void FUN_05582ea8(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  
  puVar2 = PTR_DAT_067c9f00;
  if ((DAT_06bbf9d4 & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal_00001059_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c9f00);
    FUN_02f08768(
                UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_00001218_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(UnityEngine_UIElements_BackgroundPosition_PropertyBag_KeywordProperty_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ParseObjectAsync>d__15>__
                );
    DAT_06bbf9d4 = 1;
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar2;
  }
  if (**(long **)(lVar6 + 0xb8) != 0) {
    FUN_0337670c(**(long **)(lVar6 + 0xb8),
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ParseObjectAsync>d__15>__
                 ,*(undefined4 *)((long)param_1 + 0x7c),
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal_00001059_BurstDirectCall_TypeInfo
                );
    (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    lVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    lVar7 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    puVar2 = 
    UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_BurstDirectCall_TypeInfo
    ;
    if (lVar6 == lVar7) {
      lVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      if (lVar6 != 0) {
        uVar8 = *(undefined8 *)(lVar6 + 0x90);
        lVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x20) != 0)) {
          uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x40);
          lVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
          if ((lVar6 != 0) && (*(long *)(lVar6 + 0x20) != 0)) {
            iVar5 = FUN_04f6ca0c(uVar8,uVar11,1,*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x60),0);
            if (iVar5 != 0) {
              return;
            }
            lVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
            FUN_02a7da48();
            uVar8 = FUN_05567030(*(undefined8 *)(lVar6 + 0x90),0);
LAB_0558329c:
            uVar11 = thunk_FUN_02f6ef30(
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ParsePostValueAsync>d__4>__
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar8,uVar11);
          }
        }
      }
    }
    else {
      lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                  UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
                                );
      FUN_03abf108(lVar6,*(undefined8 *)puVar2);
      uVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      puVar2 = 
      UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo;
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar12 = *(long *)
                  UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
        ;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            iVar5 = uVar1 + 1;
            *(int *)(lVar6 + 0x18) = iVar5;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          }
          else {
            FUN_03abf904(lVar6,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            iVar5 = *(int *)(lVar6 + 0x18);
          }
          puVar4 = UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo;
          puVar3 = 
          UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_00001218_PostfixBurstDelegate_TypeInfo
          ;
          if (0 < iVar5) {
            iVar5 = 0;
            do {
              lVar7 = FUN_03abf644(lVar6,iVar5,*(undefined8 *)puVar4);
              if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x188), lVar7 == 0)) goto LAB_05583270;
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (0 < (int)uVar1) {
                uVar14 = 0;
                do {
                  if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
                  plVar13 = *(long **)(lVar7 + (long)(int)uVar14 * 8 + 0x20);
                  if (plVar13 == (long *)0x0) goto LAB_05583270;
                  lVar12 = (**(code **)(*plVar13 + 0x1b8))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
                  lVar9 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
                  if (lVar12 == lVar9) {
                    lVar12 = (**(code **)(*plVar13 + 0x188))
                                       (plVar13,*(undefined8 *)(*plVar13 + 400));
                    lVar9 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400))
                    ;
                    if (lVar12 != lVar9) {
                      lVar6 = (**(code **)(*param_1 + 0x188))
                                        (param_1,*(undefined8 *)(*param_1 + 400));
                      FUN_02a7da48();
                      uVar8 = FUN_05565ea4(*(undefined8 *)(lVar6 + 0x90),0);
                      goto LAB_0558329c;
                    }
                  }
                  uVar8 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0))
                  ;
                  uVar10 = FUN_03abfc98(lVar6,uVar8,*(undefined8 *)puVar3);
                  if ((uVar10 & 1) == 0) {
                    uVar8 = (**(code **)(*plVar13 + 0x1b8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
                    lVar12 = *(long *)(lVar6 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_05583270;
                    uVar1 = *(uint *)(lVar6 + 0x18);
                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                    }
                    else {
                      FUN_03abf904(lVar6,uVar8,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                  }
                  uVar1 = *(uint *)(lVar7 + 0x18);
                  uVar14 = uVar14 + 1;
                } while ((int)uVar14 < (int)uVar1);
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(lVar6 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_05583270:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


