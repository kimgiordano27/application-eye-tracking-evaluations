/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 05ac263c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_Manager_WatchManagerForAddon__get_TelemetryAnnotation(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  void *unaff_x21;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    Oculus_Interaction_TransformExtensions_<>c__DisplayClass3_0___ctor(0x32,0);
    lVar4 = *unaff_x20;
  }
  memcpy(&stack0x00000000,unaff_x21,0x6c);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  lVar2 = unaff_x20[1];
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0xc);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4();
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x50);
  memcpy(&stack0x00000070,&stack0x00000000,0x6c);
  uVar3 = FUN_0401169c(lVar4,&stack0x00000070,(int)lVar2,uVar1,uVar6);
  return ~uVar3 >> 0x1f;
}


