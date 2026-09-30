/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 033d46e0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionDiscovery(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  
  FUN_01d7d918();
  FUN_01d7d918(StringLiteral_9029);
  *(undefined1 *)(unaff_x19 + 0xa3b) = 1;
  plVar3 = (long *)(unaff_x20 + 0x18);
  if (*plVar3 != 0) {
    return;
  }
  plVar4 = (long *)(unaff_x20 + 0x90);
  lVar2 = *plVar4;
  if ((lVar2 == 0) && (*(int *)(unaff_x20 + 0xa8) == 0)) {
    lVar2 = FUN_033d6e4c(*(undefined8 *)StringLiteral_8949,0);
  }
  else {
    plVar6 = (long *)(unaff_x20 + 0x98);
    if (*plVar6 == 0) {
      lVar2 = FUN_033d6e4c(*(undefined8 *)StringLiteral_6758,0);
      *plVar6 = lVar2;
      thunk_FUN_01e10808(plVar6,lVar2);
      lVar2 = *plVar4;
    }
    if (lVar2 == 0) {
      lVar2 = FUN_033d6e4c(*(undefined8 *)StringLiteral_6758,0);
      *plVar4 = lVar2;
      thunk_FUN_01e10808(plVar4,lVar2);
    }
    uVar5 = *(undefined8 *)StringLiteral_9029;
    if (*(int *)(*(long *)StringLiteral_1369 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar1 = FUN_03366174(0);
    lVar2 = FUN_0326b798(uVar1,uVar5,*(undefined8 *)(unaff_x20 + 0x90),
                         *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),0);
  }
  *plVar3 = lVar2;
  thunk_FUN_01e10808(plVar3,lVar2);
  return;
}


