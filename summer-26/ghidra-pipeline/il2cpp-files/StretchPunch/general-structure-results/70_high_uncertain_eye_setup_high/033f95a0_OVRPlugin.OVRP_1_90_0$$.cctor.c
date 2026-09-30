/*
FUNCTION_NAME: OVRPlugin.OVRP_1_90_0$$.cctor
ENTRY_POINT: 033f95a0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_90_0___cctor(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *unaff_x19;
  int unaff_w21;
  uint uVar6;
  int iVar7;
  int unaff_w27;
  uint uVar8;
  int in_stack_00000008;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  iVar2 = FUN_033f5788();
  if ((unaff_w27 < iVar2) && (uVar8 = unaff_w27 * 100, 0 < (int)uVar8)) {
    uVar4 = uVar8 | 1;
    iVar5 = 1;
    if ((int)uVar4 < 3) {
      uVar4 = 2;
    }
    uVar6 = 1;
    do {
      uVar8 = uVar8 + 100;
      if (0 < (int)((uVar6 + unaff_w27) * iVar5 * 100)) {
        iVar7 = iVar5 * uVar8 + 1;
        do {
          FUN_01d6903c();
          iVar7 = iVar7 + -1;
        } while (1 < iVar7);
      }
      uVar1 = *unaff_x19;
      if (iVar5 < iVar2) {
        iVar5 = iVar5 + 1;
      }
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
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar4);
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
    uVar8 = *unaff_x19;
    thunk_FUN_01da0934();
    if ((uVar8 & 1) == 0) {
      FUN_033f9390();
      thunk_FUN_01da0934();
      uVar4 = thunk_FUN_01d99908();
      if (uVar4 == uVar8) {
        return;
      }
      FUN_033f9984();
    }
    uVar8 = iVar2 * -0x33333333 + 0x19999998;
    if ((uVar8 >> 3 | iVar2 * -0x60000000) < 0x6666667) {
      FUN_01dcd344(1);
      iVar5 = iVar2 % 10;
LAB_033f9764:
      if ((unaff_w21 != -1) && (iVar5 == 0)) {
        iVar5 = thunk_FUN_01dc9540(0);
        if ((iVar5 - in_stack_00000008 < 0) || (unaff_w21 - (iVar5 - in_stack_00000008) < 1))
        goto LAB_033f97a0;
      }
    }
    else {
      if ((uVar8 >> 1 | iVar2 * -0x80000000) < 0x19999999) {
        FUN_01dcd344(0);
        iVar5 = 0;
        goto LAB_033f9764;
      }
      Manager_ClawMovement__UI_MoveClawUp();
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


