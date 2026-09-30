/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 033a9504
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


int OVRManager__GetEyeTrackedFoveatedRenderingSupported(void)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  
  plVar2 = (long *)thunk_FUN_01de290c();
  if (*plVar2 < *unaff_x19) {
    iVar1 = 1;
  }
  else {
    iVar1 = -(uint)(*unaff_x19 < *plVar2);
  }
  return iVar1;
}


