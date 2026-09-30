/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 05120930
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_05093354();
  uVar2 = thunk_FUN_02dc61f4(PTR_DAT_06780c68);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar1,uVar2);
}


