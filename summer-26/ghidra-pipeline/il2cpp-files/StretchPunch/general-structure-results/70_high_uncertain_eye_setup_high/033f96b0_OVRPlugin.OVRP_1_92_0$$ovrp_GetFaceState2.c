/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetFaceState2
ENTRY_POINT: 033f96b0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_GetFaceState2(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *unaff_x19;
  int unaff_w21;
  int iVar5;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  int in_stack_00000008;
  
  iVar5 = 0;
  uVar2 = unaff_w28 & 0xffff | 0x19990000;
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
    uVar1 = uVar2 + iVar5 * (unaff_w27 & 0xffff | 0xcccc0000);
    if ((unaff_w29 & 0xffff | 0x6660000) < (uVar1 >> 3 | uVar1 * 0x20000000)) {
      if ((uVar1 >> 1 | uVar1 * -0x80000000) <= uVar2) {
        FUN_01dcd344(0);
        iVar4 = 0;
        goto LAB_033f9764;
      }
      Manager_ClawMovement__UI_MoveClawUp();
    }
    else {
      FUN_01dcd344(1);
      iVar4 = iVar5 % 10;
LAB_033f9764:
      if ((unaff_w21 != -1) && (iVar4 == 0)) {
        iVar4 = thunk_FUN_01dc9540(0);
        if ((iVar4 - in_stack_00000008 < 0) || (unaff_w21 - (iVar4 - in_stack_00000008) < 1)) {
          if (*(int *)(*(long *)StringLiteral_9463 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          FUN_033f9b58();
          return;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


