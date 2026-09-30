/*
FUNCTION_NAME: FUN_057d28d4
ENTRY_POINT: 057d28d4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_057d28d4(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  
  if ((DAT_06bc0c57 & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_StepSmoothingBurst_00000FD6_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                );
    DAT_06bc0c57 = 1;
  }
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar2 = *param_1;
  bVar1 = *(byte *)(*(long *)
                     UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_StepSmoothingBurst_00000FD6_BurstDirectCall_TypeInfo
                   + 0x130);
  if ((*(byte *)(lVar2 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)
       UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_StepSmoothingBurst_00000FD6_BurstDirectCall_TypeInfo
     )) {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                     + 0x130);
    if (*(byte *)(lVar2 + 0x130) < bVar1) {
      return;
    }
    if (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__) {
      return;
    }
    if ((param_1[2] == 0) || (bVar1 = FUN_057e1054(param_1[2],0), param_2 == 0)) goto LAB_057d29c4;
  }
  else {
    if ((param_1[2] == 0) || (param_2 == 0)) {
LAB_057d29c4:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    bVar1 = *(char *)(param_1[2] + 0x101) != '\0';
  }
  FUN_057d29e0(param_2,bVar1 & 1);
  return;
}


