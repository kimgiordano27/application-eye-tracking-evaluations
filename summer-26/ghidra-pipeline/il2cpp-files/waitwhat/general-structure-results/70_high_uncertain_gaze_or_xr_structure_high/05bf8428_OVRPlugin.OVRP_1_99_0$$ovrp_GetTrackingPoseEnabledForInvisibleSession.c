/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_GetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 05bf8428
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_99_0__ovrp_GetTrackingPoseEnabledForInvisibleSession(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x23;
  long unaff_x24;
  undefined4 uVar4;
  
  lVar2 = *unaff_x20;
  *(undefined1 *)(unaff_x23 + 4) = 1;
  lVar3 = *(long *)(lVar2 + 0xb8);
  cVar1 = *(char *)(unaff_x24 + 0x7aa);
  uVar4 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x2c);
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x24);
  *(undefined4 *)(lVar3 + 0x80) = uVar4;
  if (cVar1 == '\0') {
    FUN_03188a78();
    param_1 = *unaff_x19;
    lVar2 = *unaff_x20;
    *(undefined1 *)(unaff_x24 + 0x7aa) = 1;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
  uVar4 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x20);
  *(undefined8 *)(lVar2 + 0x84) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
  *(undefined4 *)(lVar2 + 0x8c) = uVar4;
  return;
}


