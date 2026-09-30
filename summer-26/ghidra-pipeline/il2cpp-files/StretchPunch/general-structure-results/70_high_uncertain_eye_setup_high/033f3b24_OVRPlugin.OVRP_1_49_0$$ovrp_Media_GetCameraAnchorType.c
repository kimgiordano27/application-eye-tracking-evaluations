/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorType
ENTRY_POINT: 033f3b24
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


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorType(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  int unaff_w24;
  long *plVar7;
  int unaff_w27;
  long *unaff_x28;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
    param_1 = *unaff_x28;
  }
  lVar3 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_9369,
                       *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x10));
  thunk_FUN_01da0934();
  lVar4 = FUN_01d996c0();
  if (lVar4 != 0) {
    lVar3 = lVar4;
  }
  if (lVar3 != 0) {
    iVar2 = 0;
    if (unaff_w27 != 0) {
      iVar2 = unaff_w24 / unaff_w27;
    }
    uVar1 = unaff_w24 - iVar2 * unaff_w27;
    if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_033f3c60;
    plVar7 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
    lVar4 = *plVar7;
    thunk_FUN_01da0934();
    if (lVar4 == 0) {
      uVar5 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9372);
      FUN_02679f58(uVar5,4,*(undefined8 *)StringLiteral_9371);
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
LAB_033f3c60:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      FUN_01d996c0(plVar7,uVar5,0);
      if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_033f3c60;
      lVar4 = *plVar7;
      if (lVar4 == 0) goto LAB_033f3c5c;
    }
    auVar8 = FUN_02679ffc(lVar4);
    in_stack_00000008 = unaff_x23;
    thunk_FUN_01e10808(&stack0x00000008);
    _in_stack_00000010 = auVar8;
    thunk_FUN_01e10808(&stack0x00000010,0);
    iVar2 = *(int *)(unaff_x22 + 0x20);
    thunk_FUN_01da0934();
    if ((iVar2 < 2) || (uVar6 = FUN_033f5900(&stack0x00000008), (uVar6 & 1) == 0)) {
      *(undefined1 (*) [16])(unaff_x19 + 1) = _in_stack_00000010;
      *unaff_x19 = in_stack_00000008;
    }
    else {
      if (unaff_x21 == 0) goto LAB_033f3c5c;
      (**(code **)(unaff_x21 + 0x18))(*(undefined8 *)(unaff_x21 + 0x40));
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
    }
    return;
  }
LAB_033f3c5c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


