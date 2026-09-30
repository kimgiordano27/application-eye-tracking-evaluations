/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorName
ENTRY_POINT: 033f3990
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorName
               (long *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
               undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x23;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((*(byte *)(unaff_x23 + 0xbba) & 1) == 0) {
    FUN_01d7d918(StringLiteral_9367);
    FUN_01d7d918(StringLiteral_9368);
    FUN_01d7d918(StringLiteral_9369);
    FUN_01d7d918(StringLiteral_9370);
    FUN_01d7d918(StringLiteral_9371);
    FUN_01d7d918(StringLiteral_9372);
    FUN_01d7d918(StringLiteral_9373);
    *(undefined1 *)(unaff_x23 + 0xbba) = 1;
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iVar5 = *(int *)(param_2 + 0x20);
  thunk_FUN_01da0934();
  if (iVar5 < 2) {
    if (*(char *)(param_2 + 0x28) != '\0') goto LAB_033f3a48;
    iVar5 = FUN_033d7044(0);
    puVar4 = StringLiteral_9368;
    lVar9 = *(long *)StringLiteral_9368;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(lVar9);
      lVar9 = *(long *)puVar4;
    }
    iVar1 = *(int *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (param_5 == 0) {
      lVar9 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9367);
      FUN_033f60c8(lVar9,param_3,param_4,param_6,param_2);
    }
    else {
      lVar9 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9373);
      FUN_033f60c8(lVar9,param_3,param_4,param_6,param_2);
      *(long *)(lVar9 + 0x30) = param_5;
      thunk_FUN_01e10808((long *)(lVar9 + 0x30),param_5);
    }
    lVar11 = *(long *)(param_2 + 0x18);
    thunk_FUN_01da0934();
    if (lVar11 == 0) {
      lVar11 = *(long *)puVar4;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar11 = *(long *)puVar4;
      }
      lVar11 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_9369,
                            *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x10));
      thunk_FUN_01da0934();
      lVar6 = FUN_01d996c0((long *)(param_2 + 0x18),lVar11,0);
      if (lVar6 != 0) {
        lVar11 = lVar6;
      }
      if (lVar11 == 0) goto LAB_033f3c5c;
    }
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar5 / iVar1;
    }
    uVar2 = iVar5 - iVar3 * iVar1;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_033f3c60;
    plVar10 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
    lVar6 = *plVar10;
    thunk_FUN_01da0934();
    if (lVar6 == 0) {
      uVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9372);
      FUN_02679f58(uVar7,4,*(undefined8 *)StringLiteral_9371);
      if (*(uint *)(lVar11 + 0x18) <= uVar2) {
LAB_033f3c60:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      FUN_01d996c0(plVar10,uVar7,0);
      if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_033f3c60;
      lVar6 = *plVar10;
      if (lVar6 == 0) goto LAB_033f3c5c;
    }
    auVar12 = FUN_02679ffc(lVar6,lVar9,*(undefined8 *)StringLiteral_9370);
    in_stack_00000008 = lVar9;
    thunk_FUN_01e10808(&stack0x00000008,lVar9);
    _in_stack_00000010 = auVar12;
    thunk_FUN_01e10808(&stack0x00000010,0);
    iVar5 = *(int *)(param_2 + 0x20);
    thunk_FUN_01da0934();
    if (iVar5 < 2) {
LAB_033f3c48:
      *(undefined1 (*) [16])(param_1 + 1) = _in_stack_00000010;
      *param_1 = in_stack_00000008;
      return;
    }
    uVar8 = FUN_033f5900(&stack0x00000008);
    if ((uVar8 & 1) == 0) goto LAB_033f3c48;
  }
  if (param_3 == 0) {
LAB_033f3c5c:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  (**(code **)(param_3 + 0x18))
            (*(undefined8 *)(param_3 + 0x40),param_4,*(undefined8 *)(param_3 + 0x28));
LAB_033f3a48:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


