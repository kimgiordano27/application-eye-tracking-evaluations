/*
FUNCTION_NAME: FUN_05eadbc8
ENTRY_POINT: 05eadbc8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_05eadbc8(undefined8 param_1,undefined8 param_2)

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
  
  if (DAT_076db8d8 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_SendEvent";
    uStack_38 = 0xe;
    local_28 = 0x10;
    local_30 = DAT_0139dc48;
    local_24 = 0;
    DAT_076db8d8 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_Object_op_Inequality
                                     (&local_50);
  }
  uVar2 = thunk_FUN_032a5c7c(param_1);
  uVar3 = thunk_FUN_032a5c7c(param_2);
  uVar1 = (*DAT_076db8d8)(uVar2,uVar3);
  thunk_FUN_032a5c70(uVar2);
  thunk_FUN_032a5c70(uVar3);
  return uVar1;
}


