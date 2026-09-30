/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05cfc37c
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


void OVRManager__set_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_07398763 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb8268);
    DAT_07398763 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    return;
  }
  uVar1 = thunk_FUN_03010710(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_06fb8268);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_03048534((long *)(param_1 + 0x28),uVar1);
  return;
}


