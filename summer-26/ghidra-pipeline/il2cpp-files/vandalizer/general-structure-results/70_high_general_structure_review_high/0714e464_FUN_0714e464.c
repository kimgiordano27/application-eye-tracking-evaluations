/*
FUNCTION_NAME: FUN_0714e464
ENTRY_POINT: 0714e464
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_0714e464(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36_TypeInfo
  ;
  if ((DAT_07a5b25f & 1) == 0) {
    FUN_031f20f4(
                UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculatePinch_00000156_PostfixBurstDelegate_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateSpread_00000157_BurstDirectCall_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateSpread_00000157_PostfixBurstDelegate_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36_TypeInfo
                );
    DAT_07a5b25f = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar2 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateSpread_00000157_BurstDirectCall_TypeInfo
                              );
    FUN_04d1da94(lVar4,uVar5,
                 *(undefined8 *)
                  UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateSpread_00000157_PostfixBurstDelegate_TypeInfo
                 ,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar4;
    thunk_FUN_0329bf60(plVar3,lVar4);
  }
  if (param_1 != 0) {
    FUN_047b0a24(param_1,lVar4,
                 *(undefined8 *)
                  UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculatePinch_00000156_PostfixBurstDelegate_TypeInfo
                );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


