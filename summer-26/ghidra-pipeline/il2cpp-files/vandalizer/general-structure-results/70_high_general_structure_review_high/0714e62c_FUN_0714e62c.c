/*
FUNCTION_NAME: FUN_0714e62c
ENTRY_POINT: 0714e62c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0714e62c(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_07a5b261 & 1) == 0) {
    FUN_031f20f4(
                UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_00000159_BurstDirectCall_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_00000159_PostfixBurstDelegate_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_LocalizeTo_00000158_BurstDirectCall_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_LocalizeTo_00000158_PostfixBurstDelegate_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal_00000F61_BurstDirectCall_TypeInfo
                );
    DAT_07a5b261 = 1;
  }
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36_TypeInfo
  ;
  if (param_2 == 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar2 = *(long *)
             UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36_TypeInfo
    ;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar5 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar2 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
      lVar5 = thunk_FUN_0322f148(*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal_00000F61_BurstDirectCall_TypeInfo
                                );
      FUN_0520ccd4(lVar5,uVar6,
                   *(undefined8 *)
                    UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_00000159_BurstDirectCall_TypeInfo
                   ,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar3 = lVar5;
      thunk_FUN_0329bf60(plVar3,lVar5);
    }
    FUN_0714e8f8(param_1,uVar4,lVar5);
    lVar2 = *(long *)puVar1;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
    if (lVar5 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar2 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
      lVar5 = thunk_FUN_0322f148(*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal_00000F61_BurstDirectCall_TypeInfo
                                );
      FUN_0520ccd4(lVar5,uVar6,
                   *(undefined8 *)
                    UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_00000159_PostfixBurstDelegate_TypeInfo
                   ,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *plVar3 = lVar5;
      thunk_FUN_0329bf60(plVar3,lVar5);
    }
    FUN_0714ebbc(param_1,uVar4,lVar5);
    lVar2 = *(long *)puVar1;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
    if (lVar5 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar2 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
      lVar5 = thunk_FUN_0322f148(*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal_00000F61_BurstDirectCall_TypeInfo
                                );
      FUN_0520ccd4(lVar5,uVar6,
                   *(undefined8 *)
                    UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_LocalizeTo_00000158_BurstDirectCall_TypeInfo
                   ,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      *plVar3 = lVar5;
      thunk_FUN_0329bf60(plVar3,lVar5);
    }
    FUN_0714e8f8(param_1,uVar4,lVar5);
    lVar2 = *(long *)puVar1;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
    if (lVar5 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar2 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
      lVar5 = thunk_FUN_0322f148(*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal_00000F61_BurstDirectCall_TypeInfo
                                );
      FUN_0520ccd4(lVar5,uVar6,
                   *(undefined8 *)
                    UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_LocalizeTo_00000158_PostfixBurstDelegate_TypeInfo
                   ,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      *plVar3 = lVar5;
      thunk_FUN_0329bf60(plVar3,lVar5);
    }
    FUN_0714ebbc(param_1,uVar4,lVar5);
    return;
  }
  return;
}


