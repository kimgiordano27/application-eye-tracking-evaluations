/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StopColocationDiscovery
ENTRY_POINT: 033faef4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_103_0__ovrp_StopColocationDiscovery(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x24;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  thunk_FUN_01e10808(&stack0x00000018);
  thunk_FUN_01e10808();
  uVar1 = *(undefined1 *)(unaff_x22 + 0x38);
  if ((unaff_x24 & 1) != 0) {
    if (unaff_x21 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x21 + 0x10);
    }
    if (unaff_x20 == 0) goto LAB_033fafcc;
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
    thunk_FUN_01e10808();
  }
  puVar2 = StringLiteral_1109;
  if (unaff_x21 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x21 + 0x18);
  }
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
    thunk_FUN_01e10808();
    *(long *)(unaff_x22 + 0x30) = unaff_x20;
    thunk_FUN_01e10808();
    *(undefined1 *)(unaff_x22 + 0x38) = 0;
    FUN_032ff418(0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033fa434();
    unaff_x19[1] = CONCAT71(in_stack_00000008._1_7_,uVar1) ^ 1;
    *unaff_x19 = unaff_x21;
    unaff_x19[3] = unaff_x22;
    unaff_x19[2] = in_stack_00000010;
    return;
  }
LAB_033fafcc:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


