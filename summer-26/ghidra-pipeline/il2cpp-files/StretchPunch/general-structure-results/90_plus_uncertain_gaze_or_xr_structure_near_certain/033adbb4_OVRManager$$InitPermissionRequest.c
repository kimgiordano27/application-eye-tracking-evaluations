/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 033adbb4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long in_x9;
  long *unaff_x20;
  long *unaff_x24;
  
  puVar4 = StringLiteral_8526;
  puVar3 = StringLiteral_8490;
  puVar2 = StringLiteral_8489;
  puVar1 = StringLiteral_8488;
  *(undefined8 *)(*(long *)(in_x9 + 0xb8) + 0x10) = *param_1;
  thunk_FUN_01e10808();
  lVar5 = *unaff_x24;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *unaff_x24;
  }
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = **(undefined8 **)(lVar5 + 0xb8);
  thunk_FUN_01e10808();
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
  FUN_03308098(uVar6,0,*(undefined8 *)puVar1,0);
  puVar7 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
  *puVar7 = uVar6;
  thunk_FUN_01e10808(puVar7,uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
  FUN_03308098(uVar6,0,*(undefined8 *)puVar2,0);
                    /* try { // try from 033adc5c to 034adcb7 has its CatchHandler @ 033adc5c
                       catch() { ... } // from try @ 033adc5c with catch @ 033adc5c
                       catch() { ... } // from try @ 033add14 with catch @ 033adc5c
                       catch() { ... } // from try @ 033add50 with catch @ 033adc5c
                       catch() { ... } // from try @ 033ade10 with catch @ 033adc5c */
  puVar7 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x28);
  *puVar7 = uVar6;
  thunk_FUN_01e10808(puVar7,uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
  FUN_03308098(uVar6,0,*(undefined8 *)puVar3,0);
  puVar7 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
  *puVar7 = uVar6;
  thunk_FUN_01e10808(puVar7,uVar6);
  return;
}


