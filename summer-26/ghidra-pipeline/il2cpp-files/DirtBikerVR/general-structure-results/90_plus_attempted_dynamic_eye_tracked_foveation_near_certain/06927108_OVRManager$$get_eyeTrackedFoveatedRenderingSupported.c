/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 06927108
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


float OVRManager__get_eyeTrackedFoveatedRenderingSupported(long param_1)

{
  float fVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    fVar1 = (float)FUN_07fc9360(*(long *)(param_1 + 0x30),0);
    return fVar1 * DAT_015c55e4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


