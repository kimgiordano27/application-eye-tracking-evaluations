/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_SetControllerDrivenHandPoses
ENTRY_POINT: 033f8d78
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


/* WARNING: Removing unreachable block (ram,0x033f8f30) */

void OVRPlugin_OVRP_1_86_0__ovrp_SetControllerDrivenHandPoses(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 *unaff_x19;
  int iVar3;
  uint unaff_w23;
  long *unaff_x25;
  uint unaff_w26;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000018;
  
  FUN_033f4894();
  uVar2 = FUN_033f81c0();
  if ((uVar2 & 1) == 0) {
    iVar3 = 0xd;
  }
  else {
    if (*(int *)(*(long *)StringLiteral_1718 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f3e58(unaff_x19 + 8);
    unaff_w23 = 0;
    iVar3 = 10;
  }
  if ((unaff_w26 & 1) == 0 && in_stack_00000018._4_1_ != '\0') {
    FUN_01dccd6c();
  }
  if (iVar3 != 0xd) {
    if (iVar3 == 10) goto LAB_033f8ec8;
    if (iVar3 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  auVar4 = FUN_026c53b8(*(long *)(unaff_x19 + 10),0,*(undefined8 *)StringLiteral_9460);
  uVar2 = FUN_029c1214();
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar4;
    thunk_FUN_01e10808(unaff_x19 + 0x18,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_01ee9390(unaff_x19 + 2);
    return;
  }
  unaff_w23 = FUN_029c1260();
LAB_033f8ec8:
  *unaff_x19 = 0xfffffffe;
  puVar1 = StringLiteral_9451;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_0253d68c(unaff_x19 + 2,unaff_w23 & 1,*(undefined8 *)puVar1);
  return;
}


