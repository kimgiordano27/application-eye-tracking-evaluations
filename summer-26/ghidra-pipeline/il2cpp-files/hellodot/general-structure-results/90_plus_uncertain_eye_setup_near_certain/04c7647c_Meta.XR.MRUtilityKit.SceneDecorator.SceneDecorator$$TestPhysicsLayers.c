/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$TestPhysicsLayers
ENTRY_POINT: 04c7647c
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__TestPhysicsLayers(void)

{
  byte bVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  int *unaff_x19;
  long unaff_x20;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  long *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1b20);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1b28);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1b30);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7bd8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8580);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccac8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e8170);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7be8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cc868);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cc870);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e80e8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1700);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1b38);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccaf8);
  *(undefined1 *)(unaff_x20 + 0xab3) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  auVar6 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  auVar4 = ZEXT816(0);
  auVar18 = ZEXT816(0);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = (long *)0x0;
  in_stack_00000018 = 0;
  iVar8 = *unaff_x19;
  plVar15 = *(long **)(unaff_x19 + 8);
  auVar3 = ZEXT816(0);
  switch(iVar8) {
  case 0:
    break;
  case 1:
  case 2:
    goto switchD_04c76564_caseD_1;
  case 3:
    in_stack_00000018 = *(ulong *)(unaff_x19 + 0x28);
    in_stack_00000010 = *(long **)(unaff_x19 + 0x26);
    unaff_x19[0x26] = 0;
    unaff_x19[0x27] = 0;
    unaff_x19[0x28] = 0;
    unaff_x19[0x29] = 0;
    *unaff_x19 = -1;
    goto LAB_04c76ccc;
  case 4:
    unaff_x19[0x2a] = 0;
    unaff_x19[0x2b] = 0;
    unaff_x19[0x2c] = 0;
    unaff_x19[0x2d] = 0;
    *unaff_x19 = -1;
    goto LAB_04c76e84;
  default:
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar10 = FUN_04c6c3fc(plVar15,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(unaff_x19 + 0xc));
    auVar3._8_8_ = in_stack_00000048;
    auVar3._0_8_ = in_stack_00000040;
    auVar18._8_8_ = in_stack_00000038;
    auVar18._0_8_ = in_stack_00000030;
    lVar13 = *(long *)(unaff_x19 + 0xc);
    *(long *)(unaff_x19 + 0x10) = lVar10;
    if (lVar13 == 0) {
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x12) = *(undefined8 *)(lVar13 + 0x30);
      _in_stack_00000030 = auVar18;
      _in_stack_00000040 = auVar3;
      if (0xff < *(ushort *)(lVar13 + 0x38)) {
        lVar10 = FUN_04c5fc50(lVar13);
        if (lVar10 != 0) {
          lVar10 = (**(code **)(*plVar15 + 0x2e8))
                             (plVar15,*(undefined8 *)(unaff_x19 + 10),lVar10,
                              *(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(*plVar15 + 0x2f0));
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          _in_stack_00000040 = FUN_0404bcb8(lVar10,0,*(undefined8 *)PTR_DAT_065e80e8);
          uVar11 = FUN_044a8fc8(&stack0x00000040,*(undefined8 *)PTR_DAT_065e80e0);
          if ((uVar11 & 1) == 0) {
            *unaff_x19 = 0;
            *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000040;
            if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            FUN_0335ff64(unaff_x19 + 2,&stack0x00000040);
            return;
          }
          goto LAB_04c7657c;
        }
        goto LAB_04c76590;
      }
    }
    goto LAB_04c76e34;
  }
  _in_stack_00000040 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
  iVar8 = -1;
  unaff_x19[0x16] = 0;
  unaff_x19[0x17] = 0;
  unaff_x19[0x18] = 0;
  unaff_x19[0x19] = 0;
  *unaff_x19 = -1;
LAB_04c7657c:
  FUN_044a9014(&stack0x00000040,*(undefined8 *)PTR_DAT_065e80d8);
LAB_04c76590:
  uVar16 = *(undefined8 *)(unaff_x19 + 10);
  lVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7be8);
  FUN_04f7383c(lVar10,0);
  in_stack_00000058._4_2_ = 0;
  FUN_03c80878((long)&stack0x00000058 + 4,1,*(undefined8 *)PTR_DAT_065cc870);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined2 *)(lVar10 + 0x24) = in_stack_00000058._4_2_;
  *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(unaff_x19 + 0x12);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  plVar9 = (long *)(**(code **)(*plVar15 + 0x3f8))
                             (plVar15,uVar16,0,lVar10,*(undefined8 *)(*plVar15 + 0x400));
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar16 = (**(code **)(*plVar9 + 0x198))(plVar9,0,*(undefined8 *)(*plVar9 + 0x1a0));
  *(undefined8 *)(unaff_x19 + 0x14) = uVar16;
  unaff_x19[0x1a] = 0;
  unaff_x19[0x1b] = 0;
  unaff_x19[0x1c] = 0;
  auVar3 = _in_stack_00000040;
