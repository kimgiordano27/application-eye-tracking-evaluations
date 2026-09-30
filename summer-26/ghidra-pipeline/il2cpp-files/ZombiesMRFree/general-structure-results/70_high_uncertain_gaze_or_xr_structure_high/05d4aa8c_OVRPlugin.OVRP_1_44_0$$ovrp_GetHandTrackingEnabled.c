/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 05d4aa8c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  FUN_02fe925c();
  *(undefined1 *)(unaff_x20 + 0xa01) = 1;
  if ((SQRT(unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13 +
            unaff_s14 * unaff_s14) < **(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8)) &&
     (DAT_0738e663 == '\0')) {
    FUN_02fe925c(PTR_DAT_06f6d7e8);
    DAT_0738e663 = '\x01';
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  unaff_x19[2] = 0;
  FUN_06902890();
  return;
}


