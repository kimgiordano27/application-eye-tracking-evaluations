/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$.ctor
ENTRY_POINT: 04c16c7c
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel___ctor(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int *unaff_x19;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1780);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5658);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2e00);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2e08);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1788);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1700);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a78);
  *(undefined1 *)(unaff_x20 + 0x606) = 1;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  auVar4 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iVar1 = *unaff_x19;
  lVar11 = *(long *)(unaff_x19 + 8);
  if (iVar1 == 0) {
    _in_stack_00000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (iVar1 == 2) {
      _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x1a);
      unaff_x19[0x1a] = 0;
      unaff_x19[0x1b] = 0;
      unaff_x19[0x1c] = 0;
      unaff_x19[0x1d] = 0;
      *unaff_x19 = -1;
      goto LAB_04c16ef4;
    }
    if (iVar1 == 1) {
      _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
      unaff_x19[0x16] = 0;
      unaff_x19[0x17] = 0;
      unaff_x19[0x18] = 0;
      unaff_x19[0x19] = 0;
      *unaff_x19 = -1;
      goto LAB_04c1703c;
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar12 = *(undefined8 *)(lVar11 + 0x68);
    uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c8a78);
    FUN_05683c18(uVar6,uVar12,0);
    lVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5658);
    FUN_04f7383c(lVar7,0);
    *(undefined8 *)(lVar7 + 0x10) = uVar6;
    *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(unaff_x19 + 10);
    puVar5 = PTR_DAT_065e2e00;
    if (*(int *)(*(long *)PTR_DAT_065e2e00 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (DAT_06a6d60e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2e00);
      DAT_06a6d60e = '\x01';
    }
    lVar8 = *(long *)puVar5;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar8 = *(long *)puVar5;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x20);
    uVar6 = FUN_04c120f4(lVar7);
    uVar12 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e2e08);
    FUN_054dba24(uVar12,uVar13,uVar6,0);
    plVar9 = *(long **)(lVar11 + 0x40);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar7 = (**(code **)(*plVar9 + 0x198))
                      (plVar9,uVar12,*(undefined8 *)(unaff_x19 + 0xc),
                       *(undefined8 *)(*plVar9 + 0x1a0));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _in_stack_00000030 = FUN_0404bcb8(lVar7,0,*(undefined8 *)PTR_DAT_065e1788);
    uVar10 = FUN_044a8fc8(&stack0x00000030,*(undefined8 *)PTR_DAT_065e1780);
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
      if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0335fc7c(unaff_x19 + 2,&stack0x00000030);
      return;
    }
  }
  lVar7 = FUN_044a9014(&stack0x00000030,*(undefined8 *)PTR_DAT_065e1778);
  *(long *)(unaff_x19 + 0x10) = lVar7;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar10 = FUN_054df770(lVar7,0);
  if ((uVar10 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x38);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = FUN_054dcf98(lVar11,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _in_stack_00000020 = FUN_0404bcb8(lVar11,0,*(undefined8 *)PTR_DAT_065e1700);
    uVar10 = FUN_044a8fc8(&stack0x00000020,*(undefined8 *)PTR_DAT_065e16e8);
    auVar3 = _in_stack_00000030;
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
      if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0335fc7c(unaff_x19 + 2,&stack0x00000020);
      return;
    }
LAB_04c1703c:
    _in_stack_00000030 = auVar3;
    uVar6 = thunk_FUN_02c7737c(PTR_DAT_065e16e0);
    uVar6 = FUN_044a9014(&stack0x00000020,uVar6);
    puVar5 = PTR_DAT_065dd1f0;
    lVar11 = thunk_FUN_02c7737c(PTR_DAT_065dd1f0);
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (DAT_06a6975a == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd1f0);
      DAT_06a6975a = '\x01';
    }
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar11 = *(long *)puVar5;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 != 0) {
      uVar12 = thunk_FUN_02c7737c(PTR_DAT_065e5420);
      uVar6 = FUN_0349e5c8(lVar11,uVar6,uVar12);
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        uVar2 = *(undefined4 *)(*(long *)(unaff_x19 + 0x10) + 0x20);
        in_stack_00000008 = 0;
        uVar12 = thunk_FUN_02c7737c(PTR_DAT_065e5428);
        Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                  (&stack0x00000008,uVar2,uVar12);
        thunk_FUN_02c7737c(PTR_DAT_065e3a10);
        uVar12 = thunk_FUN_02cea894();
        FUN_04c11c30(uVar12,uVar6,in_stack_00000008);
        uVar6 = thunk_FUN_02c7737c(PTR_DAT_065e5660);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar12,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar11 = FUN_04c140ec(lVar11,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 0xc));
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  _in_stack_00000010 = FUN_04fa5130(lVar11,0,0);
  uVar10 = FUN_04e5bb90(&stack0x00000010,0);
  auVar4 = _in_stack_00000030;
  if ((uVar10 & 1) == 0) {
    *unaff_x19 = 2;
    *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000010;
    if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_033614b8(unaff_x19 + 2,&stack0x00000010);
    return;
  }
LAB_04c16ef4:
  _in_stack_00000030 = auVar4;
  FUN_04e5bbac(&stack0x00000010,0);
  unaff_x19[0x10] = 0;
  unaff_x19[0x11] = 0;
  *unaff_x19 = -2;
  if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04e5a1e4(unaff_x19 + 2,0);
  return;
}


