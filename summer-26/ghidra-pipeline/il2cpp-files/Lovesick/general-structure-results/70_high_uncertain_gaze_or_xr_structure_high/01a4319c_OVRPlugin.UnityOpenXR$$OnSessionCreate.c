/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 01a4319c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionCreate(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x810));
  *(undefined1 *)(unaff_x19 + 0xc58) = 1;
  lVar2 = FUN_01a431f0();
  puVar1 = System_Runtime_Serialization_FixupHolder_TypeInfo;
  while (lVar2 != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01a432c4(lVar2);
    lVar2 = FUN_01a431f0();
  }
  return;
}