switchD_04c76564_caseD_1:
  puVar7 = PTR_DAT_065e8170;
  if (iVar8 == 1) {
    _in_stack_00000030 = *(undefined1 (*) [16])(unaff_x19 + 0x1e);
    unaff_x19[0x1e] = 0;
    unaff_x19[0x1f] = 0;
    unaff_x19[0x20] = 0;
    unaff_x19[0x21] = 0;
    *unaff_x19 = -1;
    goto LAB_04c76908;
  }
  _in_stack_00000040 = auVar3;
  if (iVar8 != 2) goto LAB_04c76914;
  in_stack_00000028 = *(ulong *)(unaff_x19 + 0x24);
  in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x22);
  unaff_x19[0x22] = 0;
  unaff_x19[0x23] = 0;
  unaff_x19[0x24] = 0;
  unaff_x19[0x25] = 0;
  *unaff_x19 = -1;
  while( true ) {
    lVar10 = *(long *)(*(long *)PTR_DAT_065e1b28 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02ce0978();
    }
    uVar11 = FUN_04187860(&stack0x00000020,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20));
    if ((uVar11 & 1) == 0) break;
    plVar9 = *(long **)(unaff_x19 + 0x14);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar13 = *plVar9;
    lVar10 = *(long *)puVar7;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar11 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04c7686c;
        }
        uVar11 = uVar11 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar10,1);
LAB_04c7686c:
    plVar9 = (long *)(*(code *)*puVar12)(plVar9,puVar12[1]);
    lVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7bd8);
    FUN_04f7383c(lVar10,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(unaff_x19 + 0x12);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar18 = (**(code **)(*plVar9 + 0x378))(plVar9,*(undefined8 *)(*plVar9 + 0x380));
    *(undefined1 (*) [16])(lVar10 + 0x10) = auVar18;
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar10 = (**(code **)(*plVar15 + 0x288))
                       (plVar15,plVar9,lVar10,*(undefined8 *)(unaff_x19 + 0xe),
                        *(undefined8 *)(*plVar15 + 0x290));
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar18 = FUN_04fa5130(lVar10,0,0);
    _in_stack_00000030 = auVar18;
    uVar11 = FUN_04e5bb90(&stack0x00000030,0);
    auVar3 = _in_stack_00000040;
    if ((uVar11 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x1e) = _in_stack_00000030;
      if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_033630d0(unaff_x19 + 2,&stack0x00000030);
      return;
    }
LAB_04c76908:
    _in_stack_00000040 = auVar3;
    FUN_04e5bbac(&stack0x00000030,0);
LAB_04c76914:
    plVar9 = *(long **)(unaff_x19 + 0x14);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar13 = *plVar9;
    lVar10 = *(long *)puVar7;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar11 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04c76968;
        }
        uVar11 = uVar11 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar10,0);
LAB_04c76968:
    auVar18 = (*(code *)*puVar12)(plVar9,puVar12[1]);
    lVar10 = *(long *)PTR_DAT_065e1b38;
    uVar2 = *(ushort *)(*(long *)(lVar10 + 0x20) + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_02ce0978();
      uVar2 = *(ushort *)(*(long *)(lVar10 + 0x20) + 0x135);
    }
    if ((uVar2 & 1) == 0) {
      FUN_02ce0978();
    }
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_065e1b20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02ce0978();
    }
    in_stack_00000028 = auVar18._8_8_ & 0xffff00ff;
    lVar10 = *(long *)(*(long *)PTR_DAT_065e1b30 + 0x20);
    in_stack_00000020 = auVar18._0_8_;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02ce0978();
    }
    uVar11 = FUN_04187744(&stack0x00000020,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x10));
    if ((uVar11 & 1) == 0) {
      *unaff_x19 = 2;
      *(ulong *)(unaff_x19 + 0x24) = in_stack_00000028;
      *(undefined8 *)(unaff_x19 + 0x22) = in_stack_00000020;
      if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0336024c(unaff_x19 + 2,&stack0x00000020);
      return;
    }
  }
  plVar15 = *(long **)(unaff_x19 + 0x14);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar10 = *plVar15;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065ccac8) {
        puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_04c76b98;
      }
      uVar11 = uVar11 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar11 != 0);
  }
  puVar12 = (undefined8 *)FUN_02ce0a7c(plVar15,*(long *)PTR_DAT_065ccac8,0);
