/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 05ba6a44
PROGRAM: waitwhat-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__set_useDynamicFoveatedRendering(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 in_w8;
  long lVar6;
  float *pfVar7;
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
  undefined8 uVar14;
  float fVar15;
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
  
  *(undefined1 *)(unaff_x23 + 0x7aa) = in_w8;
  lVar6 = *(long *)(*unaff_x22 + 0xb8);
  fVar17 = *(float *)(lVar6 + 0x18);
  fVar16 = *(float *)(lVar6 + 0x1c);
  fVar15 = *(float *)(lVar6 + 0x20);
  if (DAT_0754d684 == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    DAT_0754d684 = '\x01';
  }
  puVar2 = PTR_DAT_070cf060;
  fVar8 = fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16;
  if (**(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) <= fVar8) {
    fVar12 = in_stack_00000368 * fVar15 + in_stack_00000360 * fVar17 + in_stack_00000364 * fVar16;
    in_stack_00000360 = in_stack_00000360 - (fVar17 * fVar12) / fVar8;
    in_stack_00000364 = in_stack_00000364 - (fVar16 * fVar12) / fVar8;
    in_stack_00000368 = in_stack_00000368 - (fVar15 * fVar12) / fVar8;
  }
  fVar16 = unaff_s11 - fStack0000000000000080;
  fVar15 = *(float *)(unaff_x20 + 0x34);
  if (fVar16 <= *(float *)(unaff_x20 + 0x34)) {
    fVar15 = fVar16;
  }
  if (*(char *)(unaff_x23 + 0x7aa) == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    *(undefined1 *)(unaff_x23 + 0x7aa) = 1;
  }
  fStack0000000000000064 =
       fStack0000000000000080 + fVar15 * *(float *)(*(long *)(*unaff_x22 + 0xb8) + 0x1c);
  fStack000000000000005c = unaff_s12 + fVar15 * *(float *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
  fStack0000000000000004 = in_stack_00000364;
  fStack0000000000000074 = in_stack_00000360;
  uVar4 = FUN_05ba71e0();
  cVar3 = DAT_07546c44;
  fVar17 = fStack0000000000000074;
  fStack000000000000006c = unaff_s13;
  if ((uVar4 & 1) != 0) {
    fVar17 = in_stack_00000088._4_4_ - unaff_s12;
    fVar12 = unaff_s13 - in_stack_00000078._4_4_;
    unaff_x21[1] = in_stack_00000268;
    *unaff_x21 = in_stack_00000260;
    unaff_x21[3] = in_stack_00000278;
    unaff_x21[2] = in_stack_00000270;
    fVar8 = fVar12 * fVar12 + fVar17 * fVar17 + fVar16 * fVar16;
    unaff_x21[5] = in_stack_00000288;
    unaff_x21[4] = in_stack_00000280;
    if (cVar3 == '\0') {
      FUN_03188a78(PTR_DAT_070cf060);
      DAT_07546c44 = '\x01';
    }
    puVar1 = PTR_DAT_070c22f8;
    fVar9 = ABS(fVar8);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar13 = **(float **)(*(long *)puVar2 + 0xb8) * 8.0;
    fVar10 = fVar9 * DAT_012e3b94;
    if (fVar9 * DAT_012e3b94 <= fVar13) {
      fVar10 = fVar13;
    }
    if (ABS(0.0 - fVar8) < fVar10) {
LAB_05ba6db0:
      puVar2 = PTR_DAT_07115e28;
      FUN_0466ffac(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_07115e28);
      uVar5 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar5;
      fVar17 = (float)FUN_06a63564(&stack0x00000200,0);
      fVar16 = (float)uVar5;
      FUN_0466ffac((long)&stack0x00000160 + 4,&stack0x00000260,*(undefined8 *)puVar2);
      fVar9 = (float)*(undefined8 *)(unaff_x25 + 0x68);
      uVar5 = *(undefined8 *)(unaff_x25 + 0x74);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x7c);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar5;
      fVar8 = (float)FUN_06a6354c(&stack0x00000200,0);
      FUN_0466ffac(&stack0x00000138,&stack0x00000260,*(undefined8 *)puVar2);
      uVar18 = *(undefined8 *)(unaff_x25 + 0x48);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x50);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar18;
      fVar12 = (float)FUN_06a6357c(&stack0x00000200,0);
      if (DAT_07546bbf == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546bbf = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar10 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + in_stack_000002a0 * in_stack_000002a0);
      if (fVar10 <= DAT_012e3cb4) {
        if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
        }
        uVar18 = **(undefined8 **)(*unaff_x22 + 0xb8);
        fVar10 = *(float *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
      }
      else {
        uVar18 = CONCAT44(-in_stack_000002a0 / fVar10,-fVar17 / fVar10);
        fVar10 = -fVar16 / fVar10;
      }
      FUN_0466ffac((undefined1 *)((long)&stack0x00000100 + 0xc),&stack0x00000260,
                   *(undefined8 *)puVar2);
      uVar14 = *(undefined8 *)(unaff_x25 + 0x1c);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x24);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar14;
      lVar6 = FUN_06a634a0(&stack0x00000200,0);
      FUN_0466ffac(&stack0x000000e0,&stack0x00000260,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x24 + 0x24) = uStack0000000000000104;
      *(ulong *)(unaff_x24 + 0x1c) = CONCAT44(uStack0000000000000100,uStack00000000000000fc);
      fVar13 = (float)FUN_06a6357c(&stack0x00000200,0);
      if (lVar6 == 0) goto LAB_05ba71dc;
      fStack00000000000000d0 = (float)uVar5 + fVar16 * fVar12;
      fStack00000000000000cc = fVar9 + in_stack_000002a0 * fVar12;
      fStack00000000000000c8 = fVar8 + fVar17 * fVar12;
      uStack00000000000000d4 = uVar18;
      fStack00000000000000dc = fVar10;
      uVar4 = FUN_06a59148(fVar13 + DAT_012e3d1c,lVar6,&stack0x000000c8,&stack0x000001d0,0);
      if ((uVar4 & 1) != 0) {
        uVar18 = *(undefined8 *)(unaff_x25 + 0xe0);
        uVar5 = *(undefined8 *)PTR_DAT_07115e38;
        *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x25 + 0xe8);
        *(undefined8 *)(unaff_x24 + 0xac) = uVar18;
        FUN_0466ff7c(&stack0x00000260,&stack0x00000290,uVar5);
      }
    }
    else {
      FUN_0466ffac(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_07115e28);
      uVar5 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar5;
      fVar9 = in_stack_000002a0;
      fVar10 = (float)FUN_06a63564(&stack0x00000200,0);
      if (DAT_07546bbf == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546bbf = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar8 = SQRT(fVar8);
      if (fVar8 <= DAT_012e3cb4) {
        if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
        }
        pfVar7 = *(float **)(*unaff_x22 + 0xb8);
        fVar17 = *pfVar7;
        fVar16 = pfVar7[1];
        fVar12 = pfVar7[2];
      }
      else {
        fVar17 = fVar17 / fVar8;
        fVar16 = fVar16 / fVar8;
        fVar12 = fVar12 / fVar8;
      }
      if (DAT_012e3d1c < ABS((float)uVar5 * fVar12 + fVar10 * fVar17 + fVar9 * fVar16))
      goto LAB_05ba6db0;
    }
    FUN_0466ffac(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_07115e28);
    FUN_05ba74a8((long)&stack0x00000160 + 4,fStack0000000000000074,in_stack_00000364,
                 in_stack_00000368);
    in_stack_00000368 = fStack000000000000016c;
    in_stack_00000364 = fStack0000000000000168;
    fVar17 = in_stack_00000160._4_4_;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar8 = unaff_s11 + in_stack_00000364;
    fVar12 = fStack000000000000006c + in_stack_00000368;
    fVar16 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
    uVar4 = FUN_05ba7648(in_stack_00000088._4_4_ + fVar17,fVar8,fVar12,fStack0000000000000084,
                         fVar16 - fStack0000000000000084);
    if ((uVar4 & 1) != 0) {
      uVar11 = FUN_06a6354c(&stack0x00000230,0);
      if (*(char *)(unaff_x23 + 0x7aa) == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        *(undefined1 *)(unaff_x23 + 0x7aa) = 1;
      }
      lVar6 = *(long *)(*unaff_x22 + 0xb8);
      fStack0000000000000004 = fStack0000000000000064 + in_stack_00000364;
      uVar4 = FUN_05ba7a8c(uVar11,fVar8,fVar12,*(undefined4 *)(lVar6 + 0x18),
                           *(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),
                           (long)&stack0x000001c8 + 4);
      if ((uVar4 & 1) != 0) {
        FUN_06a6354c(&stack0x00000230,0);
        fVar16 = *(float *)(unaff_x20 + 0x34);
        if (fVar8 - (fStack0000000000000080 - fStack0000000000000084) <= fVar16) {
          FUN_06a63564(&stack0x00000230,0);
          uVar4 = FUN_05ba5938();
          if ((uVar4 & 1) != 0) {
            if (in_stack_00000364 <= fVar15 - in_stack_000001c8._4_4_) {
              in_stack_00000364 = fVar15 - in_stack_000001c8._4_4_;
            }
            FUN_035ed394(0);
            fStack0000000000000004 = fVar16 * in_stack_00000364;
            uVar4 = FUN_05ba71e0(unaff_s12,fStack0000000000000080,in_stack_00000078._4_4_,
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
LAB_05ba71dc:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


