/*
FUNCTION_NAME: FUN_05be80e8
ENTRY_POINT: 05be80e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_05be80e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_07116bb8;
  if ((DAT_0754ed36 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07116bb8);
    DAT_0754ed36 = 1;
  }
  lVar2 = *(long *)puVar1;
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(param_1);
  return;
}


