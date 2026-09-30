/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ProxyConsoleLine$$.ctor
ENTRY_POINT: 052ccab8
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
Meta_XR_ImmersiveDebugger_UserInterface_ProxyConsoleLine___ctor
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  float *pfVar7;
  long *unaff_x19;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x22;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  double dVar25;
  ulong uVar26;
  float fVar27;
  ulong uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  long in_stack_00000088;
  
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  bVar2 = FUN_067417bc(param_4,0);
  *(byte *)(in_stack_00000088 + 0x58) = bVar2 & 1;
  *(undefined4 *)(in_stack_00000088 + 0x10) = 0xfffffffd;
  if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_052cb19c(unaff_x19[0x19],*(undefined8 *)(in_stack_00000088 + 0x20));
  *(undefined1 *)(unaff_x19 + 0x2a) = 0;
  (**(code **)(*unaff_x19 + 0x1e8))();
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_067417f8(lVar3,0,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06741660(0,lVar3,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_067416e8(0,lVar3,0);
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar16 = FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  uVar29 = *(undefined4 *)((long)unaff_x19 + 0x11c);
  uVar9 = param_2;
  uVar18 = param_3;
  uVar17 = (**(code **)(*unaff_x19 + 600))();
  uVar19 = uVar9;
  (**(code **)(*unaff_x19 + 600))();
  FUN_05297ad0(uVar16,param_2,param_3,uVar29,uVar17,uVar9,uVar18,
               (float)uVar19 + *(float *)(unaff_x19 + 0x24),0,&stack0x00000030,
               (long)&stack0x00000028 + 4,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06741454(fStack0000000000000030,fStack0000000000000034,in_stack_00000038,lVar3,0);
  *(undefined4 *)(in_stack_00000088 + 0x5c) = 0;
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar8 = unaff_x19[0x2d];
  lVar3 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x20),0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d48c0(lVar3,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d4960(lVar8,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar8 = unaff_x19[0x2d];
  lVar3 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x20),0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d320c(lVar3,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d4ae0(lVar8,0);
  uVar9 = *(undefined8 *)(in_stack_00000088 + 0x40);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066cd30c(uVar9,0);
  if ((uVar4 & 1) != 0) {
    if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(long *)(in_stack_00000088 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar3 = unaff_x19[0x2d];
    FUN_052c3304(*(long *)(in_stack_00000088 + 0x40),*(undefined4 *)(unaff_x19[0x19] + 0xdc),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d4ae0(lVar3,0);
  }
  if (unaff_x19[0x2d] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = FUN_066c67ec(unaff_x19[0x2d],0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar9 = FUN_03a862a4(lVar3,*(undefined8 *)PTR_DAT_06d03770);
  *(undefined8 *)(in_stack_00000088 + 0x60) = uVar9;
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
  fVar21 = DAT_013f6c2c;
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
  lVar8 = *(long *)(in_stack_00000088 + 0x60);
  lVar3 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x48),0);
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d6014(lVar3,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06744330(lVar8,0);
  *(undefined8 *)(in_stack_00000088 + 0x70) = *(undefined8 *)(in_stack_00000088 + 0x40);
  *(undefined1 *)(in_stack_00000088 + 0x68) = 0;
  *(undefined4 *)(in_stack_00000088 + 0x6c) = 0;
  thunk_FUN_02f411dc();
  lVar3 = unaff_x19[0x13];
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066cd30c(lVar3,0);
  if (((uVar4 & 1) == 0) ||
     (*(float *)((long)unaff_x19 + 0x11c) < *(float *)(in_stack_00000088 + 0x5c)))
  goto LAB_052cd430;
  fVar10 = (float)(**(code **)(*unaff_x19 + 600))();
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar31 = fVar21;
  fVar11 = (float)FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  if (DAT_071babf8 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf8 = '\x01';
  }
  puVar1 = PTR_DAT_06d03010;
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  dVar25 = DAT_013f5fd8;
  fVar20 = *(float *)(in_stack_00000088 + 0x5c);
  fVar30 = fVar20 / *(float *)((long)unaff_x19 + 0x11c);
  fVar12 = *(float *)(unaff_x19 + 0x24);
  if (DAT_013f5fd8 <= (double)fVar30) {
    if ((char)unaff_x19[0x2a] != '\0') {
      if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar21 = (float)FUN_067413b4(lVar3,0);
      if (DAT_071babf8 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf8 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      fVar31 = *(float *)((long)unaff_x19 + 0x134);
      fVar10 = SUB84(dVar25,0) * SUB84(dVar25,0);
      if (fVar31 < SQRT(fVar10 + fVar21 * fVar21 + fVar20 * fVar20)) {
        if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar3 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar21 = (float)FUN_067413b4(lVar3,0);
        if (DAT_071babf2 == '\0') {
          FUN_02f07e70(PTR_DAT_06d03010);
          DAT_071babf2 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        fVar11 = SQRT(fVar31 * fVar31 + fVar21 * fVar21 + fVar10 * fVar10);
        if (fVar11 <= DAT_013f6c1c) {
          if (DAT_071babf5 == '\0') {
            FUN_02f07e70(PTR_DAT_06d02c10);
            DAT_071babf5 = '\x01';
          }
          pfVar7 = *(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
          fVar21 = *pfVar7;
          fVar10 = pfVar7[1];
          fVar31 = pfVar7[2];
        }
        else {
          fVar21 = fVar21 / fVar11;
          fVar10 = fVar10 / fVar11;
          fVar31 = fVar31 / fVar11;
        }
        fVar11 = *(float *)((long)unaff_x19 + 0x134);
        FUN_06741454(fVar21 * fVar11,fVar10 * fVar11,fVar31 * fVar11,lVar3,0);
      }
      (**(code **)(*unaff_x19 + 0x328))();
      goto LAB_052cd430;
    }
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x2a) = 0;
  }
  if (*(char *)((long)unaff_x19 + 0x13c) != '\0') {
    plVar5 = (long *)unaff_x19[0x19];
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar4 = (**(code **)(*plVar5 + 0x368))(plVar5,unaff_x19[0x13],*(undefined8 *)(*plVar5 + 0x370));
    fVar22 = SUB84(dVar25,0);
    if ((uVar4 & 1) != 0) {
      if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar4 = FUN_052cb1ec(unaff_x19[0x19],unaff_x19[0x13],*(undefined8 *)(in_stack_00000088 + 0x40)
                          );
      if ((uVar4 & 1) == 0) goto LAB_052cd040;
LAB_052cd104:
      *(undefined1 *)(in_stack_00000088 + 0x30) = 1;
      *(undefined1 *)(unaff_x19 + 0x2f) = 0;
      goto LAB_052cd430;
    }
LAB_052cd040:
    if (*(char *)((long)unaff_x19 + 0x13c) != '\0') {
      fVar13 = (float)(**(code **)(*unaff_x19 + 600))();
      if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar27 = fVar20;
      fVar15 = fVar22;
      fVar14 = (float)FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
      if (DAT_071babf8 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf8 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (SQRT((fVar22 - fVar15) * (fVar22 - fVar15) +
               (fVar13 - fVar14) * (fVar13 - fVar14) + (fVar20 - fVar27) * (fVar20 - fVar27)) <
          *(float *)((long)unaff_x19 + 0x144)) {
        if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar4 = FUN_052cb1ec(unaff_x19[0x19],unaff_x19[0x13],
                             *(undefined8 *)(in_stack_00000088 + 0x40));
        if ((uVar4 & 1) != 0) goto LAB_052cd104;
      }
    }
  }
  uVar9 = 0;
  fVar21 = (fVar21 - fVar31) * (fVar21 - fVar31);
  uVar4 = (ulong)(uint)fVar21;
  fVar21 = SQRT(fVar21 + (fVar10 - fVar11) * (fVar10 - fVar11) + 0.0);
  if (fVar21 < DAT_013f6b64) {
LAB_052cd430:
    if (*(long *)(in_stack_00000088 + 0x60) != 0) {
      FUN_06743fdc(*(long *)(in_stack_00000088 + 0x60),0,0);
      uVar9 = *(undefined8 *)(in_stack_00000088 + 0x60);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_066cdd04(uVar9,0);
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
  uVar29 = FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  fVar31 = *(float *)((long)unaff_x19 + 0x11c);
  fVar10 = *(float *)(in_stack_00000088 + 0x5c);
  uVar23 = uVar4;
  uVar19 = uVar9;
  uVar18 = (**(code **)(*unaff_x19 + 600))();
  uVar24 = uVar23;
  (**(code **)(*unaff_x19 + 600))();
  FUN_05297ad0(uVar29,uVar4,uVar9,fVar31 - fVar10,uVar18,uVar23,uVar19,
               fVar12 * (1.0 - fVar30) + (float)uVar24,0,&stack0x00000030,(long)&stack0x00000028 + 4
               ,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06741454(fStack0000000000000030,fStack0000000000000034,in_stack_00000038,lVar3,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (DAT_071bab7b == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
    DAT_071bab7b = '\x01';
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar24 = (ulong)(uint)in_stack_00000028._4_4_;
  uVar23 = (ulong)(uint)(in_stack_00000028._4_4_ *
                        -*(float *)(*(long *)(*(long *)PTR_DAT_06d02c10 + 0xb8) + 0x20));
  uVar4 = (ulong)(uint)(-(float)((ulong)*(undefined8 *)
                                         (*(long *)(*(long *)PTR_DAT_06d02c10 + 0xb8) + 0x18) >>
                                0x20) * in_stack_00000028._4_4_);
  FUN_06742700(lVar3,5,0);
  uVar9 = *(undefined8 *)(in_stack_00000088 + 0x70);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar6 = FUN_066cd30c(uVar9,0);
  if ((uVar6 & 1) != 0) {
    if ((fVar30 <= DAT_013f6f14) || (*(char *)(in_stack_00000088 + 0x68) != '\0')) {
      if (*(char *)(in_stack_00000088 + 0x68) == '\0') goto LAB_052cd608;
    }
    else {
      if (DAT_071babf8 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf8 = '\x01';
      }
      fVar31 = in_stack_00000038;
      fVar10 = fStack0000000000000030;
      fVar20 = (float)uVar24;
      fVar12 = (float)uVar23;
      fVar11 = (float)uVar4;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x60),0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar30 = (float)FUN_066d320c(lVar3,0);
      if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar22 = fVar11;
      fVar13 = fVar12;
      fVar27 = fVar20;
      fVar15 = (float)FUN_052cc80c();
      uVar23 = (ulong)(uint)fVar21;
      uVar24 = (ulong)(uint)(fVar20 * fVar27);
      fVar11 = (float)NEON_fminnm(ABS(fVar20 * fVar27 +
                                      fVar12 * fVar13 + fVar30 * fVar15 + fVar11 * fVar22),
                                  0x3f800000);
      fVar12 = 0.0;
      if (fVar11 <= DAT_013f6c48) {
        fVar11 = acosf(fVar11);
        fVar12 = (fVar11 + fVar11) * DAT_013f6f10;
      }
      uVar4 = (ulong)(uint)fVar12;
      *(float *)(in_stack_00000088 + 0x6c) =
           fVar12 / (fVar21 / SQRT(fVar10 * fVar10 + fStack0000000000000034 * fStack0000000000000034
                                   + fVar31 * fVar31));
      *(undefined1 *)(in_stack_00000088 + 0x68) = 1;
    }
    if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar3 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x60),0);
    if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar8 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x60),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar9 = FUN_066d320c(lVar8,0);
    if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar6 = uVar4;
    uVar26 = uVar23;
    uVar28 = uVar24;
    uVar19 = FUN_052cc80c();
    FUN_066d1758(0);
    fVar21 = (float)NEON_fminnm(ABS((float)uVar24 * (float)uVar28 +
                                    (float)uVar23 * (float)uVar26 +
                                    (float)uVar9 * (float)uVar19 + (float)uVar4 * (float)uVar6),
                                0x3f800000);
    if ((fVar21 <= DAT_013f6c48) &&
       (fVar21 = acosf(fVar21), (fVar21 + fVar21) * DAT_013f6f10 != 0.0)) {
      uVar19 = FUN_066bd84c(uVar9,uVar4,uVar23,uVar24,uVar19,uVar6,uVar26,uVar28,0);
      uVar6 = uVar4;
      uVar26 = uVar23;
      uVar28 = uVar24;
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d4ae0(uVar19,uVar6,uVar26,uVar28,lVar3,0);
  }
LAB_052cd608:
  fVar10 = *(float *)(in_stack_00000088 + 0x5c);
  fVar21 = (float)FUN_066d1758(0);
  *(float *)(in_stack_00000088 + 0x5c) = fVar10 + fVar21;
  uVar9 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03818);
  FUN_066cf184(uVar9,0);
  *(undefined8 *)(in_stack_00000088 + 0x18) = uVar9;
  thunk_FUN_02f411dc((undefined8 *)(in_stack_00000088 + 0x18),uVar9);
  *(undefined4 *)(in_stack_00000088 + 0x10) = 1;
  return 1;
}


