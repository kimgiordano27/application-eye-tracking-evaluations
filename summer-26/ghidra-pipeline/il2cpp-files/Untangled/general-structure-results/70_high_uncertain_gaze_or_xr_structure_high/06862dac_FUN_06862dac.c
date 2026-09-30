/*
FUNCTION_NAME: FUN_06862dac
ENTRY_POINT: 06862dac
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void FUN_06862dac(long param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((DAT_071d6b90 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_02f07e70(OVRPlugin_TrackingConfidence_TypeInfo);
    DAT_071d6b90 = 1;
  }
  if (*(long **)(param_1 + 0x450) != (long *)0x0) {
    lVar2 = **(long **)(param_1 + 0x450);
    bVar1 = *(byte *)(*(long *)OVRPlugin_TrackingConfidence_TypeInfo + 0x130);
    if ((*(byte *)(lVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRPlugin_TrackingConfidence_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440();
    }
  }
  return;
}


