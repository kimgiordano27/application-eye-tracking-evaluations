/*
FUNCTION_NAME: OVRManager$$remove_TrackingAcquired
ENTRY_POINT: 05ba2ed8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRManager__remove_TrackingAcquired(ulong param_1)

{
  float fVar1;
  int unaff_w20;
  long unaff_x22;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined4 in_s4;
  undefined4 in_s5;
  undefined4 in_s6;
  float fVar5;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack000000000000019c;
  undefined8 uStack00000000000001a4;
  float in_stack_00000280;
  float in_stack_00000284;
  float in_stack_00000288;
  
  uStack0000000000000044 = in_s4;
  uStack0000000000000048 = in_s5;
  uStack000000000000004c = in_s6;
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07115e30);
    FUN_03188a78(PTR_DAT_07115e28);
    *(undefined1 *)(unaff_x22 + 0x9aa) = 1;
  }
  uStack00000000000001a4 = 0;
  uStack000000000000019c = 0;
  if (0 < unaff_w20) {
    fVar5 = in_stack_00000288 * in_stack_00000288 +
            in_stack_00000280 * in_stack_00000280 + in_stack_00000284 * in_stack_00000284;
    if (DAT_07546c44 == '\0') {
      FUN_03188a78(PTR_DAT_070cf060);
      DAT_07546c44 = '\x01';
    }
    fVar2 = ABS(fVar5);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar4 = **(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) * 8.0;
    fVar1 = fVar2 * DAT_012e3b94;
    if (fVar2 * DAT_012e3b94 <= fVar4) {
      fVar1 = fVar4;
    }
    if (fVar1 <= ABS(0.0 - fVar5)) {
      auVar3 = FUN_06cd5ad4();
      return auVar3;
    }
  }
  if (DAT_075457d6 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_075457d6 = '\x01';
  }
  return ZEXT416(**(uint **)(*(long *)PTR_DAT_070c1a80 + 0xb8));
}