LAB_04c76b98:
  auVar18 = (*(code *)*puVar12)(plVar15,puVar12[1]);
  puVar7 = PTR_DAT_065ccaf8;
  if (*(int *)(*(long *)PTR_DAT_065ccaf8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  in_stack_00000018 = auVar18._8_8_ & 0xffff;
  in_stack_00000010 = auVar18._0_8_;
  if (DAT_06a6dac6 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccaf8);
    DAT_06a6dac6 = '\x01';
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (DAT_06a675a7 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccb08);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89a0);
    DAT_06a675a7 = '\x01';
  }
  plVar15 = in_stack_00000010;
  auVar18 = _in_stack_00000030;
  auVar5 = _in_stack_00000040;
  if (in_stack_00000010 != (long *)0x0) {
    lVar10 = *in_stack_00000010;
    bVar1 = *(byte *)(*(long *)PTR_DAT_065c89a0 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_065c89a0)) {
      uVar17 = in_stack_00000018 & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065ccb08) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04c76cb8;
          }
          uVar11 = uVar11 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_02ce0a7c(in_stack_00000010,*(long *)PTR_DAT_065ccb08,0);
LAB_04c76cb8:
      iVar8 = (*(code *)*puVar12)(plVar15,uVar17,puVar12[1]);
      auVar18 = _in_stack_00000030;
      auVar5 = _in_stack_00000040;
      if (iVar8 == 0) goto LAB_04c76f34;
    }
    else {
      uVar11 = FUN_04fa4eac(in_stack_00000010,0);
      auVar18 = _in_stack_00000030;
      auVar5 = _in_stack_00000040;
      if ((uVar11 & 1) == 0) {
LAB_04c76f34:
        *unaff_x19 = 3;
        *(ulong *)(unaff_x19 + 0x28) = in_stack_00000018;
        *(long **)(unaff_x19 + 0x26) = in_stack_00000010;
        if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_03363cec(unaff_x19 + 2,&stack0x00000010);
        return;
      }
    }
  }
LAB_04c76ccc:
  _in_stack_00000030 = auVar18;
  _in_stack_00000040 = auVar5;
  if (DAT_06a6dac7 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccaf8);
    DAT_06a6dac7 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_065ccaf8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (DAT_06a675a9 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccb08);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89a0);
    DAT_06a675a9 = '\x01';
  }
  plVar15 = in_stack_00000010;
  if (in_stack_00000010 != (long *)0x0) {
    lVar10 = *in_stack_00000010;
    bVar1 = *(byte *)(*(long *)PTR_DAT_065c89a0 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_065c89a0)) {
      uVar17 = in_stack_00000018 & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065ccb08) {
            puVar12 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_04c76dc4;
          }
          uVar11 = uVar11 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_02ce0a7c(in_stack_00000010,*(long *)PTR_DAT_065ccb08,2);
LAB_04c76dc4:
      (*(code *)*puVar12)(plVar15,uVar17,puVar12[1]);
    }
    else {
      FUN_04e5b610(in_stack_00000010,0);
    }
  }
  plVar15 = *(long **)(unaff_x19 + 0x1a);
  if (plVar15 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_065c8580 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar15 + 0x130)) &&
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_065c8580))
    {
      lVar10 = FUN_04e59944(plVar15,0);
      if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04e59a04(lVar10,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar16 = thunk_FUN_02c7737c(PTR_DAT_065e8178);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(plVar15,uVar16);
  }
  lVar10 = *(long *)(unaff_x19 + 0x10);
  unaff_x19[0x1a] = 0;
  unaff_x19[0x1b] = 0;
  unaff_x19[0x14] = 0;
  unaff_x19[0x15] = 0;
LAB_04c76e34:
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar10 = FUN_043d0cd8(lVar10,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_065e7c00);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar18 = FUN_0404bcb8(lVar10,0,*(undefined8 *)PTR_DAT_065e1700);
  uVar11 = FUN_044a8fc8();
  auVar4 = _in_stack_00000030;
  auVar6 = _in_stack_00000040;
  if ((uVar11 & 1) == 0) {
    *unaff_x19 = 4;
    *(undefined1 (*) [16])(unaff_x19 + 0x2a) = auVar18;
    if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_0335ff64(unaff_x19 + 2);
    return;
  }
LAB_04c76e84:
  _in_stack_00000030 = auVar4;
  _in_stack_00000040 = auVar6;
  FUN_044a9014();
  unaff_x19[0x10] = 0;
  unaff_x19[0x11] = 0;
  unaff_x19[0x12] = 0;
  unaff_x19[0x13] = 0;
  *unaff_x19 = -2;
  if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04e5a1e4(unaff_x19 + 2,0);
  return;
}


