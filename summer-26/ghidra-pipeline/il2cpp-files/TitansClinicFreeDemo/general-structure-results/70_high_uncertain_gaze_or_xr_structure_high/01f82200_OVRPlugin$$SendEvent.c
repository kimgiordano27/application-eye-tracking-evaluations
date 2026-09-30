/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 01f82200
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SendEvent(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_01279b34();
  uVar1 = thunk_FUN_0124bba8();
  uVar2 = thunk_FUN_01279b34(PTR_DAT_027bca28);
  FUN_01f64568(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01279b34(PTR_DAT_027c1370);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar1,uVar2);
}


