/*
FUNCTION_NAME: FUN_06468fc4
ENTRY_POINT: 06468fc4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06468fc4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = 
  UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_EaseAttachBurst_00000F8F_BurstDirectCall_TypeInfo
  ;
  puVar1 = UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_<>c_TypeInfo;
  if ((bRam0000000006e9c656 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a2f488);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_EaseAttachBurst_00000F8F_PostfixBurstDelegate_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_StepSmoothingBurst_00000F90_BurstDirectCall_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a70058);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_StepSmoothingBurst_00000F90_PostfixBurstDelegate_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a70118);
    FUN_02e3ca1c(PTR_DAT_06a6fb28);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_InputSourceMode_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_EaseAttachBurst_00000F8F_BurstDirectCall_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_TypeInfo
                );
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_<>c_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a70130);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupMemberAndOverridesPair_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupNames_TypeInfo
                );
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__98_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a70108);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D71_BurstDirectCall_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D71_PostfixBurstDelegate_TypeInfo
                );
    bRam0000000006e9c656 = 1;
  }
  lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
  FUN_048a9bd4(lVar4,*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_06a70130;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) =
         *(undefined8 *)
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupMemberAndOverridesPair_TypeInfo
    ;
    thunk_FUN_02ee2be8();
    *(undefined4 *)(lVar4 + 0x40) = 0;
    *(long *)(param_1 + 0x90) = lVar4;
    thunk_FUN_02ee2be8((long *)(param_1 + 0x90),lVar4);
    lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
    FUN_063fb85c(lVar4,0);
    puVar1 = PTR_DAT_06a2f488;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) =
           *(undefined8 *)
            UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_TypeInfo
      ;
      thunk_FUN_02ee2be8();
      lVar5 = FUN_02e3cb08(*(undefined8 *)puVar1,2);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined8 *)(lVar5 + 0x20) =
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D71_BurstDirectCall_TypeInfo
          ;
          thunk_FUN_02ee2be8((undefined8 *)(lVar5 + 0x20));
          puVar1 = PTR_DAT_06a6fb28;
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar5 + 0x28) =
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_TypeInfo
            ;
            thunk_FUN_02ee2be8();
            FUN_063fa208(lVar4,lVar5,0);
            *(undefined4 *)(lVar4 + 0x40) = 0x16;
            *(long *)(param_1 + 0x98) = lVar4;
            thunk_FUN_02ee2be8((long *)(param_1 + 0x98),lVar4);
            lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
            FUN_063ef768(lVar4,0);
            puVar3 = 
            UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_TypeInfo
            ;
            puVar2 = 
            UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_InputSourceMode_TypeInfo
            ;
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x10) =
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_TypeInfo;
              thunk_FUN_02ee2be8();
              *(undefined1 *)(lVar4 + 0x40) = 0;
              *(long *)(param_1 + 0xa0) = lVar4;
              thunk_FUN_02ee2be8((long *)(param_1 + 0xa0),lVar4);
              lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
              FUN_048a9bd4(lVar4,*(undefined8 *)puVar2);
              puVar3 = 
              UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_TypeInfo
              ;
              puVar2 = 
              UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_TypeInfo
              ;
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 0x10) =
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D71_PostfixBurstDelegate_TypeInfo
                ;
                thunk_FUN_02ee2be8();
                *(undefined4 *)(lVar4 + 0x40) = 1;
                *(long *)(param_1 + 0xa8) = lVar4;
                thunk_FUN_02ee2be8((long *)(param_1 + 0xa8),lVar4);
                lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
                FUN_048a9bd4(lVar4,*(undefined8 *)puVar2);
                if (lVar4 != 0) {
                  *(undefined8 *)(lVar4 + 0x10) =
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__98_TypeInfo
                  ;
                  thunk_FUN_02ee2be8();
                  *(undefined4 *)(lVar4 + 0x40) = 0;
                  *(long *)(param_1 + 0xb0) = lVar4;
                  thunk_FUN_02ee2be8((long *)(param_1 + 0xb0),lVar4);
                  lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
                  FUN_063ef768(lVar4,0);
                  if (lVar4 != 0) {
                    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_06a70108;
                    thunk_FUN_02ee2be8();
                    *(undefined1 *)(lVar4 + 0x40) = 0;
                    *(long *)(param_1 + 0xb8) = lVar4;
                    thunk_FUN_02ee2be8((long *)(param_1 + 0xb8),lVar4);
                    lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
                    FUN_063ef768(lVar4,0);
                    if (lVar4 != 0) {
                      *(undefined8 *)(lVar4 + 0x10) =
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupNames_TypeInfo
                      ;
                      thunk_FUN_02ee2be8();
                      *(undefined1 *)(lVar4 + 0x40) = 0;
                      *(long *)(param_1 + 0xc0) = lVar4;
                      thunk_FUN_02ee2be8((long *)(param_1 + 0xc0),lVar4);
                      FUN_0636e168(param_1,0);
                      if (*(long *)(param_1 + 0x58) != 0) {
                        *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x40) = 1;
                        return;
                      }
                    }
                  }
                }
              }
            }
            goto LAB_064693c0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02e3cccc();
      }
    }
  }
LAB_064693c0:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


