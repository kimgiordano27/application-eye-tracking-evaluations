/*
FUNCTION_NAME: FUN_06a72540
ENTRY_POINT: 06a72540
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_06a72540(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0897fe08 == (code *)0x0) {
                    /* try { // try from 06a7256c to 06b72697 has its CatchHandler @ 06a7256c
                       catch() { ... } // from try @ 06a7256c with catch @ 06a7256c
                       catch() { ... } // from try @ 06a727b0 with catch @ 06a7256c
                       catch() { ... } // from try @ 06a72900 with catch @ 06a7256c
                       catch() { ... } // from try @ 06a7293c with catch @ 06a7256c
                       catch() { ... } // from try @ 06a72998 with catch @ 06a7256c
                       catch() { ... } // from try @ 06a729b8 with catch @ 06a7256c
                       catch() { ... } // from try @ 06a729dc with catch @ 06a7256c */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_SendEvent";
    uStack_38 = 0xe;
    local_30 = DAT_015c4790;
    local_28 = 0x10;
    local_24 = 0;
    DAT_0897fe08 = (code *)thunk_FUN_03ac775c(&local_50);
  }
  uVar2 = thunk_FUN_03ac7a08(param_1);
  uVar3 = thunk_FUN_03ac7a08(param_2);
  uVar1 = (*DAT_0897fe08)(uVar2,uVar3);
  thunk_FUN_03ac79fc(uVar2);
  thunk_FUN_03ac79fc(uVar3);
  return uVar1;
}


