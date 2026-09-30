/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 031371b4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 143
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingSupported(undefined1 param_1 [16],long param_2)

{
  *(long *)(param_2 + 0x14) = param_1._8_8_;
  *(long *)(param_2 + 0xc) = param_1._0_8_;
  return;
}


