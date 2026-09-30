/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 05329c74
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_faceTrackingEnabled(long param_1)

{
  undefined8 uVar1;
  long in_x9;
  undefined8 unaff_x19;
  long unaff_x20;
  
  if (*(byte *)(in_x9 + 0x130) < *(byte *)(param_1 + 0x130)) {
    uVar1 = 0;
  }
  else {
    uVar1 = unaff_x19;
    if (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) != param_1) {
      uVar1 = 0;
    }
  }
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x58) = unaff_x19;
  return;
}


