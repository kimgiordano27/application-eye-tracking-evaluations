/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$EnqueueLogEntry
ENTRY_POINT: 04c10f78
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__EnqueueLogEntry(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  int *unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  ushort uVar13;
  ushort uVar14;
  long *plVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ushort uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc0d8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc558);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9598);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1ce8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e53f0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd1f0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cc868);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2728);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cc870);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cd610);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd658);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd660);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e53f8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5400);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1700);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c98d0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4180);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5408);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5410);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8668);
  *(undefined1 *)(unaff_x20 + 0x5cf) = 1;
  puVar3 = PTR_DAT_065e44b8;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (*unaff_x19 == 0) {
    _in_stack_00000050 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 8) + 0x38);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = FUN_054dcf98(lVar5,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
                    /* try { // try from 04c110b8 to 04d111d7 has its CatchHandler @ 04c110b8
                       catch() { ... } // from try @ 04c110b8 with catch @ 04c110b8
                       catch() { ... } // from try @ 04c1129c with catch @ 04c110b8
                       catch() { ... } // from try @ 04c1135c with catch @ 04c110b8
                       catch() { ... } // from try @ 04c11400 with catch @ 04c110b8 */
    _in_stack_00000050 = FUN_0404bcb8(lVar5,0,*(undefined8 *)PTR_DAT_065e1700);
    uVar6 = FUN_044a8fc8(&stack0x00000050,*(undefined8 *)PTR_DAT_065e16e8);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000050;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b9604(unaff_x19 + 2,&stack0x00000050);
      return;
    }
  }
  uVar7 = FUN_044a9014(&stack0x00000050,*(undefined8 *)PTR_DAT_065e16e0);
  uVar12 = *(undefined8 *)PTR_DAT_065c8668;
  if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar6 = FUN_054df770(*(long *)(unaff_x19 + 8),0);
  if ((uVar6 & 1) == 0) {
    uVar12 = *(undefined8 *)PTR_DAT_065e5410;
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 8) + 0x40);
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x30);
      if (lVar5 == 0) {
        uVar13 = 0;
        uVar14 = 0;
      }
      else {
        lVar5 = FUN_05685b20(lVar5,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar12 = thunk_FUN_02c7737c(PTR_DAT_065e5418);
        uVar4 = FUN_04db8e94(lVar5,uVar12,4,0);
        _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
        uVar12 = thunk_FUN_02c7737c(PTR_DAT_065cc870);
        FUN_03c80878(&stack0x00000008,uVar4 & 1,uVar12);
        uVar13 = uStack0000000000000008 >> 8;
        uVar14 = uStack0000000000000008;
      }
      thunk_FUN_02c7737c(PTR_DAT_065cc868);
      thunk_FUN_02c7737c(PTR_DAT_065cd610);
      if (((uVar14 & 0xff) != 0) && (uVar13 != 0)) {
        thunk_FUN_02c7737c(PTR_DAT_065e3a00);
        lVar5 = thunk_FUN_02cea894();
        FUN_04f7383c(lVar5,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        *(undefined8 *)(lVar5 + 0x10) = uVar7;
        goto LAB_04c11798;
      }
    }
    puVar3 = PTR_DAT_065dd1f0;
    lVar5 = thunk_FUN_02c7737c(PTR_DAT_065dd1f0);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (DAT_06a6975a == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd1f0);
      DAT_06a6975a = '\x01';
    }
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar5 = *(long *)puVar3;
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar12 = thunk_FUN_02c7737c(PTR_DAT_065e5420);
    lVar5 = FUN_0349e5c8(lVar5,uVar7,uVar12);
LAB_04c11798:
    if (*(long *)(unaff_x19 + 8) != 0) {
      uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 8) + 0x20);
      _uStack0000000000000008 = 0;
      uVar7 = thunk_FUN_02c7737c(PTR_DAT_065e5428);
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000008,uVar1,uVar7);
      thunk_FUN_02c7737c(PTR_DAT_065e3a10);
      uVar7 = thunk_FUN_02cea894();
      FUN_04c11c30(uVar7,lVar5,_uStack0000000000000008);
      uVar12 = thunk_FUN_02c7737c(PTR_DAT_065e5430);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar7,uVar12);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar5 = *(long *)(*(long *)(unaff_x19 + 8) + 0x40);
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x30), lVar5 != 0)) {
    lVar5 = FUN_05685b20(lVar5,0);
    uVar12 = FUN_04be9764(0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar12,uVar12);
    }
    uVar4 = FUN_04db8e94(lVar5,uVar12,4,0);
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
    FUN_03c80878(&stack0x00000008,uVar4 & 1,*(undefined8 *)PTR_DAT_065cc870);
                    /* try { // try from 04c111d8 to 04d111ff has its CatchHandler @ 04c1136c */
    if (((_uStack0000000000000008 & 0xff) != 0) && (0xff < uStack0000000000000008)) {
      lVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e4180);
      FUN_04f7383c(lVar5,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined8 *)(lVar5 + 0x40) = uVar7;
      goto LAB_04c11280;
    }
  }
  puVar2 = PTR_DAT_065dd1f0;
                    /* try { // try from 04c11218 to 04d11277 has its CatchHandler @ 04c11370 */
  uVar12 = *(undefined8 *)PTR_DAT_065e5408;
  if (*(int *)(*(long *)PTR_DAT_065dd1f0 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (DAT_06a6975a == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd1f0);
    DAT_06a6975a = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar5 = *(long *)puVar2;
  }
  if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar5 = FUN_0349e5c8(**(long **)(lVar5 + 0xb8),uVar7,*(undefined8 *)PTR_DAT_065e53f0);
LAB_04c11280:
  puVar2 = PTR_DAT_065e1ce8;
  plVar15 = *(long **)(unaff_x19 + 10);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar9 = *plVar15;
  uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e1ce8) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_04c112e0;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar15,*(long *)PTR_DAT_065e1ce8,1);
