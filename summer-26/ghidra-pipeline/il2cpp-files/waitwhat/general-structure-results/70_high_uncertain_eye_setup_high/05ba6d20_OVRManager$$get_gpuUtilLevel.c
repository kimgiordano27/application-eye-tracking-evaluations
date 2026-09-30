/*
FUNCTION_NAME: OVRManager$$get_gpuUtilLevel
ENTRY_POINT: 05ba6d20
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__get_gpuUtilLevel(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  undefined4 unaff_s10;
  float unaff_s11;
  float unaff_s13;
  undefined8 uVar15;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  float in_stack_00000040;
  undefined8 in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
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
  float in_stack_000002a0;
  
  fVar14 = SQRT(unaff_s13);
  if (fVar14 <= *(float *)(unaff_x21 + 0xcb4)) {
    if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
    }
    pfVar5 = *(float **)(*unaff_x22 + 0xb8);
    fVar6 = *pfVar5;
    fVar11 = pfVar5[1];
    fVar14 = pfVar5[2];
  }
  else {
    fVar6 = unaff_s11 / fVar14;
    fVar11 = unaff_s8 / fVar14;
    fVar14 = unaff_s9 / fVar14;
  }
  puVar1 = PTR_DAT_07115e28;
  if (*(float *)(unaff_x27 + 0xd1c) <
      ABS(param_3 * fVar14 + unaff_s14 * fVar6 + in_stack_00000040 * fVar11)) {
    FUN_0466ffac(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_07115e28);
    uVar4 = *(undefined8 *)(unaff_x24 + 0xac);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar4;
    fVar6 = (float)FUN_06a63564(&stack0x00000200,0);
    fVar14 = (float)uVar4;
    FUN_0466ffac((long)&stack0x00000160 + 4,&stack0x00000260,*(undefined8 *)puVar1);
    fVar12 = (float)*(undefined8 *)(unaff_x25 + 0x68);
    uVar4 = *(undefined8 *)(unaff_x25 + 0x74);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x7c);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar4;
    fVar11 = (float)FUN_06a6354c(&stack0x00000200,0);
    FUN_0466ffac(&stack0x00000138,&stack0x00000260,*(undefined8 *)puVar1);
    uVar15 = *(undefined8 *)(unaff_x25 + 0x48);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x50);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar15;
    fVar7 = (float)FUN_06a6357c(&stack0x00000200,0);
    if (*(char *)(unaff_x29 + 0xbbf) == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      *(undefined1 *)(unaff_x29 + 0xbbf) = 1;
    }
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    fVar8 = SQRT(fVar14 * fVar14 + fVar6 * fVar6 + in_stack_000002a0 * in_stack_000002a0);
    if (fVar8 <= *(float *)(unaff_x21 + 0xcb4)) {
      if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
      }
      uVar15 = **(undefined8 **)(*unaff_x22 + 0xb8);
      fVar8 = *(float *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
    }
    else {
      uVar15 = CONCAT44(-in_stack_000002a0 / fVar8,-fVar6 / fVar8);
      fVar8 = -fVar14 / fVar8;
    }
    FUN_0466ffac((undefined1 *)((long)&stack0x00000100 + 0xc),&stack0x00000260,*(undefined8 *)puVar1
                );
    uVar13 = *(undefined8 *)(unaff_x25 + 0x1c);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x24);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar13;
    lVar2 = FUN_06a634a0(&stack0x00000200,0);
    FUN_0466ffac(&stack0x000000e0,&stack0x00000260,*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x24 + 0x24) = uStack0000000000000104;
    *(ulong *)(unaff_x24 + 0x1c) = CONCAT44(uStack0000000000000100,uStack00000000000000fc);
    fVar9 = (float)FUN_06a6357c(&stack0x00000200,0);
    if (lVar2 == 0) goto LAB_05ba71dc;
    fStack00000000000000d0 = (float)uVar4 + fVar14 * fVar7;
    fStack00000000000000cc = fVar12 + in_stack_000002a0 * fVar7;
    fStack00000000000000c8 = fVar11 + fVar6 * fVar7;
    uStack00000000000000d4 = uVar15;
    fStack00000000000000dc = fVar8;
    uVar3 = FUN_06a59148(fVar9 + DAT_012e3d1c,lVar2,&stack0x000000c8,&stack0x000001d0,0);
    if ((uVar3 & 1) != 0) {
      uVar15 = *(undefined8 *)(unaff_x25 + 0xe0);
      uVar4 = *(undefined8 *)PTR_DAT_07115e38;
      *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x25 + 0xe8);
      *(undefined8 *)(unaff_x24 + 0xac) = uVar15;
      FUN_0466ff7c(&stack0x00000260,&stack0x00000290,uVar4);
    }
  }
  FUN_0466ffac(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_07115e28);
  FUN_05ba74a8((long)&stack0x00000160 + 4,uStack0000000000000074,uStack0000000000000070,unaff_s10);
  fVar14 = fStack0000000000000168;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar11 = fStack0000000000000068 + fStack0000000000000168;
    fVar7 = fStack000000000000006c + fStack000000000000016c;
    fVar6 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
    uVar3 = FUN_05ba7648(in_stack_00000088._4_4_ + in_stack_00000160._4_4_,fVar11,fVar7,
                         fStack0000000000000084,fVar6 - fStack0000000000000084);
    if ((uVar3 & 1) != 0) {
      uVar10 = FUN_06a6354c(&stack0x00000230,0);
      if (*(char *)(unaff_x23 + 0x7aa) == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        *(undefined1 *)(unaff_x23 + 0x7aa) = 1;
      }
      lVar2 = *(long *)(*unaff_x22 + 0xb8);
      fStack0000000000000004 = in_stack_00000060._4_4_ + fVar14;
      uVar3 = FUN_05ba7a8c(uVar10,fVar11,fVar7,*(undefined4 *)(lVar2 + 0x18),
                           *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),
                           (long)&stack0x000001c8 + 4);
      if ((uVar3 & 1) != 0) {
        FUN_06a6354c(&stack0x00000230,0);
        fVar6 = *(float *)(unaff_x20 + 0x34);
        if (fVar11 - (fStack0000000000000080 - fStack0000000000000084) <= fVar6) {
          FUN_06a63564(&stack0x00000230,0);
          uVar3 = FUN_05ba5938();
          if ((uVar3 & 1) != 0) {
            if (fVar14 <= unaff_s15 - in_stack_000001c8._4_4_) {
              fVar14 = unaff_s15 - in_stack_000001c8._4_4_;
            }
            FUN_035ed394(0);
            fStack0000000000000004 = fVar6 * fVar14;
            uVar3 = FUN_05ba71e0(uStack0000000000000078,fStack0000000000000080,
                                 uStack000000000000007c,in_stack_00000088._4_4_,
                                 fStack0000000000000068,fStack000000000000006c,
                                 fStack0000000000000084);
            if ((uVar3 & 1) == 0) {
              *unaff_x19 = in_stack_00000160._4_4_;
              unaff_x19[1] = fVar14;
              unaff_x19[2] = fStack000000000000016c;
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
LAB_05ba71dc:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


