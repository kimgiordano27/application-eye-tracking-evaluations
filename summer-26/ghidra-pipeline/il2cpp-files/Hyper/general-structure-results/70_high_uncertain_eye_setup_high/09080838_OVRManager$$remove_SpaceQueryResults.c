/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryResults
ENTRY_POINT: 09080838
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_SpaceQueryResults(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float *pfVar7;
  int in_w9;
  float *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 uVar18;
  float fStack0000000000000004;
  float fStack000000000000005c;
  float fStack0000000000000064;
  float fStack000000000000006c;
  float fStack0000000000000074;
  undefined8 in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  undefined8 in_stack_00000088;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  float fStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined8 uStack0000000000000104;
  undefined8 in_stack_00000160;
  float fStack0000000000000168;
  float fStack000000000000016c;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  float in_stack_000002a0;
  float in_stack_00000360;
  float in_stack_00000364;
  float in_stack_00000368;
  
                    /* try { // try from 09080840 to 09180953 has its CatchHandler @ 090801a8 */
  fVar12 = *(float *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
  *(undefined8 *)unaff_x19 = **(undefined8 **)(*unaff_x22 + 0xb8);
  unaff_x19[2] = fVar12;
  if (in_w9 == 0) {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    *(undefined1 *)(unaff_x23 + 0x3e4) = 1;
  }
  lVar6 = *(long *)(*unaff_x22 + 0xb8);
  fVar17 = *(float *)(lVar6 + 0x18);
  fVar16 = *(float *)(lVar6 + 0x1c);
  fVar12 = *(float *)(lVar6 + 0x20);
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  puVar2 = PTR_DAT_0ac0df00;
  fVar8 = fVar12 * fVar12 + fVar17 * fVar17 + fVar16 * fVar16;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar8) {
    fVar13 = in_stack_00000368 * fVar12 + in_stack_00000360 * fVar17 + in_stack_00000364 * fVar16;
    in_stack_00000360 = in_stack_00000360 - (fVar17 * fVar13) / fVar8;
    in_stack_00000364 = in_stack_00000364 - (fVar16 * fVar13) / fVar8;
    in_stack_00000368 = in_stack_00000368 - (fVar12 * fVar13) / fVar8;
  }
  fVar16 = unaff_s11 - fStack0000000000000080;
  fVar12 = *(float *)(unaff_x20 + 0x34);
  if (fVar16 <= *(float *)(unaff_x20 + 0x34)) {
    fVar12 = fVar16;
  }
  if (*(char *)(unaff_x23 + 0x3e4) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    *(undefined1 *)(unaff_x23 + 0x3e4) = 1;
  }
  fStack0000000000000064 =
       fStack0000000000000080 + fVar12 * *(float *)(*(long *)(*unaff_x22 + 0xb8) + 0x1c);
  fStack000000000000005c = unaff_s12 + fVar12 * *(float *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
  fStack0000000000000004 = in_stack_00000364;
  fStack0000000000000074 = in_stack_00000360;
  uVar4 = FUN_09081000();
  cVar3 = DAT_0b31f764;
  fVar17 = fStack0000000000000074;
  fStack000000000000006c = unaff_s13;
  if ((uVar4 & 1) != 0) {
    fVar17 = in_stack_00000088._4_4_ - unaff_s12;
    fVar13 = unaff_s13 - in_stack_00000078._4_4_;
    unaff_x21[1] = in_stack_00000268;
    *unaff_x21 = in_stack_00000260;
    unaff_x21[3] = in_stack_00000278;
    unaff_x21[2] = in_stack_00000270;
    fVar8 = fVar13 * fVar13 + fVar17 * fVar17 + fVar16 * fVar16;
    unaff_x21[5] = in_stack_00000288;
    unaff_x21[4] = in_stack_00000280;
    if (cVar3 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      DAT_0b31f764 = '\x01';
    }
    puVar1 = PTR_DAT_0ac0a830;
    fVar9 = ABS(fVar8);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar14 = **(float **)(*(long *)puVar2 + 0xb8) * 8.0;
    fVar10 = fVar9 * DAT_01df4f4c;
    if (fVar9 * DAT_01df4f4c <= fVar14) {
      fVar10 = fVar14;
    }
    if (ABS(0.0 - fVar8) < fVar10) {
LAB_09080bd0:
      puVar2 = PTR_DAT_0ac78710;
      FUN_06fc65c0(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_0ac78710);
      uVar5 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar5;
      fVar17 = (float)FUN_0a1f8a64(&stack0x00000200,0);
      fVar16 = (float)uVar5;
      FUN_06fc65c0((long)&stack0x00000160 + 4,&stack0x00000260,*(undefined8 *)puVar2);
      fVar9 = (float)*(undefined8 *)(unaff_x25 + 0x68);
      uVar5 = *(undefined8 *)(unaff_x25 + 0x74);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x7c);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar5;
      fVar8 = (float)FUN_0a1f8a4c(&stack0x00000200,0);
      FUN_06fc65c0(&stack0x00000138,&stack0x00000260,*(undefined8 *)puVar2);
      uVar18 = *(undefined8 *)(unaff_x25 + 0x48);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x50);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar18;
      fVar13 = (float)FUN_0a1f8a7c(&stack0x00000200,0);
      if (DAT_0b31f3e6 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0a830);
        DAT_0b31f3e6 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      fVar10 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + in_stack_000002a0 * in_stack_000002a0);
      if (fVar10 <= DAT_01df50c4) {
        if (*(char *)(unaff_x26 + 999) == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0def8);
          *(undefined1 *)(unaff_x26 + 999) = 1;
        }
        uVar18 = **(undefined8 **)(*unaff_x22 + 0xb8);
        fVar10 = *(float *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
      }
      else {
        uVar18 = CONCAT44(-in_stack_000002a0 / fVar10,-fVar17 / fVar10);
        fVar10 = -fVar16 / fVar10;
      }
      FUN_06fc65c0((undefined1 *)((long)&stack0x00000100 + 0xc),&stack0x00000260,
                   *(undefined8 *)puVar2);
      uVar15 = *(undefined8 *)(unaff_x25 + 0x1c);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x24);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar15;
      lVar6 = FUN_0a1f89a0(&stack0x00000200,0);
      FUN_06fc65c0(&stack0x000000e0,&stack0x00000260,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x24 + 0x24) = uStack0000000000000104;
      *(ulong *)(unaff_x24 + 0x1c) = CONCAT44(uStack0000000000000100,uStack00000000000000fc);
      fVar14 = (float)FUN_0a1f8a7c(&stack0x00000200,0);
      if (lVar6 == 0) goto LAB_09080ffc;
      fStack00000000000000d0 = (float)uVar5 + fVar16 * fVar13;
      fStack00000000000000cc = fVar9 + in_stack_000002a0 * fVar13;
      fStack00000000000000c8 = fVar8 + fVar17 * fVar13;
      uStack00000000000000d4 = uVar18;
      fStack00000000000000dc = fVar10;
      uVar4 = FUN_0a1ee23c(fVar14 + DAT_01df5128,lVar6,&stack0x000000c8,&stack0x000001d0,0);
      if ((uVar4 & 1) != 0) {
        uVar18 = *(undefined8 *)(unaff_x25 + 0xe0);
        uVar5 = *(undefined8 *)PTR_DAT_0ac78720;
        *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x25 + 0xe8);
        *(undefined8 *)(unaff_x24 + 0xac) = uVar18;
        FUN_06fc6590(&stack0x00000260,&stack0x00000290,uVar5);
      }
    }
    else {
      FUN_06fc65c0(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_0ac78710);
      uVar5 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar5;
      fVar9 = in_stack_000002a0;
      fVar10 = (float)FUN_0a1f8a64(&stack0x00000200,0);
      if (DAT_0b31f3e6 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0a830);
        DAT_0b31f3e6 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      fVar8 = SQRT(fVar8);
      if (fVar8 <= DAT_01df50c4) {
        if (*(char *)(unaff_x26 + 999) == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0def8);
          *(undefined1 *)(unaff_x26 + 999) = 1;
        }
        pfVar7 = *(float **)(*unaff_x22 + 0xb8);
        fVar17 = *pfVar7;
        fVar16 = pfVar7[1];
        fVar13 = pfVar7[2];
      }
      else {
        fVar17 = fVar17 / fVar8;
        fVar16 = fVar16 / fVar8;
        fVar13 = fVar13 / fVar8;
      }
      if (DAT_01df5128 < ABS((float)uVar5 * fVar13 + fVar10 * fVar17 + fVar9 * fVar16))
      goto LAB_09080bd0;
    }
    FUN_06fc65c0(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_0ac78710);
    FUN_090812c8((long)&stack0x00000160 + 4,fStack0000000000000074,in_stack_00000364,
                 in_stack_00000368);
    in_stack_00000368 = fStack000000000000016c;
    in_stack_00000364 = fStack0000000000000168;
    fVar17 = in_stack_00000160._4_4_;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar8 = unaff_s11 + in_stack_00000364;
    fVar13 = fStack000000000000006c + in_stack_00000368;
    fVar16 = (float)FUN_0a1ecf3c(*(long *)(unaff_x20 + 0x20),0);
    uVar4 = FUN_09081468(in_stack_00000088._4_4_ + fVar17,fVar8,fVar13,fStack0000000000000084,
                         fVar16 - fStack0000000000000084);
    if ((uVar4 & 1) != 0) {
      uVar11 = FUN_0a1f8a4c(&stack0x00000230,0);
      if (*(char *)(unaff_x23 + 0x3e4) == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        *(undefined1 *)(unaff_x23 + 0x3e4) = 1;
      }
      lVar6 = *(long *)(*unaff_x22 + 0xb8);
      fStack0000000000000004 = fStack0000000000000064 + in_stack_00000364;
      uVar4 = FUN_090818ac(uVar11,fVar8,fVar13,*(undefined4 *)(lVar6 + 0x18),
                           *(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),
                           (long)&stack0x000001c8 + 4);
      if ((uVar4 & 1) != 0) {
        FUN_0a1f8a4c(&stack0x00000230,0);
        fVar16 = *(float *)(unaff_x20 + 0x34);
        if (fVar8 - (fStack0000000000000080 - fStack0000000000000084) <= fVar16) {
          FUN_0a1f8a64(&stack0x00000230,0);
          uVar4 = FUN_0907f758();
          if ((uVar4 & 1) != 0) {
            if (in_stack_00000364 <= fVar12 - in_stack_000001c8._4_4_) {
              in_stack_00000364 = fVar12 - in_stack_000001c8._4_4_;
            }
            FUN_09081eac(0);
            fStack0000000000000004 = fVar16 * in_stack_00000364;
            uVar4 = FUN_09081000(unaff_s12,fStack0000000000000080,in_stack_00000078._4_4_,
                                 in_stack_00000088._4_4_,unaff_s11,fStack000000000000006c,
                                 fStack0000000000000084);
            if ((uVar4 & 1) == 0) {
              *unaff_x19 = fVar17;
              unaff_x19[1] = in_stack_00000364;
              unaff_x19[2] = in_stack_00000368;
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
LAB_09080ffc:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


