/*
FUNCTION_NAME: RoomServerPanel.<TryJoinSessionAsync>d__25$$SetStateMachine
ENTRY_POINT: 01d10f6c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d10fc0) */

void RoomServerPanel_<TryJoinSessionAsync>d__25__SetStateMachine(void)

{
  long lVar1;
  undefined8 in_stack_00000008;
  
  lVar1 = thunk_FUN_01a41d84();
  (**(code **)(lVar1 + 8))();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


