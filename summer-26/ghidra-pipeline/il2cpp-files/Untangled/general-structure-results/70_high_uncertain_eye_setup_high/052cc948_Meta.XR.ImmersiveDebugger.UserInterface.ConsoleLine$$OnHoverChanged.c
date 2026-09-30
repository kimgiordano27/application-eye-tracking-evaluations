/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ConsoleLine$$OnHoverChanged
ENTRY_POINT: 052cc948
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_ConsoleLine__OnHoverChanged
          (ulong param_1,undefined1 param_2 [16],undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  float *pfVar9;
  long unaff_x19;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  double dVar27;
  ulong uVar28;
  float fVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  long in_stack_00000088;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3d5f8);
    FUN_02f07e70(PTR_DAT_06d03770);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(PTR_DAT_06d03818);
    *(undefined1 *)(unaff_x19 + 0x9e) = 1;
  }
  puVar1 = PTR_DAT_06d01e20;
  in_stack_00000038 = 0.0;
  _fStack0000000000000030 = 0;
  fStack000000000000002c = 0.0;
  plVar10 = *(long **)(unaff_x20 + 0x28);
  if (*(int *)(unaff_x20 + 0x10) == 1) {
    *(undefined4 *)(unaff_x20 + 0x10) = 0xfffffffd;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
  else {
    if (*(int *)(unaff_x20 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
    *(undefined1 *)(unaff_x20 + 0x30) = 0;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0(0);
    }
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar4 = FUN_05290058(*(long *)(unaff_x20 + 0x20),plVar10[0x19],1,0);
    *(undefined8 *)(in_stack_00000088 + 0x38) = uVar4;
    thunk_FUN_02f411dc();
    uVar4 = *(undefined8 *)(in_stack_00000088 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(uVar4,0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar4 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x20),0);
      *(undefined8 *)(in_stack_00000088 + 0x38) = uVar4;
      thunk_FUN_02f411dc();
    }
    if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar4 = FUN_037f15fc(*(long *)(in_stack_00000088 + 0x38),*(undefined8 *)PTR_DAT_06d3d5f8);
    *(undefined8 *)(in_stack_00000088 + 0x40) = uVar4;
    thunk_FUN_02f411dc();
    if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(undefined8 *)(in_stack_00000088 + 0x48) =
         *(undefined8 *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
    thunk_FUN_02f411dc();
    if (*(long *)(in_stack_00000088 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar12 = FUN_06741624(*(long *)(in_stack_00000088 + 0x48),0);
    *(undefined4 *)(in_stack_00000088 + 0x50) = uVar12;
    if (*(long *)(in_stack_00000088 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar12 = FUN_067416ac(*(long *)(in_stack_00000088 + 0x48),0);
    *(undefined4 *)(in_stack_00000088 + 0x54) = uVar12;
    if (*(long *)(in_stack_00000088 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    bVar3 = FUN_067417bc(*(long *)(in_stack_00000088 + 0x48),0);
    *(byte *)(in_stack_00000088 + 0x58) = bVar3 & 1;
    *(undefined4 *)(in_stack_00000088 + 0x10) = 0xfffffffd;
    if (plVar10[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_052cb19c(plVar10[0x19],*(undefined8 *)(in_stack_00000088 + 0x20));
    *(undefined1 *)(plVar10 + 0x2a) = 0;
    (**(code **)(*plVar10 + 0x1e8))(plVar10,1,*(undefined8 *)(*plVar10 + 0x1f0));
    if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar6 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_067417f8(lVar6,0,0);
    if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar6 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_06741660(0,lVar6,0);
    if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar6 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_067416e8(0,lVar6,0);
    if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar19 = FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
    uVar12 = *(undefined4 *)((long)plVar10 + 0x11c);
    uVar4 = param_3;
    uVar5 = param_4;
    uVar20 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
    uVar21 = uVar4;
    (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
    FUN_05297ad0(uVar19,param_3,param_4,uVar12,uVar20,uVar4,uVar5,
                 (float)uVar21 + *(float *)(plVar10 + 0x24),0,&stack0x00000030,&stack0x0000002c,0);
    if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar6 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_06741454(_fStack0000000000000030 & 0xffffffff,fStack0000000000000034,in_stack_00000038,lVar6
                 ,0);
    *(undefined4 *)(in_stack_00000088 + 0x5c) = 0;
    if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar11 = plVar10[0x2d];
    lVar6 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x20),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d48c0(lVar6,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d4960(lVar11,0);
    if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar11 = plVar10[0x2d];
    lVar6 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x20),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d320c(lVar6,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d4ae0(lVar11,0);
    uVar4 = *(undefined8 *)(in_stack_00000088 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(uVar4,0);
    if ((uVar5 & 1) != 0) {
      if (plVar10[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(long *)(in_stack_00000088 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar6 = plVar10[0x2d];
      FUN_052c3304(*(long *)(in_stack_00000088 + 0x40),*(undefined4 *)(plVar10[0x19] + 0xdc),0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_066d4ae0(lVar6,0);
    }
    if (plVar10[0x2d] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar6 = FUN_066c67ec(plVar10[0x2d],0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar4 = FUN_03a862a4(lVar6,*(undefined8 *)PTR_DAT_06d03770);
    *(undefined8 *)(in_stack_00000088 + 0x60) = uVar4;
    thunk_FUN_02f411dc();
    if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_06744404(*(long *)(in_stack_00000088 + 0x60),0,0);
    if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_06746704(*(long *)(in_stack_00000088 + 0x60),1,0);
    FUN_0529a940(0,0,0,*(undefined8 *)(in_stack_00000088 + 0x60),0);
    param_4 = (ulong)DAT_013f6c2c;
    FUN_0529a830(param_4,0x42c80000,*(undefined8 *)(in_stack_00000088 + 0x60),0);
    if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_06743fdc(*(long *)(in_stack_00000088 + 0x60),*(undefined8 *)(in_stack_00000088 + 0x48),0);
    if (*(long *)(in_stack_00000088 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar11 = *(long *)(in_stack_00000088 + 0x60);
    lVar6 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x48),0);
    if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d6014(lVar6,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_06744330(lVar11,0);
    *(undefined8 *)(in_stack_00000088 + 0x70) = *(undefined8 *)(in_stack_00000088 + 0x40);
    *(undefined1 *)(in_stack_00000088 + 0x68) = 0;
    *(undefined4 *)(in_stack_00000088 + 0x6c) = 0;
    thunk_FUN_02f411dc();
  }
  fVar23 = (float)param_4;
  lVar6 = plVar10[0x13];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_066cd30c(lVar6,0);
  if (((uVar5 & 1) == 0) ||
     (*(float *)((long)plVar10 + 0x11c) < *(float *)(in_stack_00000088 + 0x5c))) goto LAB_052cd430;
  fVar13 = (float)(**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar32 = fVar23;
  fVar14 = (float)FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  if (DAT_071babf8 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf8 = '\x01';
  }
  puVar2 = PTR_DAT_06d03010;
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  dVar27 = DAT_013f5fd8;
  fVar22 = *(float *)(in_stack_00000088 + 0x5c);
  fVar31 = fVar22 / *(float *)((long)plVar10 + 0x11c);
  fVar15 = *(float *)(plVar10 + 0x24);
  if (DAT_013f5fd8 <= (double)fVar31) {
    if ((char)plVar10[0x2a] != '\0') {
      if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar6 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar23 = (float)FUN_067413b4(lVar6,0);
      if (DAT_071babf8 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf8 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      fVar32 = *(float *)((long)plVar10 + 0x134);
      fVar13 = SUB84(dVar27,0) * SUB84(dVar27,0);
      if (fVar32 < SQRT(fVar13 + fVar23 * fVar23 + fVar22 * fVar22)) {
        if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar6 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar23 = (float)FUN_067413b4(lVar6,0);
        if (DAT_071babf2 == '\0') {
          FUN_02f07e70(PTR_DAT_06d03010);
          DAT_071babf2 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        fVar14 = SQRT(fVar32 * fVar32 + fVar23 * fVar23 + fVar13 * fVar13);
        if (fVar14 <= DAT_013f6c1c) {
          if (DAT_071babf5 == '\0') {
            FUN_02f07e70(PTR_DAT_06d02c10);
            DAT_071babf5 = '\x01';
          }
          pfVar9 = *(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
          fVar23 = *pfVar9;
          fVar13 = pfVar9[1];
          fVar32 = pfVar9[2];
        }
        else {
          fVar23 = fVar23 / fVar14;
          fVar13 = fVar13 / fVar14;
          fVar32 = fVar32 / fVar14;
        }
        fVar14 = *(float *)((long)plVar10 + 0x134);
        FUN_06741454(fVar23 * fVar14,fVar13 * fVar14,fVar32 * fVar14,lVar6,0);
      }
      (**(code **)(*plVar10 + 0x328))(plVar10,*(undefined8 *)(*plVar10 + 0x330));
      goto LAB_052cd430;
    }
  }
  else {
    *(undefined1 *)(plVar10 + 0x2a) = 0;
  }
  if (*(char *)((long)plVar10 + 0x13c) != '\0') {
    plVar7 = (long *)plVar10[0x19];
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar5 = (**(code **)(*plVar7 + 0x368))(plVar7,plVar10[0x13],*(undefined8 *)(*plVar7 + 0x370));
    fVar18 = SUB84(dVar27,0);
    if ((uVar5 & 1) != 0) {
      if (plVar10[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar5 = FUN_052cb1ec(plVar10[0x19],plVar10[0x13],*(undefined8 *)(in_stack_00000088 + 0x40));
      if ((uVar5 & 1) == 0) goto LAB_052cd040;
LAB_052cd104:
      *(undefined1 *)(in_stack_00000088 + 0x30) = 1;
      *(undefined1 *)(plVar10 + 0x2f) = 0;
      goto LAB_052cd430;
    }
LAB_052cd040:
    if (*(char *)((long)plVar10 + 0x13c) != '\0') {
      fVar16 = (float)(**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
      if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar26 = fVar22;
      fVar29 = fVar18;
      fVar17 = (float)FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
      if (DAT_071babf8 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf8 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (SQRT((fVar18 - fVar29) * (fVar18 - fVar29) +
               (fVar16 - fVar17) * (fVar16 - fVar17) + (fVar22 - fVar26) * (fVar22 - fVar26)) <
          *(float *)((long)plVar10 + 0x144)) {
        if (plVar10[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar5 = FUN_052cb1ec(plVar10[0x19],plVar10[0x13],*(undefined8 *)(in_stack_00000088 + 0x40));
        if ((uVar5 & 1) != 0) goto LAB_052cd104;
      }
    }
  }
  uVar4 = 0;
  fVar23 = (fVar23 - fVar32) * (fVar23 - fVar32);
  uVar5 = (ulong)(uint)fVar23;
  fVar23 = SQRT(fVar23 + (fVar13 - fVar14) * (fVar13 - fVar14) + 0.0);
  if (fVar23 < DAT_013f6b64) {
LAB_052cd430:
    if (*(long *)(in_stack_00000088 + 0x60) != 0) {
      FUN_06743fdc(*(long *)(in_stack_00000088 + 0x60),0,0);
      uVar4 = *(undefined8 *)(in_stack_00000088 + 0x60);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_066cdd04(uVar4,0);
      FUN_052c9fd0(plVar10);
      *(undefined8 *)(in_stack_00000088 + 0x60) = 0;
      thunk_FUN_02f411dc((undefined8 *)(in_stack_00000088 + 0x60),0);
      *(undefined8 *)(in_stack_00000088 + 0x70) = 0;
      thunk_FUN_02f411dc((undefined8 *)(in_stack_00000088 + 0x70),0);
      FUN_052cd990(in_stack_00000088);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar12 = FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  fVar32 = *(float *)((long)plVar10 + 0x11c);
  fVar13 = *(float *)(in_stack_00000088 + 0x5c);
  uVar24 = uVar5;
  uVar21 = uVar4;
  uVar19 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
  uVar25 = uVar24;
  (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
  FUN_05297ad0(uVar12,uVar5,uVar4,fVar32 - fVar13,uVar19,uVar24,uVar21,
               fVar15 * (1.0 - fVar31) + (float)uVar25,0,&stack0x00000030,&stack0x0000002c,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar6 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06741454(_fStack0000000000000030 & 0xffffffff,fStack0000000000000034,in_stack_00000038,lVar6,0
              );
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar6 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (DAT_071bab7b == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
    DAT_071bab7b = '\x01';
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar25 = (ulong)(uint)fStack000000000000002c;
  uVar24 = (ulong)(uint)(fStack000000000000002c *
                        -*(float *)(*(long *)(*(long *)PTR_DAT_06d02c10 + 0xb8) + 0x20));
  uVar5 = (ulong)(uint)(-(float)((ulong)*(undefined8 *)
                                         (*(long *)(*(long *)PTR_DAT_06d02c10 + 0xb8) + 0x18) >>
                                0x20) * fStack000000000000002c);
  FUN_06742700(lVar6,5,0);
  uVar4 = *(undefined8 *)(in_stack_00000088 + 0x70);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar8 = FUN_066cd30c(uVar4,0);
  if ((uVar8 & 1) != 0) {
    if ((fVar31 <= DAT_013f6f14) || (*(char *)(in_stack_00000088 + 0x68) != '\0')) {
      if (*(char *)(in_stack_00000088 + 0x68) == '\0') goto LAB_052cd608;
    }
    else {
      if (DAT_071babf8 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf8 = '\x01';
      }
      fVar14 = in_stack_00000038;
      fVar31 = (float)uVar25;
      fVar22 = (float)uVar24;
      fVar15 = (float)uVar5;
      fVar13 = fStack0000000000000030;
      fVar32 = fStack0000000000000034;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar6 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x60),0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar18 = (float)FUN_066d320c(lVar6,0);
      if (plVar10[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar16 = fVar15;
      fVar26 = fVar22;
      fVar29 = fVar31;
      fVar17 = (float)FUN_052cc80c();
      uVar24 = (ulong)(uint)fVar23;
      uVar25 = (ulong)(uint)(fVar31 * fVar29);
      fVar15 = (float)NEON_fminnm(ABS(fVar31 * fVar29 +
                                      fVar22 * fVar26 + fVar18 * fVar17 + fVar15 * fVar16),
                                  0x3f800000);
      fVar22 = 0.0;
      if (fVar15 <= DAT_013f6c48) {
        fVar15 = acosf(fVar15);
        fVar22 = (fVar15 + fVar15) * DAT_013f6f10;
      }
      uVar5 = (ulong)(uint)fVar22;
      *(float *)(in_stack_00000088 + 0x6c) =
           fVar22 / (fVar23 / SQRT(fVar13 * fVar13 + fVar32 * fVar32 + fVar14 * fVar14));
      *(undefined1 *)(in_stack_00000088 + 0x68) = 1;
    }
    if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar6 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x60),0);
    if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar11 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x60),0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar4 = FUN_066d320c(lVar11,0);
    if (plVar10[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar8 = uVar5;
    uVar28 = uVar24;
    uVar30 = uVar25;
    uVar21 = FUN_052cc80c();
    FUN_066d1758(0);
    fVar23 = (float)NEON_fminnm(ABS((float)uVar25 * (float)uVar30 +
                                    (float)uVar24 * (float)uVar28 +
                                    (float)uVar4 * (float)uVar21 + (float)uVar5 * (float)uVar8),
                                0x3f800000);
    if ((fVar23 <= DAT_013f6c48) &&
       (fVar23 = acosf(fVar23), (fVar23 + fVar23) * DAT_013f6f10 != 0.0)) {
      uVar21 = FUN_066bd84c(uVar4,uVar5,uVar24,uVar25,uVar21,uVar8,uVar28,uVar30,0);
      uVar8 = uVar5;
      uVar28 = uVar24;
      uVar30 = uVar25;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d4ae0(uVar21,uVar8,uVar28,uVar30,lVar6,0);
  }
LAB_052cd608:
  fVar13 = *(float *)(in_stack_00000088 + 0x5c);
  fVar23 = (float)FUN_066d1758(0);
  *(float *)(in_stack_00000088 + 0x5c) = fVar13 + fVar23;
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03818);
  FUN_066cf184(uVar4,0);
  *(undefined8 *)(in_stack_00000088 + 0x18) = uVar4;
  thunk_FUN_02f411dc((undefined8 *)(in_stack_00000088 + 0x18),uVar4);
  *(undefined4 *)(in_stack_00000088 + 0x10) = 1;
  return 1;
}


