/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 05d00834
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(long param_1,long param_2)

{
  long *plVar1;
  long in_x9;
  undefined8 in_x10;
  long *unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(param_2 + 0x20) = in_x10;
  if ((uint)*(byte *)(*unaff_x19 + 0x130) < (uint)in_x9) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + in_x9 * 8 + -8) != param_1) {
      plVar1 = (long *)0x0;
    }
  }
  thunk_FUN_03048534((undefined8 *)(param_2 + 0x20),plVar1);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  thunk_FUN_03048534((undefined8 *)(unaff_x20 + 0x28));
  return;
}


