/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 090c691c
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionBegin(void)

{
  long unaff_x19;
  undefined8 uVar1;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac09788);
  FUN_04947ee4(PTR_DAT_0ac79540);
  *(undefined1 *)(unaff_x22 + 0x4bc) = 1;
  thunk_FUN_04983f60(*unaff_x23);
  FUN_08cc3ad0();
  FUN_08fdfe38();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_0a17b398(uVar1,0,0);
  FUN_0a17b398(*(undefined8 *)(unaff_x19 + 0x88),0,0);
  FUN_08fdfedc();
  return;
}


