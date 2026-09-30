/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStart
ENTRY_POINT: 05be86b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_Qpl__MarkerStart(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_03188a78();
  *(undefined1 *)(unaff_x22 + 0xd39) = 1;
  uVar1 = *unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x80) = DAT_012e32a8;
  uVar1 = FUN_03188b1c(uVar1,0x13);
  lVar2 = *unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338(lVar2);
  }
  OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin();
  return;
}


