/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 05d41884
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionBegin(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_06fb4b60;
  if ((DAT_07398afd & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb4b60);
    DAT_07398afd = 1;
  }
  uVar2 = thunk_FUN_03010710(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  thunk_FUN_03048534();
  uVar2 = thunk_FUN_03010710(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  thunk_FUN_03048534((undefined8 *)(param_1 + 0x38),uVar2);
  return;
}


