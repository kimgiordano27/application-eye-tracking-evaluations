/*
FUNCTION_NAME: FUN_066ab2a8
ENTRY_POINT: 066ab2a8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void FUN_066ab2a8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined1 auStack_160 [128];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_070f1980;
  if ((DAT_07557fda & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f1980);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractionStrengthInteractable_TypeInfo
                );
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Interactables_IXRActivateInteractable_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_Experimental_IValueAnimationUpdate_TypeInfo);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionStrengthInteractor_TypeInfo
                );
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Gaze_IXROverridesGazeAutoSelect_TypeInfo);
    FUN_03188a78(Unity_Services_Analytics_Internal_IWebRequest_TypeInfo);
    FUN_03188a78(Fusion_IInterestEnter_TypeInfo);
    DAT_07557fda = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_0661ea0c(uVar10,0);
  FUN_0661ea0c(*(undefined8 *)(param_1 + 0x18),0);
  puVar8 = UnityEngine_XR_Interaction_Toolkit_Gaze_IXROverridesGazeAutoSelect_TypeInfo;
  puVar7 = UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_TypeInfo;
  puVar6 = UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionStrengthInteractor_TypeInfo;
  puVar5 = Unity_Services_Analytics_Internal_IWebRequest_TypeInfo;
  puVar4 = UnityEngine_UIElements_Experimental_IValueAnimationUpdate_TypeInfo;
  puVar3 = Fusion_IInterestEnter_TypeInfo;
  puVar2 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
  lVar9 = *(long *)(param_1 + 0x78);
  if (lVar9 != 0) {
    lVar12 = 0;
    uVar11 = 0;
    do {
      if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar11) {
        FUN_066a7724(param_1 + 0x40);
        FUN_0461fdb8(param_1 + 0x68,*(undefined8 *)puVar3);
        FUN_0460e7ac(param_1 + 0x88,*(undefined8 *)puVar2);
        lVar9 = *(long *)(param_1 + 0x78);
        if (lVar9 != 0) {
          iVar1 = *(int *)(lVar9 + 0x18);
          *(undefined4 *)(lVar9 + 0x18) = 0;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_0595236c(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
          }
          FUN_0461a144(param_1 + 0x80,*(undefined8 *)puVar8);
          FUN_045a6e60(param_1 + 0x90,*(undefined8 *)puVar7);
          if (*(long *)(param_1 + 0xa0) != 0) {
            thunk_FUN_069deea4(*(long *)(param_1 + 0xa0),0);
            FUN_045a8074(param_1 + 0xa8,*(undefined8 *)puVar6);
            if (*(long *)(param_1 + 0xb8) != 0) {
              thunk_FUN_069deea4(*(long *)(param_1 + 0xb8),0);
              return;
            }
          }
        }
        break;
      }
      plVar13 = *(long **)(param_1 + 0x80);
      if ((*(ushort *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4(*(long *)(*(long *)puVar5 + 0x20));
        lVar9 = *(long *)(param_1 + 0x78);
      }
      if ((*(byte *)(lVar12 + *plVar13) & 1) != 0) {
        if (lVar9 == 0) break;
        FUN_042e7000(auStack_160,lVar9,uVar11 & 0xffffffff,*(undefined8 *)puVar4);
        memcpy(&local_e0,auStack_160,0x80);
        FUN_066a3cc0(&local_e0);
        lVar9 = *(long *)(param_1 + 0x78);
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0xc;
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


