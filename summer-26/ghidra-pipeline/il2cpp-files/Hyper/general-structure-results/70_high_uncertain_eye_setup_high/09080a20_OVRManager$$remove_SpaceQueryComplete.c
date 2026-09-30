/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryComplete
ENTRY_POINT: 09080a20
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_SpaceQueryComplete(float param_1,float param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int in_w8;
  float *pfVar6;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  float fVar15;
  undefined8 uVar16;
  float unaff_s15;
  float fStack0000000000000004;
  undefined8 in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  undefined4 uStack0000000000000088;
  float fStack000000000000008c;
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
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  float in_stack_000002a0;
  
  fVar15 = unaff_s9 * unaff_s9 + param_1 + param_2;
  *(undefined8 *)(unaff_x21 + 0x28) = in_stack_00000288;
  *(undefined8 *)(unaff_x21 + 0x20) = in_stack_00000280;
  if (in_w8 == 0) {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    *(undefined1 *)(unaff_x28 + 0x764) = 1;
  }
  puVar1 = PTR_DAT_0ac0a830;
  fVar7 = ABS(fVar15);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar13 = **(float **)(*unaff_x27 + 0xb8) * 8.0;
  fVar8 = fVar7 * DAT_01df4f4c;
  if (fVar7 * DAT_01df4f4c <= fVar13) {
    fVar8 = fVar13;
  }
  if (ABS(0.0 - fVar15) < fVar8) {
LAB_09080bd0:
    puVar2 = PTR_DAT_0ac78710;
    FUN_06fc65c0(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_0ac78710);
    uVar5 = *(undefined8 *)(unaff_x24 + 0xac);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar5;
    fVar7 = (float)FUN_0a1f8a64(&stack0x00000200,0);
    fVar15 = (float)uVar5;
    FUN_06fc65c0((long)&stack0x00000160 + 4,&stack0x00000260,*(undefined8 *)puVar2);
    fVar12 = (float)*(undefined8 *)(unaff_x25 + 0x68);
    uVar5 = *(undefined8 *)(unaff_x25 + 0x74);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x7c);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar5;
    fVar8 = (float)FUN_0a1f8a4c(&stack0x00000200,0);
    FUN_06fc65c0(&stack0x00000138,&stack0x00000260,*(undefined8 *)puVar2);
    uVar16 = *(undefined8 *)(unaff_x25 + 0x48);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x50);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar16;
    fVar13 = (float)FUN_0a1f8a7c(&stack0x00000200,0);
    if (DAT_0b31f3e6 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0a830);
      DAT_0b31f3e6 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    fVar9 = SQRT(fVar15 * fVar15 + fVar7 * fVar7 + in_stack_000002a0 * in_stack_000002a0);
    if (fVar9 <= DAT_01df50c4) {
      if (*(char *)(unaff_x26 + 999) == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        *(undefined1 *)(unaff_x26 + 999) = 1;
      }
      uVar16 = **(undefined8 **)(*unaff_x22 + 0xb8);
      fVar9 = *(float *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
    }
    else {
      uVar16 = CONCAT44(-in_stack_000002a0 / fVar9,-fVar7 / fVar9);
      fVar9 = -fVar15 / fVar9;
    }
    FUN_06fc65c0((undefined1 *)((long)&stack0x00000100 + 0xc),&stack0x00000260,*(undefined8 *)puVar2
                );
    uVar14 = *(undefined8 *)(unaff_x25 + 0x1c);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x24);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar14;
    lVar3 = FUN_0a1f89a0(&stack0x00000200,0);
    FUN_06fc65c0(&stack0x000000e0,&stack0x00000260,*(undefined8 *)puVar2);
    *(undefined8 *)(unaff_x24 + 0x24) = uStack0000000000000104;
    *(ulong *)(unaff_x24 + 0x1c) = CONCAT44(uStack0000000000000100,uStack00000000000000fc);
    fVar10 = (float)FUN_0a1f8a7c(&stack0x00000200,0);
    if (lVar3 == 0) goto LAB_09080ffc;
    fStack00000000000000d0 = (float)uVar5 + fVar15 * fVar13;
    fStack00000000000000cc = fVar12 + in_stack_000002a0 * fVar13;
    fStack00000000000000c8 = fVar8 + fVar7 * fVar13;
    uStack00000000000000d4 = uVar16;
    fStack00000000000000dc = fVar9;
    uVar4 = FUN_0a1ee23c(fVar10 + DAT_01df5128,lVar3,&stack0x000000c8,&stack0x000001d0,0);
    if ((uVar4 & 1) != 0) {
      uVar16 = *(undefined8 *)(unaff_x25 + 0xe0);
      uVar5 = *(undefined8 *)PTR_DAT_0ac78720;
      *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x25 + 0xe8);
      *(undefined8 *)(unaff_x24 + 0xac) = uVar16;
      FUN_06fc6590(&stack0x00000260,&stack0x00000290,uVar5);
    }
  }
  else {
    FUN_06fc65c0(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_0ac78710);
    uVar5 = *(undefined8 *)(unaff_x24 + 0xac);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar5;
    fVar7 = in_stack_000002a0;
    fVar8 = (float)FUN_0a1f8a64(&stack0x00000200,0);
    if (DAT_0b31f3e6 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0a830);
      DAT_0b31f3e6 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    fVar15 = SQRT(fVar15);
    if (fVar15 <= DAT_01df50c4) {
      if (*(char *)(unaff_x26 + 999) == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        *(undefined1 *)(unaff_x26 + 999) = 1;
      }
      pfVar6 = *(float **)(*unaff_x22 + 0xb8);
      fVar13 = *pfVar6;
      fVar12 = pfVar6[1];
      fVar15 = pfVar6[2];
    }
    else {
      fVar13 = unaff_s11 / fVar15;
      fVar12 = unaff_s8 / fVar15;
      fVar15 = unaff_s9 / fVar15;
    }
    if (DAT_01df5128 < ABS((float)uVar5 * fVar15 + fVar8 * fVar13 + fVar7 * fVar12))
    goto LAB_09080bd0;
  }
  FUN_06fc65c0(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_0ac78710);
  FUN_090812c8((long)&stack0x00000160 + 4,uStack0000000000000074,uStack0000000000000070,
               uStack0000000000000088);
  fVar15 = fStack0000000000000168;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar8 = fStack0000000000000068 + fStack0000000000000168;
    fVar13 = fStack000000000000006c + fStack000000000000016c;
    fVar7 = (float)FUN_0a1ecf3c(*(long *)(unaff_x20 + 0x20),0);
    uVar4 = FUN_09081468(fStack000000000000008c + in_stack_00000160._4_4_,fVar8,fVar13,
                         fStack0000000000000084,fVar7 - fStack0000000000000084);
    if ((uVar4 & 1) != 0) {
      uVar11 = FUN_0a1f8a4c(&stack0x00000230,0);
      if (*(char *)(unaff_x23 + 0x3e4) == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        *(undefined1 *)(unaff_x23 + 0x3e4) = 1;
      }
      lVar3 = *(long *)(*unaff_x22 + 0xb8);
      fStack0000000000000004 = in_stack_00000060._4_4_ + fVar15;
      uVar4 = FUN_090818ac(uVar11,fVar8,fVar13,*(undefined4 *)(lVar3 + 0x18),
                           *(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),
                           (long)&stack0x000001c8 + 4);
      if ((uVar4 & 1) != 0) {
        FUN_0a1f8a4c(&stack0x00000230,0);
        fVar7 = *(float *)(unaff_x20 + 0x34);
        if (fVar8 - (fStack0000000000000080 - fStack0000000000000084) <= fVar7) {
          FUN_0a1f8a64(&stack0x00000230,0);
          uVar4 = FUN_0907f758();
          if ((uVar4 & 1) != 0) {
            if (fVar15 <= unaff_s15 - in_stack_000001c8._4_4_) {
              fVar15 = unaff_s15 - in_stack_000001c8._4_4_;
            }
            FUN_09081eac(0);
            fStack0000000000000004 = fVar7 * fVar15;
            uVar4 = FUN_09081000(uStack0000000000000078,fStack0000000000000080,
                                 uStack000000000000007c,fStack000000000000008c,
                                 fStack0000000000000068,fStack000000000000006c,
                                 fStack0000000000000084);
            if ((uVar4 & 1) == 0) {
              *unaff_x19 = in_stack_00000160._4_4_;
              unaff_x19[1] = fVar15;
              unaff_x19[2] = fStack000000000000016c;
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


