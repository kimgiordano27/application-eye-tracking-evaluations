/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 05cfc290
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 OVRManager__GetEyeTrackedFoveatedRenderingSupported(void)

{
  bool in_ZR;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  
  if (in_ZR) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (unaff_x20 == (long *)0x0) goto LAB_05cfc2f4;
    (**(code **)(*unaff_x20 + 0x208))();
  }
  else {
    if (in_w8 != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (unaff_x20 == (long *)0x0) {
LAB_05cfc2f4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
  }
  *(long *)(unaff_x19 + 0x18) = unaff_x20[0x10];
  thunk_FUN_03048534((long *)(unaff_x19 + 0x18));
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return 1;
}


