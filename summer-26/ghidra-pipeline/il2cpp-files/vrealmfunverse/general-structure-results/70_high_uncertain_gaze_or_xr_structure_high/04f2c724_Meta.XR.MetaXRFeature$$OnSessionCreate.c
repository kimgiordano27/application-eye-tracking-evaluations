/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionCreate
ENTRY_POINT: 04f2c724
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionCreate(long param_1,long param_2)

{
  long in_x9;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd80);
  uVar3 = *(undefined8 *)(in_x9 + 0x6e8);
  uVar2 = *(undefined8 *)(in_x9 + 0x6e0);
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0xd88);
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  *(undefined8 *)(param_2 + 0x58) = uVar3;
  *(undefined8 *)(param_2 + 0x50) = uVar2;
  thunk_FUN_05c88cb0();
  return;
}


