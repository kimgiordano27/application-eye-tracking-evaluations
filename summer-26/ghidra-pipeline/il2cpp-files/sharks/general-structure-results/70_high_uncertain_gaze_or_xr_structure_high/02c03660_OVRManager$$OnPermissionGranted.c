/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 02c03660
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_permission_setup
*/


void OVRManager__OnPermissionGranted(long param_1)

{
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02c0088c();
  return;
}


