/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_GetControllerIsInHand
ENTRY_POINT: 033f9080
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f8f30) */

void OVRPlugin_OVRP_1_86_0__ovrp_GetControllerIsInHand(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar5;
  long unaff_x21;
  uint unaff_w23;
  undefined8 uVar6;
  long *unaff_x25;
  int unaff_w27;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000018;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == **(long **)(in_x10 + 0xc58)) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_033f90cc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_033f90cc:
  (*(code *)*puVar2)();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db68();
  }
  if (unaff_w27 != 0xb) {
    if (unaff_w27 == 10) goto LAB_033f8ec8;
    if (unaff_w27 != 0) {
      return;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_01e10808(unaff_x19 + 0x10,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  in_stack_00000018._4_1_ = '\0';
  FUN_033f4894(uVar6,(long)&stack0x00000018 + 4);
  uVar3 = FUN_033f81c0();
  if ((uVar3 & 1) == 0) {
    iVar5 = 0xd;
  }
  else {
    if (*(int *)(*(long *)StringLiteral_1718 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f3e58(unaff_x19 + 8);
    unaff_w23 = 0;
    iVar5 = 10;
  }
  if (in_stack_00000018._4_1_ != '\0') {
    FUN_01dccd6c(uVar6);
  }
  if (iVar5 != 0xd) {
    if (iVar5 == 10) goto LAB_033f8ec8;
    if (iVar5 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  auVar7 = FUN_026c53b8(*(long *)(unaff_x19 + 10),0,*(undefined8 *)StringLiteral_9460);
  uVar3 = FUN_029c1214();
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar7;
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


