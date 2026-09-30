/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ConsoleLine$$.ctor
ENTRY_POINT: 052cc9d8
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
Meta_XR_ImmersiveDebugger_UserInterface_ConsoleLine___ctor
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  float *pfVar8;
  long *unaff_x19;
  long lVar9;
  long *unaff_x22;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  ulong uVar25;
  double dVar26;
  ulong uVar27;
  float fVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  long in_stack_00000088;
  
  uVar3 = FUN_05290058();
  *(undefined8 *)(in_stack_00000088 + 0x38) = uVar3;
  thunk_FUN_02f411dc();
  uVar3 = *(undefined8 *)(in_stack_00000088 + 0x38);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066cd30c(uVar3,0);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar3 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x20),0);
    *(undefined8 *)(in_stack_00000088 + 0x38) = uVar3;
    thunk_FUN_02f411dc();
  }
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar3 = FUN_037f15fc(*(long *)(in_stack_00000088 + 0x38),*(undefined8 *)PTR_DAT_06d3d5f8);
  *(undefined8 *)(in_stack_00000088 + 0x40) = uVar3;
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
  uVar10 = FUN_06741624(*(long *)(in_stack_00000088 + 0x48),0);
  *(undefined4 *)(in_stack_00000088 + 0x50) = uVar10;
  if (*(long *)(in_stack_00000088 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar10 = FUN_067416ac(*(long *)(in_stack_00000088 + 0x48),0);
  *(undefined4 *)(in_stack_00000088 + 0x54) = uVar10;
  if (*(long *)(in_stack_00000088 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  bVar2 = FUN_067417bc(*(long *)(in_stack_00000088 + 0x48),0);
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
  lVar5 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_067417f8(lVar5,0,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06741660(0,lVar5,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_067416e8(0,lVar5,0);
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar17 = FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  uVar10 = *(undefined4 *)((long)unaff_x19 + 0x11c);
  uVar3 = param_2;
  uVar19 = param_3;
  uVar18 = (**(code **)(*unaff_x19 + 600))();
  uVar20 = uVar3;
  (**(code **)(*unaff_x19 + 600))();
  FUN_05297ad0(uVar17,param_2,param_3,uVar10,uVar18,uVar3,uVar19,
               (float)uVar20 + *(float *)(unaff_x19 + 0x24),0,&stack0x00000030,
               (long)&stack0x00000028 + 4,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06741454(fStack0000000000000030,fStack0000000000000034,in_stack_00000038,lVar5,0);
  *(undefined4 *)(in_stack_00000088 + 0x5c) = 0;
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar9 = unaff_x19[0x2d];
  lVar5 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x20),0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d48c0(lVar5,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d4960(lVar9,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar9 = unaff_x19[0x2d];
  lVar5 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x20),0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d320c(lVar5,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d4ae0(lVar9,0);
  uVar3 = *(undefined8 *)(in_stack_00000088 + 0x40);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066cd30c(uVar3,0);
  if ((uVar4 & 1) != 0) {
    if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(long *)(in_stack_00000088 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar5 = unaff_x19[0x2d];
    FUN_052c3304(*(long *)(in_stack_00000088 + 0x40),*(undefined4 *)(unaff_x19[0x19] + 0xdc),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d4ae0(lVar5,0);
  }
  if (unaff_x19[0x2d] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = FUN_066c67ec(unaff_x19[0x2d],0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar3 = FUN_03a862a4(lVar5,*(undefined8 *)PTR_DAT_06d03770);
  *(undefined8 *)(in_stack_00000088 + 0x60) = uVar3;
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
  fVar22 = DAT_013f6c2c;
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
  lVar9 = *(long *)(in_stack_00000088 + 0x60);
  lVar5 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x48),0);
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d6014(lVar5,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06744330(lVar9,0);
  *(undefined8 *)(in_stack_00000088 + 0x70) = *(undefined8 *)(in_stack_00000088 + 0x40);
  *(undefined1 *)(in_stack_00000088 + 0x68) = 0;
  *(undefined4 *)(in_stack_00000088 + 0x6c) = 0;
  thunk_FUN_02f411dc();
  lVar5 = unaff_x19[0x13];
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066cd30c(lVar5,0);
  if (((uVar4 & 1) == 0) ||
     (*(float *)((long)unaff_x19 + 0x11c) < *(float *)(in_stack_00000088 + 0x5c)))
  goto LAB_052cd430;
  fVar11 = (float)(**(code **)(*unaff_x19 + 600))();
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar31 = fVar22;
  fVar12 = (float)FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  if (DAT_071babf8 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf8 = '\x01';
  }
  puVar1 = PTR_DAT_06d03010;
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  dVar26 = DAT_013f5fd8;
  fVar21 = *(float *)(in_stack_00000088 + 0x5c);
  fVar30 = fVar21 / *(float *)((long)unaff_x19 + 0x11c);
  fVar13 = *(float *)(unaff_x19 + 0x24);
  if (DAT_013f5fd8 <= (double)fVar30) {
    if ((char)unaff_x19[0x2a] != '\0') {
      if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar5 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar22 = (float)FUN_067413b4(lVar5,0);
      if (DAT_071babf8 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf8 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      fVar31 = *(float *)((long)unaff_x19 + 0x134);
      fVar11 = SUB84(dVar26,0) * SUB84(dVar26,0);
      if (fVar31 < SQRT(fVar11 + fVar22 * fVar22 + fVar21 * fVar21)) {
        if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar5 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar22 = (float)FUN_067413b4(lVar5,0);
        if (DAT_071babf2 == '\0') {
          FUN_02f07e70(PTR_DAT_06d03010);
          DAT_071babf2 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        fVar12 = SQRT(fVar31 * fVar31 + fVar22 * fVar22 + fVar11 * fVar11);
        if (fVar12 <= DAT_013f6c1c) {
          if (DAT_071babf5 == '\0') {
            FUN_02f07e70(PTR_DAT_06d02c10);
            DAT_071babf5 = '\x01';
          }
          pfVar8 = *(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
          fVar22 = *pfVar8;
          fVar11 = pfVar8[1];
          fVar31 = pfVar8[2];
        }
        else {
          fVar22 = fVar22 / fVar12;
          fVar11 = fVar11 / fVar12;
          fVar31 = fVar31 / fVar12;
        }
        fVar12 = *(float *)((long)unaff_x19 + 0x134);
        FUN_06741454(fVar22 * fVar12,fVar11 * fVar12,fVar31 * fVar12,lVar5,0);
      }
      (**(code **)(*unaff_x19 + 0x328))();
      goto LAB_052cd430;
    }
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x2a) = 0;
  }
  if (*(char *)((long)unaff_x19 + 0x13c) != '\0') {
    plVar6 = (long *)unaff_x19[0x19];
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar4 = (**(code **)(*plVar6 + 0x368))(plVar6,unaff_x19[0x13],*(undefined8 *)(*plVar6 + 0x370));
    fVar23 = SUB84(dVar26,0);
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
      fVar14 = (float)(**(code **)(*unaff_x19 + 600))();
      if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar28 = fVar21;
      fVar16 = fVar23;
      fVar15 = (float)FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
      if (DAT_071babf8 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf8 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (SQRT((fVar23 - fVar16) * (fVar23 - fVar16) +
               (fVar14 - fVar15) * (fVar14 - fVar15) + (fVar21 - fVar28) * (fVar21 - fVar28)) <
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
  uVar3 = 0;
  fVar22 = (fVar22 - fVar31) * (fVar22 - fVar31);
  uVar4 = (ulong)(uint)fVar22;
  fVar22 = SQRT(fVar22 + (fVar11 - fVar12) * (fVar11 - fVar12) + 0.0);
  if (fVar22 < DAT_013f6b64) {
LAB_052cd430:
    if (*(long *)(in_stack_00000088 + 0x60) != 0) {
      FUN_06743fdc(*(long *)(in_stack_00000088 + 0x60),0,0);
      uVar3 = *(undefined8 *)(in_stack_00000088 + 0x60);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_066cdd04(uVar3,0);
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
  uVar10 = FUN_066d48c0(*(long *)(in_stack_00000088 + 0x38),0);
  fVar31 = *(float *)((long)unaff_x19 + 0x11c);
  fVar11 = *(float *)(in_stack_00000088 + 0x5c);
  uVar24 = uVar4;
  uVar20 = uVar3;
  uVar19 = (**(code **)(*unaff_x19 + 600))();
  uVar25 = uVar24;
  (**(code **)(*unaff_x19 + 600))();
  FUN_05297ad0(uVar10,uVar4,uVar3,fVar31 - fVar11,uVar19,uVar24,uVar20,
               fVar13 * (1.0 - fVar30) + (float)uVar25,0,&stack0x00000030,(long)&stack0x00000028 + 4
               ,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06741454(fStack0000000000000030,fStack0000000000000034,in_stack_00000038,lVar5,0);
  if (*(long *)(in_stack_00000088 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = *(long *)(*(long *)(in_stack_00000088 + 0x20) + 0xa8);
  if (DAT_071bab7b == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
    DAT_071bab7b = '\x01';
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar25 = (ulong)(uint)in_stack_00000028._4_4_;
  uVar24 = (ulong)(uint)(in_stack_00000028._4_4_ *
                        -*(float *)(*(long *)(*(long *)PTR_DAT_06d02c10 + 0xb8) + 0x20));
  uVar4 = (ulong)(uint)(-(float)((ulong)*(undefined8 *)
                                         (*(long *)(*(long *)PTR_DAT_06d02c10 + 0xb8) + 0x18) >>
                                0x20) * in_stack_00000028._4_4_);
  FUN_06742700(lVar5,5,0);
  uVar3 = *(undefined8 *)(in_stack_00000088 + 0x70);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar7 = FUN_066cd30c(uVar3,0);
  if ((uVar7 & 1) != 0) {
    if ((fVar30 <= DAT_013f6f14) || (*(char *)(in_stack_00000088 + 0x68) != '\0')) {
      if (*(char *)(in_stack_00000088 + 0x68) == '\0') goto LAB_052cd608;
    }
    else {
      if (DAT_071babf8 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf8 = '\x01';
      }
      fVar31 = in_stack_00000038;
      fVar11 = fStack0000000000000030;
      fVar21 = (float)uVar25;
      fVar13 = (float)uVar24;
      fVar12 = (float)uVar4;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar5 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x60),0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar30 = (float)FUN_066d320c(lVar5,0);
      if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar23 = fVar12;
      fVar14 = fVar13;
      fVar28 = fVar21;
      fVar16 = (float)FUN_052cc80c();
      uVar24 = (ulong)(uint)fVar22;
      uVar25 = (ulong)(uint)(fVar21 * fVar28);
      fVar12 = (float)NEON_fminnm(ABS(fVar21 * fVar28 +
                                      fVar13 * fVar14 + fVar30 * fVar16 + fVar12 * fVar23),
                                  0x3f800000);
      fVar13 = 0.0;
      if (fVar12 <= DAT_013f6c48) {
        fVar12 = acosf(fVar12);
        fVar13 = (fVar12 + fVar12) * DAT_013f6f10;
      }
      uVar4 = (ulong)(uint)fVar13;
      *(float *)(in_stack_00000088 + 0x6c) =
           fVar13 / (fVar22 / SQRT(fVar11 * fVar11 + fStack0000000000000034 * fStack0000000000000034
                                   + fVar31 * fVar31));
      *(undefined1 *)(in_stack_00000088 + 0x68) = 1;
    }
    if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar5 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x60),0);
    if (*(long *)(in_stack_00000088 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar9 = FUN_066c67b0(*(long *)(in_stack_00000088 + 0x60),0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar3 = FUN_066d320c(lVar9,0);
    if (unaff_x19[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar7 = uVar4;
    uVar27 = uVar24;
    uVar29 = uVar25;
    uVar20 = FUN_052cc80c();
    FUN_066d1758(0);
    fVar22 = (float)NEON_fminnm(ABS((float)uVar25 * (float)uVar29 +
                                    (float)uVar24 * (float)uVar27 +
                                    (float)uVar3 * (float)uVar20 + (float)uVar4 * (float)uVar7),
                                0x3f800000);
    if ((fVar22 <= DAT_013f6c48) &&
       (fVar22 = acosf(fVar22), (fVar22 + fVar22) * DAT_013f6f10 != 0.0)) {
      uVar20 = FUN_066bd84c(uVar3,uVar4,uVar24,uVar25,uVar20,uVar7,uVar27,uVar29,0);
      uVar7 = uVar4;
      uVar27 = uVar24;
      uVar29 = uVar25;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d4ae0(uVar20,uVar7,uVar27,uVar29,lVar5,0);
  }
LAB_052cd608:
  fVar11 = *(float *)(in_stack_00000088 + 0x5c);
  fVar22 = (float)FUN_066d1758(0);
  *(float *)(in_stack_00000088 + 0x5c) = fVar11 + fVar22;
  uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03818);
  FUN_066cf184(uVar3,0);
  *(undefined8 *)(in_stack_00000088 + 0x18) = uVar3;
  thunk_FUN_02f411dc((undefined8 *)(in_stack_00000088 + 0x18),uVar3);
  *(undefined4 *)(in_stack_00000088 + 0x10) = 1;
  return 1;
}


