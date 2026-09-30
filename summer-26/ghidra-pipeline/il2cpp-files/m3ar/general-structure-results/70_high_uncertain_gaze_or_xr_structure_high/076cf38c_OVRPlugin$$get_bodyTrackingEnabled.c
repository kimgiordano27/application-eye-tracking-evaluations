/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 076cf38c
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(long param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0x215) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f65598);
    *(undefined1 *)(unaff_x21 + 0x215) = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08f65598 + 0x130);
    if (bVar1 <= *(byte *)(*param_2 + 0x130)) {
      plVar2 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08f65598)
      {
        plVar2 = (long *)0x0;
      }
      goto LAB_076cf3f0;
    }
  }
  plVar2 = (long *)0x0;
LAB_076cf3f0:
  *(long **)(param_1 + 0x20) = plVar2;
  *(long **)(param_1 + 0x28) = param_2;
  return;
}


