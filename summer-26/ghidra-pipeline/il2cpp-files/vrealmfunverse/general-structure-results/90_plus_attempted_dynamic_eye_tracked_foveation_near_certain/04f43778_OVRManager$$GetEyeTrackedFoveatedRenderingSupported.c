/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 04f43778
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingSupported(void)

{
  long unaff_x19;
  long unaff_x20;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  if (*(char *)(unaff_x19 + 0xd9d) == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    *(undefined1 *)(unaff_x19 + 0xd9d) = 1;
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
  FUN_05c7bd38(0);
  FUN_05c7b450(0);
  return;
}


