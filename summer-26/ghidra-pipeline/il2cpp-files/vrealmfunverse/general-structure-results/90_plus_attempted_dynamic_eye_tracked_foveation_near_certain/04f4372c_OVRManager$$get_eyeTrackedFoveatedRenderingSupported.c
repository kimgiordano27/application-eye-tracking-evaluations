/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 04f4372c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingSupported(float param_1,float param_2)

{
  long unaff_x20;
  float fVar1;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if (param_2 <= param_1) {
    fVar1 = unaff_s8 * unaff_s14 + unaff_s11 * unaff_s12 + unaff_s10 * unaff_s13;
    unaff_s12 = unaff_s12 - (unaff_s11 * fVar1) / param_1;
    unaff_s13 = unaff_s13 - (unaff_s10 * fVar1) / param_1;
    unaff_s14 = unaff_s14 - (unaff_s8 * fVar1) / param_1;
  }
  if (DAT_066c1d9d == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    DAT_066c1d9d = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if ((SQRT(unaff_s14 * unaff_s14 + unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13) <= DAT_01032864)
     && (DAT_066c1d97 == '\0')) {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1d97 = '\x01';
  }
  if (*(char *)(unaff_x20 + 0xd9f) == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    *(undefined1 *)(unaff_x20 + 0xd9f) = 1;
  }
  FUN_05c7bd38(uStack0000000000000018,uStack000000000000001c,0);
  FUN_05c7b450(0);
  return;
}


