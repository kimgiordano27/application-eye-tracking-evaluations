/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugBar$$Setup
ENTRY_POINT: 052ccb00
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_DebugBar__Setup
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  float *pfVar6;
  long *unaff_x19;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  double dVar24;
  ulong uVar25;
  float fVar26;
  ulong uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  long in_stack_00000088;
  
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_067417f8(lVar2,0,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06741660(0,lVar2,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_067416e8(0,lVar2,0);
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar15 = FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  uVar28 = *(undefined4 *)((long)unaff_x19 + 0x11c);
  uVar8 = param_2;
  uVar17 = param_3;
  uVar16 = (**(code **)(*unaff_x19 + 600))();
  uVar18 = uVar8;
  (**(code **)(*unaff_x19 + 600))();
  FUN_05297ad0(uVar15,param_2,param_3,uVar28,uVar16,uVar8,uVar17,
               (float)uVar18 + *(float *)(unaff_x19 + 0x24),0,&stack0x00000030,
               (long)&stack0x00000028 + 4,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06741454(fStack0000000000000030,fStack0000000000000034,in_stack_00000038,lVar2,0);
  *(undefined4 *)(in_stack_00000088 + 0x5c) = 0;
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar7 = unaff_x19[0x2d];
  lVar2 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x20),0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d48c0(lVar2,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d4960(lVar7,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar7 = unaff_x19[0x2d];
  lVar2 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x20),0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d320c(lVar2,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d4ae0(lVar7,0);
  uVar8 = *(undefined8 *)(in_stack_00000088 + 0x40);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066cd30c(uVar8,0);
  if ((uVar3 & 1) != 0) {
    if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(long *)(in_stack_00000088 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar2 = unaff_x19[0x2d];
    FUN_052c3304(*(long *)(in_stack_00000088 + 0x40),*(undefined4 *)(unaff_x19[0x19] + 0xdc),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d4ae0(lVar2,0);
  }
  if (unaff_x19[0x2d] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = FUN_066c67ec(unaff_x19[0x2d],0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar8 = FUN_03a862a4(lVar2,*(undefined8 *)PTR_DAT_06d03770);
  *(undefined8 *)(in_stack_00000088 + 0x60) = uVar8;
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
  fVar20 = DAT_013f6c2c;
  FUN_0529a830(DAT_013f6c2c,0x42c80000,*(undefined8 *)(in_stack_00000088 + 0x60),0);
  if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06743fdc(*(long *)(in_stack_00000088 + 0x60),*(undefined8 *)(in_stack_00000088 + 0x48),0);
  if (*(long *)(in_stack_00000088 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar7 = *(long *)(in_stack_00000088 + 0x60);
  lVar2 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x48),0);
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d6014(lVar2,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06744330(lVar7,0);
  *(undefined8 *)(in_stack_00000088 + 0x70) = *(undefined8 *)(in_stack_00000088 + 0x40);
  *(undefined1 *)(in_stack_00000088 + 0x68) = 0;
  *(undefined4 *)(in_stack_00000088 + 0x6c) = 0;
  thunk_FUN_02f411dc();
  lVar2 = unaff_x19[0x13];
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066cd30c(lVar2,0);
  if (((uVar3 & 1) == 0) ||
     (*(float *)((long)unaff_x19 + 0x11c) < *(float *)(in_stack_00000088 + 0x5c)))
  goto LAB_052cd430;
  fVar9 = (float)(**(code **)(*unaff_x19 + 600))();
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar30 = fVar20;
  fVar10 = (float)FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  if (DAT_071babf8 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf8 = '\x01';
  }
  puVar1 = PTR_DAT_06d03010;
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  dVar24 = DAT_013f5fd8;
  fVar19 = *(float *)(in_stack_00000088 + 0x5c);
  fVar29 = fVar19 / *(float *)((long)unaff_x19 + 0x11c);
  fVar11 = *(float *)(unaff_x19 + 0x24);
  if (DAT_013f5fd8 <= (double)fVar29) {
    if ((char)unaff_x19[0x2a] != '\0') {
      if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar2 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar20 = (float)FUN_067413b4(lVar2,0);
      if (DAT_071babf8 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf8 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      fVar30 = *(float *)((long)unaff_x19 + 0x134);
      fVar9 = SUB84(dVar24,0) * SUB84(dVar24,0);
      if (fVar30 < SQRT(fVar9 + fVar20 * fVar20 + fVar19 * fVar19)) {
        if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar2 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar20 = (float)FUN_067413b4(lVar2,0);
        if (DAT_071babf2 == '\0') {
          FUN_02f07e70(PTR_DAT_06d03010);
          DAT_071babf2 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        fVar10 = SQRT(fVar30 * fVar30 + fVar20 * fVar20 + fVar9 * fVar9);
        if (fVar10 <= DAT_013f6c1c) {
          if (DAT_071babf5 == '\0') {
            FUN_02f07e70(PTR_DAT_06d02c10);
            DAT_071babf5 = '\x01';
          }
          pfVar6 = *(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
          fVar20 = *pfVar6;
          fVar9 = pfVar6[1];
          fVar30 = pfVar6[2];
        }
        else {
          fVar20 = fVar20 / fVar10;
          fVar9 = fVar9 / fVar10;
          fVar30 = fVar30 / fVar10;
        }
        fVar10 = *(float *)((long)unaff_x19 + 0x134);
        FUN_06741454(fVar20 * fVar10,fVar9 * fVar10,fVar30 * fVar10,lVar2,0);
      }
      (**(code **)(*unaff_x19 + 0x328))();
      goto LAB_052cd430;
    }
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x2a) = 0;
  }
  if (*(char *)((long)unaff_x19 + 0x13c) != '\0') {
    plVar4 = (long *)unaff_x19[0x19];
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar3 = (**(code **)(*plVar4 + 0x368))(plVar4,unaff_x19[0x13],*(undefined8 *)(*plVar4 + 0x370));
    fVar21 = SUB84(dVar24,0);
    if ((uVar3 & 1) != 0) {
      if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar3 = FUN_052cb1ec(unaff_x19[0x19],unaff_x19[0x13],*(undefined8 *)(in_stack_00000088 + 0x40)
                          );
      if ((uVar3 & 1) == 0) goto LAB_052cd040;
LAB_052cd104:
      *(undefined1 *)(in_stack_00000088 + 0x30) = 1;
      *(undefined1 *)(unaff_x19 + 0x2f) = 0;
      goto LAB_052cd430;
    }
LAB_052cd040:
    if (*(char *)((long)unaff_x19 + 0x13c) != '\0') {
      fVar12 = (float)(**(code **)(*unaff_x19 + 600))();
      if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar26 = fVar19;
      fVar14 = fVar21;
      fVar13 = (float)FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
      if (DAT_071babf8 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf8 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (SQRT((fVar21 - fVar14) * (fVar21 - fVar14) +
               (fVar12 - fVar13) * (fVar12 - fVar13) + (fVar19 - fVar26) * (fVar19 - fVar26)) <
          *(float *)((long)unaff_x19 + 0x144)) {
        if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar3 = FUN_052cb1ec(unaff_x19[0x19],unaff_x19[0x13],
                             *(undefined8 *)(in_stack_00000088 + 0x40));
        if ((uVar3 & 1) != 0) goto LAB_052cd104;
      }
    }
  }
  uVar8 = 0;
  fVar20 = (fVar20 - fVar30) * (fVar20 - fVar30);
  uVar3 = (ulong)(uint)fVar20;
  fVar20 = SQRT(fVar20 + (fVar9 - fVar10) * (fVar9 - fVar10) + 0.0);
  if (fVar20 < DAT_013f6b64) {
LAB_052cd430:
    if (*(long *)(in_stack_00000088 + 0x60) != 0) {
      FUN_06743fdc(*(long *)(in_stack_00000088 + 0x60),0,0);
      uVar8 = *(undefined8 *)(in_stack_00000088 + 0x60);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_066cdd04(uVar8,0);
      FUN_052c9fd0();
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
  uVar28 = FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  fVar30 = *(float *)((long)unaff_x19 + 0x11c);
  fVar9 = *(float *)(in_stack_00000088 + 0x5c);
  uVar22 = uVar3;
  uVar18 = uVar8;
  uVar17 = (**(code **)(*unaff_x19 + 600))();
  uVar23 = uVar22;
  (**(code **)(*unaff_x19 + 600))();
  FUN_05297ad0(uVar28,uVar3,uVar8,fVar30 - fVar9,uVar17,uVar22,uVar18,
               fVar11 * (1.0 - fVar29) + (float)uVar23,0,&stack0x00000030,(long)&stack0x00000028 + 4
               ,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06741454(fStack0000000000000030,fStack0000000000000034,in_stack_00000038,lVar2,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (DAT_071bab7b == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
    DAT_071bab7b = '\x01';
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar23 = (ulong)(uint)in_stack_00000028._4_4_;
  uVar22 = (ulong)(uint)(in_stack_00000028._4_4_ *
                        -*(float *)(*(long *)(*(long *)PTR_DAT_06d02c10 + 0xb8) + 0x20));
  uVar3 = (ulong)(uint)(-(float)((ulong)*(undefined8 *)
                                         (*(long *)(*(long *)PTR_DAT_06d02c10 + 0xb8) + 0x18) >>
                                0x20) * in_stack_00000028._4_4_);
  FUN_06742700(lVar2,5,0);
  uVar8 = *(undefined8 *)(in_stack_00000088 + 0x70);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_066cd30c(uVar8,0);
  if ((uVar5 & 1) != 0) {
    if ((fVar29 <= DAT_013f6f14) || (*(char *)(in_stack_00000088 + 0x68) != '\0')) {
      if (*(char *)(in_stack_00000088 + 0x68) == '\0') goto LAB_052cd608;
    }
    else {
      if (DAT_071babf8 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf8 = '\x01';
      }
      fVar30 = in_stack_00000038;
      fVar9 = fStack0000000000000030;
      fVar19 = (float)uVar23;
      fVar11 = (float)uVar22;
      fVar10 = (float)uVar3;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar2 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x60),0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar29 = (float)FUN_066d320c(lVar2,0);
      if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar21 = fVar10;
      fVar12 = fVar11;
      fVar26 = fVar19;
      fVar14 = (float)FUN_052cc80c();
      uVar22 = (ulong)(uint)fVar20;
      uVar23 = (ulong)(uint)(fVar19 * fVar26);
      fVar10 = (float)NEON_fminnm(ABS(fVar19 * fVar26 +
                                      fVar11 * fVar12 + fVar29 * fVar14 + fVar10 * fVar21),
                                  0x3f800000);
      fVar11 = 0.0;
      if (fVar10 <= DAT_013f6c48) {
        fVar10 = acosf(fVar10);
        fVar11 = (fVar10 + fVar10) * DAT_013f6f10;
      }
      uVar3 = (ulong)(uint)fVar11;
      *(float *)(in_stack_00000088 + 0x6c) =
           fVar11 / (fVar20 / SQRT(fVar9 * fVar9 + fStack0000000000000034 * fStack0000000000000034 +
                                   fVar30 * fVar30));
      *(undefined1 *)(in_stack_00000088 + 0x68) = 1;
    }
    if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar2 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x60),0);
    if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar7 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x60),0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar8 = FUN_066d320c(lVar7,0);
    if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar5 = uVar3;
    uVar25 = uVar22;
    uVar27 = uVar23;
    uVar18 = FUN_052cc80c();
    FUN_066d1758(0);
    fVar20 = (float)NEON_fminnm(ABS((float)uVar23 * (float)uVar27 +
                                    (float)uVar22 * (float)uVar25 +
                                    (float)uVar8 * (float)uVar18 + (float)uVar3 * (float)uVar5),
                                0x3f800000);
    if ((fVar20 <= DAT_013f6c48) &&
       (fVar20 = acosf(fVar20), (fVar20 + fVar20) * DAT_013f6f10 != 0.0)) {
      uVar18 = FUN_066bd84c(uVar8,uVar3,uVar22,uVar23,uVar18,uVar5,uVar25,uVar27,0);
      uVar5 = uVar3;
      uVar25 = uVar22;
      uVar27 = uVar23;
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d4ae0(uVar18,uVar5,uVar25,uVar27,lVar2,0);
  }
LAB_052cd608:
  fVar9 = *(float *)(in_stack_00000088 + 0x5c);
  fVar20 = (float)FUN_066d1758(0);
  *(float *)(in_stack_00000088 + 0x5c) = fVar9 + fVar20;
  uVar8 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03818);
  FUN_066cf184(uVar8,0);
  *(undefined8 *)(in_stack_00000088 + 0x18) = uVar8;
  thunk_FUN_02f411dc((undefined8 *)(in_stack_00000088 + 0x18),uVar8);
  *(undefined4 *)(in_stack_00000088 + 0x10) = 1;
  return 1;
}


