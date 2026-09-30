/*
FUNCTION_NAME: OVRPlugin.OVRP_1_125_0$$.cctor
ENTRY_POINT: 033fbf10
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_125_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = StringLiteral_9503;
  if ((DAT_044a6bff & 1) == 0) {
    FUN_01d7d918(StringLiteral_9504);
    FUN_01d7d918(StringLiteral_9505);
    FUN_01d7d918(StringLiteral_9503);
    FUN_01d7d918(StringLiteral_9506);
                    /* try { // try from 033fbf60 to 034fbf67 has its CatchHandler @ 033fc144 */
    FUN_01d7d918(StringLiteral_9507);
    DAT_044a6bff = 1;
  }
                    /* try { // try from 033fbf7c to 034fbf9f has its CatchHandler @ 033fc20c */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar3 = FUN_01d790a8();
  puVar2 = StringLiteral_9507;
  if (lVar3 == 0) {
    return;
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(lVar6);
    lVar6 = *(long *)puVar1;
  }
  lVar4 = *(long *)puVar2;
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar4 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar4 = *(long *)puVar2;
    }
    uVar8 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9505);
    FUN_029d0c78(lVar7,uVar8,*(undefined8 *)StringLiteral_9506,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar7;
    thunk_FUN_01e10808(plVar5,lVar7);
  }
  if (lVar6 != 0) {
    FUN_029bfdf8(lVar6,lVar3,lVar7,*(undefined8 *)StringLiteral_9504);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


