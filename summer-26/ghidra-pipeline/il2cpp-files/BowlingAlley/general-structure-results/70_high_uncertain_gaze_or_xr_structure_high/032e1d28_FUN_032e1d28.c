/*
FUNCTION_NAME: FUN_032e1d28
ENTRY_POINT: 032e1d28
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


undefined4 FUN_032e1d28(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined1 auStack_60 [32];
  long local_40;
  undefined1 auStack_18 [8];
  
  FUN_03296828(auStack_18,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
  local_70[0] = 0;
  local_68 = param_1;
  FUN_032b01d4(auStack_60,&DAT_076ebf10,local_70);
  uVar1 = *(undefined4 *)(local_40 + 0x10);
  FUN_03296ccc(auStack_18);
  return uVar1;
}


