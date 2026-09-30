/*
FUNCTION_NAME: FUN_059ae234
ENTRY_POINT: 059ae234
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_059ae234(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_059adf88();
  thunk_FUN_02dfd288(PTR_DAT_069fba18);
  uVar1 = thunk_FUN_02dd3144();
  uVar2 = thunk_FUN_02dfd288(OVRManager_PassthroughCapabilities_TypeInfo);
  FUN_054e3304(uVar1,uVar2,0);
  uVar2 = thunk_FUN_02dfd288(OVRPermissionsRequester_Permission_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar1,uVar2);
}


