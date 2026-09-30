/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$ovrp_EnqueueSubmitLayer2
ENTRY_POINT: 033f23e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_34_0__ovrp_EnqueueSubmitLayer2(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  
  if (param_1 == 0) {
LAB_033f2510:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(uint *)(param_1 + 0x18) <= (uint)(0x1b - (long)unaff_w19)) {
LAB_033f2514:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  if (unaff_w21 < *(uint *)(param_1 + (0x1b - (long)unaff_w19) * 0x10 + 0x20)) {
    uVar4 = 0x1c - unaff_w19;
  }
  else {
    if (unaff_w21 < 0xa7c6) {
      if (unaff_w21 < 0x1ae) {
        bVar2 = 0x29 < unaff_w21;
        bVar3 = unaff_w21 == 0x2a;
        uVar7 = 7;
      }
      else {
        bVar2 = 0x10c5 < unaff_w21;
        bVar3 = unaff_w21 == 0x10c6;
        uVar7 = 5;
      }
    }
    else if (unaff_w21 < 0x418938) {
      bVar2 = 0x68db7 < unaff_w21;
      bVar3 = unaff_w21 == 0x68db8;
      uVar7 = 3;
    }
    else {
      bVar2 = 0x28f5c27 < unaff_w21;
      bVar3 = unaff_w21 == 0x28f5c28;
      uVar7 = 1;
    }
    if (!bVar2 || bVar3) {
      uVar7 = uVar7 + 1;
    }
    if (param_1 == 0) goto LAB_033f2510;
    uVar1 = uVar7 - 1;
    if (*(uint *)(param_1 + 0x18) <= uVar1) goto LAB_033f2514;
    uVar4 = uVar7;
    if ((unaff_w21 == *(uint *)(param_1 + (ulong)uVar1 * 0x10 + 0x20)) &&
       (uVar4 = uVar1, unaff_x20 <= *(ulong *)(param_1 + (ulong)uVar1 * 0x10 + 0x28))) {
      uVar4 = uVar7;
    }
  }
  if ((int)(uVar4 + unaff_w19) < 0) {
    thunk_FUN_01dd295c(StringLiteral_1150);
    uVar5 = thunk_FUN_01de27b8();
    uVar6 = thunk_FUN_01dd295c(StringLiteral_8348);
    FUN_03390704(uVar5,uVar6,0);
    uVar6 = thunk_FUN_01dd295c(StringLiteral_9353);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar5,uVar6);
  }
  return;
}


