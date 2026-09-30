/*
FUNCTION_NAME: OVRPlugin.<>c__DisplayClass528_0$$<GetVirtualKeyboardModelAnimationStates>b__1
ENTRY_POINT: 01dc5f28
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_<>c__DisplayClass528_0__<GetVirtualKeyboardModelAnimationStates>b__1
               (ulong param_1,long *param_2,uint param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 extraout_w1;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x21;
  uint unaff_w23;
  long unaff_x24;
  long *plVar10;
  undefined4 uStack_14;
  ulong uStack_10;
  long *plStack_8;
  
  plVar10 = *(long **)(unaff_x24 + 0xd48);
  uVar9 = (ulong)param_3;
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bd48);
    *(undefined1 *)(unaff_x21 + 0xad0) = 1;
  }
  uVar7 = *param_4 - param_2[2];
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  iVar2 = (int)(uVar7 >> 1) + -1;
  if (*(int *)(*plVar10 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar7 = FUN_01c6c314(uVar9,0);
  if ((uVar7 & 1) == 0) {
LAB_01dc6018:
    if (*(char *)((long)param_2 + 0x2a) != '\0') {
      iVar1 = *(int *)((long)param_2 + 0x2c);
      *(int *)((long)param_2 + 0x2c) = iVar1 + 1;
      if (0xfa < iVar1) {
        FUN_01dc60b4(uVar7,param_3 & 0xffff);
LAB_01dc6094:
        FUN_00e5daf0(*plVar10);
        uVar7 = FUN_01c6c454(uVar9,unaff_w23,0);
        FUN_01dc60b4(uVar7,uVar7 & 0xffffffff);
        uStack_14 = extraout_w1;
        uStack_10 = uVar9;
        plStack_8 = param_2;
        uVar4 = thunk_FUN_010303a8(PTR_DAT_0234bb30);
        uVar4 = thunk_FUN_0103fd0c(uVar4,&uStack_14);
        uVar5 = thunk_FUN_010303a8(PTR_DAT_0235acc0);
        uVar4 = FUN_01c42574(uVar5,uVar4,0);
        thunk_FUN_010303a8(PTR_DAT_0234bcd0);
        uVar5 = thunk_FUN_010400dc();
        uVar6 = thunk_FUN_010303a8(PTR_DAT_02355000);
        FUN_01c5e198(uVar5,uVar4,uVar6,0);
        uVar4 = thunk_FUN_010303a8(PTR_DAT_0235acc8);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar5,uVar4);
      }
    }
    bVar3 = (**(code **)(*param_2 + 0x178))(param_2,uVar9,iVar2,*(undefined8 *)(*param_2 + 0x180));
  }
  else {
    if ((ushort *)param_2[3] <= (ushort *)*param_4) {
      lVar8 = param_2[4];
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x30) == '\0')) {
        if ((char)param_2[5] != '\0') {
          *(undefined1 *)((long)param_2 + 0x29) = 1;
          *(short *)(lVar8 + 0x20) = (short)param_3;
        }
        bVar3 = 0;
        *(undefined1 *)((long)param_2 + 0x2a) = 0;
        goto LAB_01dc6054;
      }
      goto LAB_01dc6018;
    }
    unaff_w23 = (uint)*(ushort *)*param_4;
    if (*(int *)(*plVar10 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar7 = FUN_01c6c424(unaff_w23,0);
    if ((uVar7 & 1) == 0) goto LAB_01dc6018;
    if (*(char *)((long)param_2 + 0x2a) != '\0') {
      iVar1 = *(int *)((long)param_2 + 0x2c);
      *(int *)((long)param_2 + 0x2c) = iVar1 + 1;
      if (0xfa < iVar1) goto LAB_01dc6094;
    }
    *param_4 = *param_4 + 2;
    bVar3 = (**(code **)(*param_2 + 0x188))
                      (param_2,uVar9,unaff_w23,iVar2,*(undefined8 *)(*param_2 + 400));
  }
  *(byte *)((long)param_2 + 0x2a) = bVar3 & 1;
LAB_01dc6054:
  return bVar3 & 1;
}


