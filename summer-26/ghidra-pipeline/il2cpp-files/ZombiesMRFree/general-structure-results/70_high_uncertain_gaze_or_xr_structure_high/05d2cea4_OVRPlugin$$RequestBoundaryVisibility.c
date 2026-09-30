/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 05d2cea4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin__RequestBoundaryVisibility(undefined8 *param_1)

{
  uint uVar1;
  undefined4 *unaff_x19;
  undefined8 in_stack_00000008;
  
  uVar1 = (*(code *)*param_1)();
  if ((uVar1 & 1) == 0) {
    in_stack_00000008._4_4_ = 0;
  }
  *unaff_x19 = in_stack_00000008._4_4_;
  return uVar1 & 1;
}


