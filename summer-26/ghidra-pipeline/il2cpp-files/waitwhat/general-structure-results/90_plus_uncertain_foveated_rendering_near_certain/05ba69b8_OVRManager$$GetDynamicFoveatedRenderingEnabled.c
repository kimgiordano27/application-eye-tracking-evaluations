/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 05ba69b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__GetDynamicFoveatedRenderingEnabled(undefined1 param_1 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  ulong uVar5;
  undefined8 uVar6;
  int in_w8;
  long lVar7;
  float *pfVar8;
  float *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float unaff_s8;
  float unaff_s9;
  float fVar17;
  float unaff_s10;
  float fVar18;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 uVar19;
  float fStack0000000000000004;
  float fStack000000000000005c;
  float fStack0000000000000064;
  float fStack000000000000006c;
  float fStack0000000000000074;
  float fStack000000000000007c;
  float in_stack_00000080;
  float fStack0000000000000084;
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
  undefined8 uStack0000000000000190;
  undefined8 in_stack_000001c8;
  undefined8 uStack00000000000001d0;
  undefined8 uStack00000000000001e0;
  float in_stack_000002a0;
  float in_stack_00000360;
  float in_stack_00000364;
  float in_stack_00000368;
  
  uVar19 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  *(undefined8 *)(unaff_x24 + 0x54) = uVar19;
  *(undefined8 *)(unaff_x24 + 0x4c) = uVar6;
  *(undefined8 *)(unaff_x24 + 0x24) = uVar19;
  *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
  *(undefined8 *)(unaff_x25 + 0xe8) = uVar19;
  *(undefined8 *)(unaff_x25 + 0xe0) = uVar6;
  unaff_x21[1] = uVar19;
  *unaff_x21 = uVar6;
  unaff_x21[3] = uVar19;
  unaff_x21[2] = uVar6;
  unaff_x21[5] = uVar19;
  unaff_x21[4] = uVar6;
  uStack0000000000000190 = uVar6;
  uStack00000000000001d0 = uVar6;
  uStack00000000000001e0 = uVar6;
  if (in_w8 == 0) {
    FUN_03188a78(PTR_DAT_070c1a80);
    *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
  }
  cVar4 = DAT_075457aa;
  puVar1 = PTR_DAT_070c1a80;
  fVar13 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
  *(undefined8 *)unaff_x19 = **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
  unaff_x19[2] = fVar13;
  fStack000000000000007c = unaff_s10;
  fStack0000000000000084 = unaff_s8;
  fStack000000000000008c = unaff_s9;
  if (cVar4 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_075457aa = '\x01';
  }
  lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar18 = *(float *)(lVar7 + 0x18);
  fVar17 = *(float *)(lVar7 + 0x1c);
  fVar13 = *(float *)(lVar7 + 0x20);
  if (DAT_0754d684 == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    DAT_0754d684 = '\x01';
  }
  puVar3 = PTR_DAT_070cf060;
  fVar9 = fVar13 * fVar13 + fVar18 * fVar18 + fVar17 * fVar17;
  if (**(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) <= fVar9) {
    fVar14 = in_stack_00000368 * fVar13 + in_stack_00000360 * fVar18 + in_stack_00000364 * fVar17;
    in_stack_00000360 = in_stack_00000360 - (fVar18 * fVar14) / fVar9;
    in_stack_00000364 = in_stack_00000364 - (fVar17 * fVar14) / fVar9;
    in_stack_00000368 = in_stack_00000368 - (fVar13 * fVar14) / fVar9;
  }
  fVar17 = unaff_s11 - in_stack_00000080;
  fVar13 = *(float *)(unaff_x20 + 0x34);
  if (fVar17 <= *(float *)(unaff_x20 + 0x34)) {
    fVar13 = fVar17;
  }
  if (DAT_075457aa == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_075457aa = '\x01';
  }
  fVar9 = fStack000000000000008c;
  fVar18 = fStack000000000000007c;
  fStack0000000000000064 =
       in_stack_00000080 + fVar13 * *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c);
  fStack000000000000005c = unaff_s12 + fVar13 * *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18)
  ;
  fStack0000000000000004 = in_stack_00000364;
  fStack0000000000000074 = in_stack_00000360;
  uVar5 = FUN_05ba71e0();
  cVar4 = DAT_07546c44;
  fVar14 = fStack0000000000000074;
  fStack000000000000006c = unaff_s13;
  if ((uVar5 & 1) != 0) {
    fVar9 = fVar9 - unaff_s12;
    fVar18 = unaff_s13 - fVar18;
    unaff_x21[1] = uVar19;
    *unaff_x21 = uVar6;
    unaff_x21[3] = uVar19;
    unaff_x21[2] = uVar6;
    fVar14 = fVar18 * fVar18 + fVar9 * fVar9 + fVar17 * fVar17;
    unaff_x21[5] = uVar19;
    unaff_x21[4] = uVar6;
    if (cVar4 == '\0') {
      FUN_03188a78(PTR_DAT_070cf060);
      DAT_07546c44 = '\x01';
    }
    puVar2 = PTR_DAT_070c22f8;
    fVar10 = ABS(fVar14);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar15 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
    fVar11 = fVar10 * DAT_012e3b94;
    if (fVar10 * DAT_012e3b94 <= fVar15) {
      fVar11 = fVar15;
    }
    if (ABS(0.0 - fVar14) < fVar11) {
LAB_05ba6db0:
      puVar3 = PTR_DAT_07115e28;
      FUN_0466ffac(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_07115e28);
      uVar6 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar18 = (float)FUN_06a63564(&stack0x00000200,0);
      fVar17 = (float)uVar6;
      FUN_0466ffac((long)&stack0x00000160 + 4,&stack0x00000260,*(undefined8 *)puVar3);
      fVar10 = (float)*(undefined8 *)(unaff_x25 + 0x68);
      uVar6 = *(undefined8 *)(unaff_x25 + 0x74);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x7c);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar9 = (float)FUN_06a6354c(&stack0x00000200,0);
      FUN_0466ffac(&stack0x00000138,&stack0x00000260,*(undefined8 *)puVar3);
      uVar19 = *(undefined8 *)(unaff_x25 + 0x48);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x50);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar19;
      fVar14 = (float)FUN_06a6357c(&stack0x00000200,0);
      if (DAT_07546bbf == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546bbf = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar11 = SQRT(fVar17 * fVar17 + fVar18 * fVar18 + in_stack_000002a0 * in_stack_000002a0);
      if (fVar11 <= DAT_012e3cb4) {
        if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
        }
        uVar19 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
        fVar11 = *(float *)(*(undefined8 **)(*(long *)puVar1 + 0xb8) + 1);
      }
      else {
        uVar19 = CONCAT44(-in_stack_000002a0 / fVar11,-fVar18 / fVar11);
        fVar11 = -fVar17 / fVar11;
      }
      FUN_0466ffac((undefined1 *)((long)&stack0x00000100 + 0xc),&stack0x00000260,
                   *(undefined8 *)puVar3);
      uVar16 = *(undefined8 *)(unaff_x25 + 0x1c);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x24);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar16;
      lVar7 = FUN_06a634a0(&stack0x00000200,0);
      FUN_0466ffac(&stack0x000000e0,&stack0x00000260,*(undefined8 *)puVar3);
      *(undefined8 *)(unaff_x24 + 0x24) = uStack0000000000000104;
      *(ulong *)(unaff_x24 + 0x1c) = CONCAT44(uStack0000000000000100,uStack00000000000000fc);
      fVar15 = (float)FUN_06a6357c(&stack0x00000200,0);
      if (lVar7 == 0) goto LAB_05ba71dc;
      fStack00000000000000d0 = (float)uVar6 + fVar17 * fVar14;
      fStack00000000000000cc = fVar10 + in_stack_000002a0 * fVar14;
      fStack00000000000000c8 = fVar9 + fVar18 * fVar14;
      uStack00000000000000d4 = uVar19;
      fStack00000000000000dc = fVar11;
      uVar5 = FUN_06a59148(fVar15 + DAT_012e3d1c,lVar7,&stack0x000000c8,&stack0x000001d0,0);
      if ((uVar5 & 1) != 0) {
        uVar19 = *(undefined8 *)(unaff_x25 + 0xe0);
        uVar6 = *(undefined8 *)PTR_DAT_07115e38;
        *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x25 + 0xe8);
        *(undefined8 *)(unaff_x24 + 0xac) = uVar19;
        FUN_0466ff7c(&stack0x00000260,&stack0x00000290,uVar6);
      }
    }
    else {
      FUN_0466ffac(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_07115e28);
      uVar6 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar10 = in_stack_000002a0;
      fVar11 = (float)FUN_06a63564(&stack0x00000200,0);
      if (DAT_07546bbf == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546bbf = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar14 = SQRT(fVar14);
      if (fVar14 <= DAT_012e3cb4) {
        if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
        }
        pfVar8 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar9 = *pfVar8;
        fVar17 = pfVar8[1];
        fVar18 = pfVar8[2];
      }
      else {
        fVar9 = fVar9 / fVar14;
        fVar17 = fVar17 / fVar14;
        fVar18 = fVar18 / fVar14;
      }
      if (DAT_012e3d1c < ABS((float)uVar6 * fVar18 + fVar11 * fVar9 + fVar10 * fVar17))
      goto LAB_05ba6db0;
    }
    FUN_0466ffac(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_07115e28);
    FUN_05ba74a8((long)&stack0x00000160 + 4,fStack0000000000000074,in_stack_00000364,
                 in_stack_00000368);
    in_stack_00000368 = fStack000000000000016c;
    in_stack_00000364 = fStack0000000000000168;
    fVar14 = in_stack_00000160._4_4_;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar18 = unaff_s11 + in_stack_00000364;
    fVar9 = fStack000000000000006c + in_stack_00000368;
    fVar10 = fStack000000000000008c + fVar14;
    fVar17 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
    uVar5 = FUN_05ba7648(fVar10,fVar18,fVar9,fStack0000000000000084,fVar17 - fStack0000000000000084)
    ;
    if ((uVar5 & 1) != 0) {
      uVar12 = FUN_06a6354c(&stack0x00000230,0);
      if (DAT_075457aa == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457aa = '\x01';
      }
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      fStack0000000000000004 = fStack0000000000000064 + in_stack_00000364;
      uVar5 = FUN_05ba7a8c(uVar12,fVar18,fVar9,*(undefined4 *)(lVar7 + 0x18),
                           *(undefined4 *)(lVar7 + 0x1c),*(undefined4 *)(lVar7 + 0x20),
                           (long)&stack0x000001c8 + 4);
      if ((uVar5 & 1) != 0) {
        FUN_06a6354c(&stack0x00000230,0);
        fVar17 = *(float *)(unaff_x20 + 0x34);
        if (fVar18 - (in_stack_00000080 - fStack0000000000000084) <= fVar17) {
          FUN_06a63564(&stack0x00000230,0);
          uVar5 = FUN_05ba5938();
          if ((uVar5 & 1) != 0) {
            if (in_stack_00000364 <= fVar13 - in_stack_000001c8._4_4_) {
              in_stack_00000364 = fVar13 - in_stack_000001c8._4_4_;
            }
            FUN_035ed394(0);
            fStack0000000000000004 = fVar17 * in_stack_00000364;
            uVar5 = FUN_05ba71e0(unaff_s12,in_stack_00000080,fStack000000000000007c,
                                 fStack000000000000008c,unaff_s11,fStack000000000000006c,
                                 fStack0000000000000084);
            if ((uVar5 & 1) == 0) {
              *unaff_x19 = fVar14;
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


