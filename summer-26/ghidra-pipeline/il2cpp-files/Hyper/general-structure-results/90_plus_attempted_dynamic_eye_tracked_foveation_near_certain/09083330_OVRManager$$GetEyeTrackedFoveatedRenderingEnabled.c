/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 09083330
PROGRAM: Hyper-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


float OVRManager__GetEyeTrackedFoveatedRenderingEnabled(float param_1)

{
  long unaff_x19;
  float fVar1;
  
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar1 = (float)FUN_0a18a7a0(*(long *)(unaff_x19 + 0x30),0);
    return param_1 - fVar1 * DAT_01df4cc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


