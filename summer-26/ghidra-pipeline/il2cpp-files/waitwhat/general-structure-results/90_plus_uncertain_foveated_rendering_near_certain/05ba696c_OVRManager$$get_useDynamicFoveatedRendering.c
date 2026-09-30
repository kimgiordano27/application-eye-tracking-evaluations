/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 05ba696c
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


undefined8
OVRManager__get_useDynamicFoveatedRendering
          (ulong param_1,undefined1 param_2 [16],float param_3,long param_4,float *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  undefined8 *unaff_x21;
  long unaff_x22;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_s8;
  float unaff_s9;
  float fVar19;
  float unaff_s10;
  float fVar20;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar21;
  undefined8 uVar22;
  float fStack0000000000000004;
  float fStack000000000000005c;
  float fStack0000000000000064;
  float fStack000000000000006c;
  float fStack0000000000000074;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack000000000000008c;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  float fStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  float fStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined8 in_stack_00000160;
  float fStack0000000000000168;
  float fStack000000000000016c;
  undefined4 uStack0000000000000170;
  float fStack0000000000000174;
  float in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  float fStack00000000000001cc;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  float fStack00000000000001ec;
  undefined4 in_stack_000001f0;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined4 in_stack_000002a8;
  float in_stack_000002ac;
  undefined4 in_stack_000002b0;
  undefined8 in_stack_000002b4;
  float in_stack_00000360;
  float in_stack_00000364;
  float in_stack_00000368;
  
  fStack0000000000000080 = param_3;
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07115e38);
    FUN_03188a78(PTR_DAT_07115e28);
    *(undefined1 *)(unaff_x22 + 0x9ac) = 1;
  }
  cVar4 = DAT_075457d6;
  fStack00000000000001cc = 0.0;
  in_stack_000001a8 = 0;
  in_stack_000001a0 = 0;
  in_stack_000001b8 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001f0 = 0;
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001e8 = 0;
  fStack00000000000001ec = 0.0;
  in_stack_000001e0 = 0;
  in_stack_00000198 = 0;
  in_stack_00000190 = 0;
  unaff_x21[1] = 0;
  *unaff_x21 = 0;
  unaff_x21[3] = 0;
  unaff_x21[2] = 0;
  unaff_x21[5] = 0;
  unaff_x21[4] = 0;
  if (cVar4 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_075457d6 = '\x01';
  }
  cVar4 = DAT_075457aa;
  puVar1 = PTR_DAT_070c1a80;
  fVar15 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
  *(undefined8 *)param_5 = **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
  param_5[2] = fVar15;
  fStack000000000000007c = unaff_s10;
  fStack0000000000000084 = unaff_s8;
  fStack000000000000008c = unaff_s9;
  if (cVar4 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_075457aa = '\x01';
  }
  lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar20 = *(float *)(lVar9 + 0x18);
  fVar19 = *(float *)(lVar9 + 0x1c);
  fVar15 = *(float *)(lVar9 + 0x20);
  if (DAT_0754d684 == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    DAT_0754d684 = '\x01';
  }
  fVar21 = fStack0000000000000080;
  puVar3 = PTR_DAT_070cf060;
  fVar11 = fVar15 * fVar15 + fVar20 * fVar20 + fVar19 * fVar19;
  if (**(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) <= fVar11) {
    fVar16 = in_stack_00000368 * fVar15 + in_stack_00000360 * fVar20 + in_stack_00000364 * fVar19;
    in_stack_00000360 = in_stack_00000360 - (fVar20 * fVar16) / fVar11;
    in_stack_00000364 = in_stack_00000364 - (fVar19 * fVar16) / fVar11;
    in_stack_00000368 = in_stack_00000368 - (fVar15 * fVar16) / fVar11;
  }
  fVar19 = unaff_s11 - fStack0000000000000080;
  fVar15 = *(float *)(param_4 + 0x34);
  if (fVar19 <= *(float *)(param_4 + 0x34)) {
    fVar15 = fVar19;
  }
  if (DAT_075457aa == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_075457aa = '\x01';
  }
  fVar11 = fStack000000000000008c;
  fVar20 = fStack000000000000007c;
  fStack0000000000000064 = fVar21 + fVar15 * *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c);
  fStack000000000000005c = unaff_s12 + fVar15 * *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18)
  ;
  fStack0000000000000004 = in_stack_00000364;
  fStack0000000000000074 = in_stack_00000360;
  uVar8 = FUN_05ba71e0(param_4,&stack0x00000260);
  cVar4 = DAT_07546c44;
  fVar21 = fStack0000000000000074;
  fStack000000000000006c = unaff_s13;
  if ((uVar8 & 1) != 0) {
    fVar11 = fVar11 - unaff_s12;
    fVar20 = unaff_s13 - fVar20;
    unaff_x21[1] = 0;
    *unaff_x21 = 0;
    unaff_x21[3] = 0;
    unaff_x21[2] = 0;
    fVar21 = fVar20 * fVar20 + fVar11 * fVar11 + fVar19 * fVar19;
    unaff_x21[5] = 0;
    unaff_x21[4] = 0;
    if (cVar4 == '\0') {
      FUN_03188a78(PTR_DAT_070cf060);
      DAT_07546c44 = '\x01';
    }
    puVar2 = PTR_DAT_070c22f8;
    fVar16 = ABS(fVar21);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    fVar17 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
    fVar12 = fVar16 * DAT_012e3b94;
    if (fVar16 * DAT_012e3b94 <= fVar17) {
      fVar12 = fVar17;
    }
    if (ABS(0.0 - fVar21) < fVar12) {
LAB_05ba6db0:
      puVar3 = PTR_DAT_07115e28;
      FUN_0466ffac(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_07115e28);
      uVar22 = in_stack_000002a0;
      fVar19 = in_stack_000002ac;
      fVar11 = (float)FUN_06a63564(&stack0x00000200,0);
      FUN_0466ffac((long)&stack0x00000160 + 4,&stack0x00000260,*(undefined8 *)puVar3);
      fVar20 = fStack0000000000000174;
      fVar21 = in_stack_00000180;
      fVar16 = (float)FUN_06a6354c(&stack0x00000200,0);
      FUN_0466ffac(&stack0x00000138,&stack0x00000260,*(undefined8 *)puVar3);
      fVar12 = (float)FUN_06a6357c(&stack0x00000200,0);
      if (DAT_07546bbf == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546bbf = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar18 = (float)uVar22;
      fVar17 = SQRT(fVar19 * fVar19 + fVar11 * fVar11 + fVar18 * fVar18);
      if (fVar17 <= DAT_012e3cb4) {
        if (DAT_075457d6 == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          DAT_075457d6 = '\x01';
        }
        uVar22 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
        fVar17 = *(float *)(*(undefined8 **)(*(long *)puVar1 + 0xb8) + 1);
      }
      else {
        uVar22 = CONCAT44(-fVar18 / fVar17,-fVar11 / fVar17);
        fVar17 = -fVar19 / fVar17;
      }
      FUN_0466ffac(&stack0x0000010c,&stack0x00000260,*(undefined8 *)puVar3);
      lVar9 = FUN_06a634a0(&stack0x00000200,0);
      FUN_0466ffac(&stack0x000000e0,&stack0x00000260,*(undefined8 *)puVar3);
      fVar13 = (float)FUN_06a6357c(&stack0x00000200,0);
      if (lVar9 == 0) goto LAB_05ba71dc;
      fStack00000000000000d0 = fVar21 + fVar19 * fVar12;
      fStack00000000000000cc = fVar20 + fVar18 * fVar12;
      fStack00000000000000c8 = fVar16 + fVar11 * fVar12;
      uStack00000000000000d4 = uVar22;
      fStack00000000000000dc = fVar17;
      uVar8 = FUN_06a59148(fVar13 + DAT_012e3d1c,lVar9,&stack0x000000c8,&stack0x000001d0,0);
      uVar7 = in_stack_000001f0;
      fVar19 = fStack00000000000001ec;
      uVar14 = in_stack_000001e8;
      uVar6 = in_stack_000001e0;
      uVar5 = in_stack_000001d8;
      uVar22 = in_stack_000001d0;
      if ((uVar8 & 1) != 0) {
        in_stack_000002b4 = 0;
        FUN_0466ff7c(&stack0x00000260,&stack0x00000290,*(undefined8 *)PTR_DAT_07115e38);
        in_stack_00000290 = uVar22;
        in_stack_00000298 = uVar5;
        in_stack_000002a0 = uVar6;
        in_stack_000002a8 = uVar14;
        in_stack_000002ac = fVar19;
        in_stack_000002b0 = uVar7;
      }
    }
    else {
      FUN_0466ffac(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_07115e28);
      uVar22 = in_stack_000002a0;
      fVar16 = in_stack_000002ac;
      fVar12 = (float)FUN_06a63564(&stack0x00000200,0);
      if (DAT_07546bbf == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546bbf = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar21 = SQRT(fVar21);
      if (fVar21 <= DAT_012e3cb4) {
        if (DAT_075457d6 == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          DAT_075457d6 = '\x01';
        }
        pfVar10 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar11 = *pfVar10;
        fVar19 = pfVar10[1];
        fVar20 = pfVar10[2];
      }
      else {
        fVar11 = fVar11 / fVar21;
        fVar19 = fVar19 / fVar21;
        fVar20 = fVar20 / fVar21;
      }
      if (DAT_012e3d1c < ABS(fVar16 * fVar20 + fVar12 * fVar11 + (float)uVar22 * fVar19))
      goto LAB_05ba6db0;
    }
    FUN_0466ffac(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_07115e28);
    in_stack_00000090 = in_stack_00000290;
    in_stack_00000098 = in_stack_00000298;
    in_stack_000000a0 = in_stack_000002a0;
    uStack00000000000000a8 = in_stack_000002a8;
    fStack00000000000000ac = in_stack_000002ac;
    uStack00000000000000b0 = in_stack_000002b0;
    uStack00000000000000b4 = in_stack_000002b4;
    FUN_05ba74a8((long)&stack0x00000160 + 4,fStack0000000000000074,in_stack_00000364,
                 in_stack_00000368,param_4,&stack0x00000090);
    in_stack_00000368 = fStack000000000000016c;
    in_stack_00000364 = fStack0000000000000168;
    fVar21 = in_stack_00000160._4_4_;
  }
  if (*(long *)(param_4 + 0x20) != 0) {
    fVar20 = unaff_s11 + in_stack_00000364;
    fVar11 = fStack000000000000006c + in_stack_00000368;
    fVar16 = fStack000000000000008c + fVar21;
    fVar19 = (float)FUN_06a577c0(*(long *)(param_4 + 0x20),0);
    uVar8 = FUN_05ba7648(fVar16,fVar20,fVar11,fStack0000000000000084,fVar19 - fStack0000000000000084
                         ,param_4,&stack0x00000230);
    if ((uVar8 & 1) != 0) {
      uVar14 = FUN_06a6354c(&stack0x00000230,0);
      if (DAT_075457aa == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457aa = '\x01';
      }
      lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
      fStack0000000000000004 = fStack0000000000000064 + in_stack_00000364;
      uVar8 = FUN_05ba7a8c(uVar14,fVar20,fVar11,*(undefined4 *)(lVar9 + 0x18),
                           *(undefined4 *)(lVar9 + 0x1c),*(undefined4 *)(lVar9 + 0x20),
                           &stack0x000001cc);
      if ((uVar8 & 1) != 0) {
        FUN_06a6354c(&stack0x00000230,0);
        fVar19 = fStack0000000000000080;
        fVar11 = *(float *)(param_4 + 0x34);
        if (fVar20 - (fStack0000000000000080 - fStack0000000000000084) <= fVar11) {
          FUN_06a63564(&stack0x00000230,0);
          uVar8 = FUN_05ba5938(param_4);
          if ((uVar8 & 1) != 0) {
            if (in_stack_00000364 <= fVar15 - fStack00000000000001cc) {
              in_stack_00000364 = fVar15 - fStack00000000000001cc;
            }
            FUN_035ed394(0);
            fStack0000000000000004 = fVar11 * in_stack_00000364;
            uVar8 = FUN_05ba71e0(unaff_s12,fVar19,fStack000000000000007c,fStack000000000000008c,
                                 unaff_s11,fStack000000000000006c,fStack0000000000000084,param_4,
                                 &stack0x00000190);
            if ((uVar8 & 1) == 0) {
              *param_5 = fVar21;
              param_5[1] = in_stack_00000364;
              param_5[2] = in_stack_00000368;
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


