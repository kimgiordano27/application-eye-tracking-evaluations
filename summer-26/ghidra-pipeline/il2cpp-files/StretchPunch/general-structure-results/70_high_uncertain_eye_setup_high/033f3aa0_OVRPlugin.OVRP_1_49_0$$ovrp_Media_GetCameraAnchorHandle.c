/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorHandle
ENTRY_POINT: 033f3aa0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorHandle(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long *plVar8;
  long unaff_x26;
  long lVar9;
  long *unaff_x28;
  undefined1 auVar10 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (unaff_x26 == 0) {
    lVar4 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9367);
    FUN_033f60c8();
  }
  else {
    lVar4 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9373);
    FUN_033f60c8();
    *(long *)(lVar4 + 0x30) = unaff_x26;
    thunk_FUN_01e10808();
  }
  lVar9 = *(long *)(unaff_x22 + 0x18);
  thunk_FUN_01da0934();
  if (lVar9 == 0) {
    lVar9 = *unaff_x28;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar9 = *unaff_x28;
    }
    lVar9 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_9369,
                         *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x10));
    thunk_FUN_01da0934();
    lVar5 = FUN_01d996c0((long *)(unaff_x22 + 0x18),lVar9,0);
    if (lVar5 != 0) {
      lVar9 = lVar5;
    }
    if (lVar9 == 0) goto LAB_033f3c5c;
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = unaff_w24 / iVar1;
  }
  uVar2 = unaff_w24 - iVar3 * iVar1;
  if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_033f3c60;
  plVar8 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
  lVar5 = *plVar8;
  thunk_FUN_01da0934();
  if (lVar5 == 0) {
    uVar6 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9372);
    FUN_02679f58(uVar6,4,*(undefined8 *)StringLiteral_9371);
    if (*(uint *)(lVar9 + 0x18) <= uVar2) {
LAB_033f3c60:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    FUN_01d996c0(plVar8,uVar6,0);
    if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_033f3c60;
    lVar5 = *plVar8;
    if (lVar5 == 0) goto LAB_033f3c5c;
  }
  auVar10 = FUN_02679ffc(lVar5,lVar4,*(undefined8 *)StringLiteral_9370);
  in_stack_00000008 = lVar4;
  thunk_FUN_01e10808(&stack0x00000008,lVar4);
  _in_stack_00000010 = auVar10;
  thunk_FUN_01e10808(&stack0x00000010,0);
  iVar1 = *(int *)(unaff_x22 + 0x20);
  thunk_FUN_01da0934();
  if ((iVar1 < 2) || (uVar7 = FUN_033f5900(&stack0x00000008), (uVar7 & 1) == 0)) {
    *(undefined1 (*) [16])(unaff_x19 + 1) = _in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
  }
  else {
    if (unaff_x21 == 0) {
LAB_033f3c5c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    (**(code **)(unaff_x21 + 0x18))(*(undefined8 *)(unaff_x21 + 0x40));
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  return;
}


