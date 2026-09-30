/*
FUNCTION_NAME: OVRPlugin.OVRP_1_91_0$$.cctor
ENTRY_POINT: 033f9628
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_91_0___cctor(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  int in_stack_00000008;
  
  while( true ) {
    if ((unaff_w24 & 1) == 0) {
      FUN_033f9390();
      thunk_FUN_01da0934();
      uVar1 = thunk_FUN_01d99908();
      if (uVar1 == unaff_w24) {
        return;
      }
      FUN_033f9984();
      unaff_w25 = 100;
    }
    unaff_w22 = unaff_w22 + 1;
    unaff_w28 = unaff_w28 + 100;
    if (unaff_w22 == unaff_w26) break;
    if (0 < (unaff_w22 + unaff_w27) * unaff_w29 * unaff_w25) {
      iVar2 = unaff_w29 * unaff_w28 + 1;
      do {
        FUN_01d6903c();
        iVar2 = iVar2 + -1;
      } while (1 < iVar2);
    }
    unaff_w24 = *unaff_x19;
    if (unaff_w29 < unaff_w23) {
      unaff_w29 = unaff_w29 + 1;
    }
    thunk_FUN_01da0934();
  }
  if (unaff_w21 != -1) {
    iVar2 = thunk_FUN_01dc9540(0);
    if ((iVar2 - in_stack_00000008 < 0) || (unaff_w21 - (iVar2 - in_stack_00000008) < 1)) {
LAB_033f97a0:
      if (*(int *)(*(long *)StringLiteral_9463 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f9b58();
      return;
    }
  }
  iVar2 = 0;
  do {
    uVar1 = *unaff_x19;
    thunk_FUN_01da0934();
    if ((uVar1 & 1) == 0) {
      FUN_033f9390();
      thunk_FUN_01da0934();
      uVar3 = thunk_FUN_01d99908();
      if (uVar3 == uVar1) {
        return;
      }
      FUN_033f9984();
    }
    uVar1 = iVar2 * -0x33333333 + 0x19999998;
    if ((uVar1 >> 3 | iVar2 * -0x60000000) < 0x6666667) {
      FUN_01dcd344(1);
      iVar4 = iVar2 % 10;
LAB_033f9764:
      if ((unaff_w21 != -1) && (iVar4 == 0)) {
        iVar4 = thunk_FUN_01dc9540(0);
        if ((iVar4 - in_stack_00000008 < 0) || (unaff_w21 - (iVar4 - in_stack_00000008) < 1))
        goto LAB_033f97a0;
      }
    }
    else {
      if ((uVar1 >> 1 | iVar2 * -0x80000000) < 0x19999999) {
        FUN_01dcd344(0);
        iVar4 = 0;
        goto LAB_033f9764;
      }
      Manager_ClawMovement__UI_MoveClawUp();
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


