/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 033f67b8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9409);
    FUN_01d7d918(StringLiteral_9367);
    FUN_01d7d918(StringLiteral_5918);
    FUN_01d7d918(StringLiteral_1109);
    *(undefined1 *)(unaff_x20 + 0xbc9) = 1;
  }
  puVar2 = StringLiteral_9367;
  puVar1 = StringLiteral_1109;
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if (lVar4 != 0) {
    lVar3 = **(long **)(*(long *)StringLiteral_9367 + 0xb8);
    if (lVar3 == 0) {
      lVar3 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5918);
      FUN_033f7080(lVar3,0,*(undefined8 *)StringLiteral_9409);
      **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
      thunk_FUN_01e10808(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar3);
      lVar4 = *(long *)(unaff_x19 + 0x20);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f7188(lVar4,lVar3);
    return;
  }
  FUN_033f7268();
  return;
}


