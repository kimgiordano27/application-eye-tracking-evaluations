/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 076cc284
PROGRAM: m3ar-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(undefined8 param_1)

{
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(unaff_x21 + 0xc70);
  if ((*(byte *)(unaff_x20 + 0x1e8) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fadc70);
    *(undefined1 *)(unaff_x20 + 0x1e8) = 1;
  }
  FUN_054540f4(param_1,*puVar1);
  return;
}