LAB_04c112e0:
  uVar7 = (*(code *)*puVar8)(plVar15,puVar8[1]);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(lVar5 + 0x48) = uVar7;
  if (*(long *)(lVar5 + 0x10) == 0) {
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar5 + 0x40);
  }
  uVar6 = FUN_04db9688(*(undefined8 *)(lVar5 + 0x50),0);
  if ((uVar6 & 1) == 0) {
    uVar7 = *(undefined8 *)(lVar5 + 0x50);
    if (*(int *)(*(long *)PTR_DAT_065dc0d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar12 = FUN_04ef45ec(0);
    if (*(int *)(*(long *)PTR_DAT_065dc558 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    auVar17 = FUN_04f16538(uVar7,uVar12,0);
    plVar15 = *(long **)(unaff_x19 + 10);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar9 = *plVar15;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_04c113d8;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar15,*(long *)puVar2,1);
LAB_04c113d8:
    uVar7 = (*(code *)*puVar8)(plVar15,puVar8[1]);
    auVar18 = FUN_04f18094(uVar7,0);
    in_stack_00000048 = FUN_04f1819c(auVar17._0_8_,auVar17._8_8_,auVar18._0_8_,auVar18._8_8_,0);
    if (*(int *)(*(long *)PTR_DAT_065c98d0 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    dVar16 = (double)FUN_04f47984(&stack0x00000048,0);
    _uStack0000000000000008 = 0;
    in_stack_00000010 = 0;
    lVar9 = -0x8000000000000000;
    if (dVar16 != INFINITY) {
      lVar9 = (long)dVar16;
    }
    FUN_03c87038(&stack0x00000008,lVar9,*(undefined8 *)PTR_DAT_065e2728);
    *(ulong *)(lVar5 + 0x20) = _uStack0000000000000008;
    *(undefined8 *)(lVar5 + 0x28) = in_stack_00000010;
    in_stack_00000030 = _uStack0000000000000008;
    in_stack_00000038 = in_stack_00000010;
  }
  else {
    in_stack_00000030 = *(ulong *)(lVar5 + 0x20);
    in_stack_00000038 = *(undefined8 *)(lVar5 + 0x28);
  }
  if (((in_stack_00000030 & 0xff) == 0) && (*(long *)(lVar5 + 0x40) != 0)) {
    lVar9 = FUN_03fa5bec(*(long *)(lVar5 + 0x40),*(undefined8 *)PTR_DAT_065e53f8);
    puVar2 = PTR_DAT_065e4180;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar10 = *(long *)(lVar9 + 0x30);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    in_stack_00000038 = *(undefined8 *)(lVar10 + 0x38);
    in_stack_00000030 = *(ulong *)(lVar10 + 0x30);
    if ((in_stack_00000030 & 0xff) != 0) {
      if (*(int *)(*(long *)PTR_DAT_065e4180 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar10 = *(long *)(lVar9 + 0x30);
        in_stack_00000028 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
      }
      else {
        in_stack_00000028 = **(undefined8 **)(*(long *)PTR_DAT_065e4180 + 0xb8);
      }
      in_stack_00000038 = *(undefined8 *)(lVar10 + 0x38);
      in_stack_00000030 = *(ulong *)(lVar10 + 0x30);
      lVar9 = FUN_03c87050(&stack0x00000030,*(undefined8 *)PTR_DAT_065dd660);
      if (*(int *)(*(long *)PTR_DAT_065c9598 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = FUN_04f10d08((double)lVar9,&stack0x00000028,0);
      in_stack_00000020 = FUN_04f13a54(uVar7,*(undefined8 *)(lVar5 + 0x48),0);
      if (*(int *)(*(long *)PTR_DAT_065c98d0 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      dVar16 = (double)FUN_04f47984(&stack0x00000020,0);
      _uStack0000000000000008 = 0;
      in_stack_00000010 = 0;
      lVar9 = -0x8000000000000000;
      if (dVar16 != INFINITY) {
        lVar9 = (long)dVar16;
      }
      FUN_03c87038(&stack0x00000008,lVar9,*(undefined8 *)PTR_DAT_065e2728);
      *(ulong *)(lVar5 + 0x20) = _uStack0000000000000008;
      *(undefined8 *)(lVar5 + 0x28) = in_stack_00000010;
    }
  }
  *unaff_x19 = -2;
  puVar2 = PTR_DAT_065e4520;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,lVar5,*(undefined8 *)puVar2);
  return;
}


