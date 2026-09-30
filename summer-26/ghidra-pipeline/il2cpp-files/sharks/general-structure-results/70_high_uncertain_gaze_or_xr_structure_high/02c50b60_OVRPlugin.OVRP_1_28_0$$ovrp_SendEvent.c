/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 02c50b60
PROGRAM: sharks-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  FUN_02a5a000();
  FUN_015d6ff8();
  uVar1 = (**(code **)(*unaff_x20 + 0x168))();
  uVar2 = thunk_FUN_01851c08(PTR_DAT_0380cae8);
  uVar1 = FUN_02a2e6b0(uVar2,uVar1,0);
  thunk_FUN_01851c08(PTR_DAT_037f87a8);
  uVar2 = thunk_FUN_01861bbc();
  uVar3 = thunk_FUN_01851c08(PTR_DAT_0380caf0);
  FUN_02b3cc64(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_01851c08(PTR_DAT_0380caf8);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar2,uVar1);
}


