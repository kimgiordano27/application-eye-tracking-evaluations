/*
FUNCTION_NAME: OVRPlugin$$IsPerfMetricsSupported
ENTRY_POINT: 03221c38
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsPerfMetricsSupported(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  thunk_FUN_0159f088();
  *(undefined1 *)(unaff_x21 + 0xe6a) = 1;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  if (DAT_0722c535 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    DAT_0722c535 = '\x01';
  }
  FUN_025eb094(unaff_x29 + -0x60,&uStack_40,0x20,0);
  if (DAT_0722c536 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dfcf08);
    DAT_0722c536 = '\x01';
  }
  puVar1 = PTR_DAT_06e3f9a0;
  if (unaff_x20 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_02524ea0();
    uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  lVar3 = FUN_03221d44(unaff_x29 + -0x60,uVar2,uVar4);
  if (lVar3 == 0) {
    FUN_025eb0d0(unaff_x29 + -0x60,0);
  }
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -0x38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


