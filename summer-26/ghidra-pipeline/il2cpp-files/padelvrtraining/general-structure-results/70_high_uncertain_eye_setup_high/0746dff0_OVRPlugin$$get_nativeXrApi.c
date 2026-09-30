/*
FUNCTION_NAME: OVRPlugin$$get_nativeXrApi
ENTRY_POINT: 0746dff0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_nativeXrApi(float param_1,ulong param_2,ulong param_3,float param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  long unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  ulong unaff_d8;
  float fVar16;
  ulong unaff_d9;
  float fVar17;
  undefined8 unaff_d10;
  float fVar18;
  float fVar19;
  ulong unaff_d12;
  float fVar20;
  ulong unaff_d13;
  float fVar21;
  float fVar22;
  ulong unaff_d14;
  float fVar23;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000060;
  uint uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  uint uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  uint uStack00000000000000b8;
  float fStack00000000000000bc;
  undefined8 in_stack_000000c0;
  float in_stack_000000c8;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  float in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 in_stack_00000100;
  uint uStack0000000000000104;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  char in_stack_00000148;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  undefined4 uStack0000000000000160;
  uint uStack0000000000000164;
  undefined4 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  
code_r0x0746dff0:
  fStack0000000000000010 = fStack000000000000008c;
  fStack0000000000000004 = (float)unaff_d8;
  fStack0000000000000008 = (float)uStack0000000000000080;
  fStack0000000000000000 = (float)unaff_d14;
  fStack0000000000000014 = param_1;
  fStack0000000000000018 = param_4;
  FUN_0746d40c(unaff_d10);
  fVar3 = fStack00000000000000bc;
  fStack0000000000000010 = fStack00000000000000bc;
  fStack0000000000000004 = fStack0000000000000088;
  fStack0000000000000008 = fStack0000000000000084;
  fStack0000000000000000 = fStack000000000000008c;
  uStack0000000000000150 =
       FUN_0746e4cc(unaff_d9,unaff_d12,unaff_d13,unaff_d14,unaff_d8,uStack0000000000000080);
  uStack0000000000000154 = (undefined4)unaff_d12;
  uStack0000000000000158 = (undefined4)unaff_d13;
  fStack0000000000000000 = fVar3;
  uVar7 = uStack000000000000006c;
  uVar13 = uStack0000000000000068;
  uVar8 = in_stack_00000060._4_4_;
  uStack000000000000015c = FUN_08a44560(uStack0000000000000070,0);
  in_stack_00000168 = uVar8;
  uStack0000000000000164 = uVar13;
  uStack0000000000000160 = uVar7;
  do {
                    /* try { // try from 0746e0a0 to 0756e17f has its CatchHandler @ 0746e0a0
                       catch() { ... } // from try @ 0746e0a0 with catch @ 0746e0a0
                       catch() { ... } // from try @ 0746e1f4 with catch @ 0746e0a0
                       catch() { ... } // from try @ 0746e240 with catch @ 0746e0a0
                       catch() { ... } // from try @ 0746e27c with catch @ 0746e0a0
                       catch() { ... } // from try @ 0746e2ac with catch @ 0746e0a0 */
    uVar6 = uStack0000000000000158;
    uVar8 = uStack0000000000000154;
    uVar7 = uStack0000000000000150;
    if (*(int *)(*(long *)PTR_DAT_09220a10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_0746c6c8(unaff_d10,param_2,param_3,uVar7,uVar8,uVar6,&stack0x000000e0,0);
    uVar9 = FUN_07466a2c(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074,
                         &stack0x000000e0);
    if ((uVar9 & 1) != 0) {
      uStack0000000000000078 = uStack00000000000000e4;
      uStack000000000000007c = uStack00000000000000e0;
      uStack0000000000000074 = in_stack_000000e8;
      FUN_074115cc(in_stack_00000038,&stack0x00000150,0);
      in_stack_00000030._4_4_ = 1;
    }
LAB_0746e128:
    do {
      lVar10 = *(long *)(unaff_x22 + 0x20);
      if (lVar10 == 0) goto LAB_0746e130;
      if (*(int *)(lVar10 + 0x18) <= unaff_w23) {
        return in_stack_00000030._4_4_ & 1;
      }
      FUN_0592ed18(&stack0x00000090,lVar10,unaff_w23,*unaff_x29);
      in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
      in_stack_00000120 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
      in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
      *(ulong *)(unaff_x27 + 0x24) = CONCAT44(uStack00000000000000b8,uStack00000000000000b4);
      *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
      lVar10 = *(long *)(unaff_x22 + 0x20);
      if (lVar10 == 0) goto LAB_0746e130;
      iVar1 = *(int *)(lVar10 + 0x18);
      unaff_w23 = unaff_w23 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = unaff_w23 / iVar1;
      }
      FUN_0592ed18(&stack0x00000090,lVar10,unaff_w23 - iVar2 * iVar1,*unaff_x29);
      in_stack_000000f0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
      in_stack_00000110 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
      in_stack_000000f8 = fStack0000000000000098;
      uStack00000000000000fc = uStack000000000000009c;
      in_stack_00000108 = uStack00000000000000a8;
      in_stack_00000100 = uStack00000000000000a0;
      uStack0000000000000104 = uStack00000000000000a4;
      if (in_stack_00000148 == '\0') {
        if ((uStack00000000000000b8 & 0xff) != 0) goto LAB_0746e128;
LAB_0746dc44:
        if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_0746e130:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) != 1) {
          in_stack_00000178 = in_stack_00000128;
          in_stack_00000170 = in_stack_00000120;
          *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
          *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
          FUN_07411d10(&stack0x00000090);
          fVar5 = fStack0000000000000098;
          fVar4 = fStack0000000000000094;
          fVar3 = fStack0000000000000090;
          uStack000000000000006c = uStack00000000000000a0;
          uStack0000000000000070 = uStack000000000000009c;
          in_stack_00000060._4_4_ = uStack00000000000000a8;
          uStack0000000000000068 = uStack00000000000000a4;
          in_stack_00000178 = CONCAT44(uStack00000000000000fc,in_stack_000000f8);
          in_stack_00000170 = in_stack_000000f0;
          *(ulong *)(unaff_x27 + 100) = CONCAT44(in_stack_00000108,uStack0000000000000104);
          *(ulong *)(unaff_x27 + 0x5c) = CONCAT44(in_stack_00000100,uStack00000000000000fc);
          uStack0000000000000080 = uStack00000000000000a8;
          FUN_07411d10(&stack0x00000090);
          param_4 = fStack0000000000000098;
          param_1 = fStack0000000000000094;
          fStack000000000000008c = fStack0000000000000090;
          uVar13 = uStack00000000000000a4;
          fVar12 = (float)FUN_0746d3e8(&stack0x00000120);
          fStack0000000000000084 = param_4;
          fStack0000000000000088 = param_1;
          fStack0000000000000004 = param_1;
          fStack0000000000000008 = param_4;
          fStack0000000000000010 = -unaff_x21[3];
          fStack0000000000000014 = -unaff_x21[4];
          fStack0000000000000018 = -unaff_x21[5];
          fStack0000000000000000 = fStack000000000000008c;
          fVar14 = fVar12;
          fVar18 = fVar4;
          fVar19 = fVar5;
          fVar15 = (float)FUN_0746e16c(fVar3);
          fVar23 = *unaff_x21;
          fVar16 = unaff_x21[1];
          fVar21 = unaff_x21[2];
          fVar22 = unaff_x21[3];
          fVar20 = unaff_x21[4];
          fVar17 = unaff_x21[5];
          if (*(char *)(unaff_x20 + 0x3dc) == '\0') {
            FUN_03d2d2b0();
            *(undefined1 *)(unaff_x20 + 0x3dc) = 1;
          }
          fVar20 = fVar19 * fVar17 + fVar15 * fVar22 + fVar18 * fVar20;
          fVar17 = ABS(fVar20);
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          fVar17 = fVar17 * *(float *)(unaff_x26 + 0xa48);
          fVar22 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
          if (fVar17 <= fVar22) {
            fVar17 = fVar22;
          }
          if (fVar17 <= ABS(0.0 - fVar20)) {
            param_3 = (ulong)(uint)(fVar19 * fVar21);
            fVar14 = -(fVar19 * fVar21 + fVar23 * fVar15 + fVar18 * fVar16) - fVar14;
            param_2 = (ulong)(uint)fVar14;
            if (0.0 < fVar14 / fVar20) {
              unaff_d10 = FUN_08a157e0();
              unaff_d8 = (ulong)uVar13;
              unaff_d14 = (ulong)(uint)fVar12;
              unaff_d12 = (ulong)(uint)fVar4;
              unaff_d9 = (ulong)(uint)fVar3;
              unaff_d13 = (ulong)(uint)fVar5;
              goto code_r0x0746dff0;
            }
          }
          goto LAB_0746e128;
        }
      }
      else if ((uStack00000000000000b8 & 0xff) == 0) goto LAB_0746dc44;
      in_stack_00000178 = in_stack_00000128;
      in_stack_00000170 = in_stack_00000120;
      *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
      *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
      FUN_07411d10(&stack0x00000090);
      fVar5 = fStack0000000000000098;
      fVar4 = fStack0000000000000094;
      fVar3 = fStack0000000000000090;
      in_stack_000000c0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
      uStack00000000000000d4 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
      in_stack_000000c8 = fStack0000000000000098;
      uStack00000000000000d0 = uStack00000000000000a0;
      fVar19 = unaff_x21[3];
      fVar18 = unaff_x21[4];
      fVar14 = unaff_x21[5];
      if (*(char *)(unaff_x28 + 0x37d) == '\0') {
        FUN_03d2d2b0();
        *(undefined1 *)(unaff_x28 + 0x37d) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      fVar12 = SQRT(fVar14 * fVar14 + fVar19 * fVar19 + fVar18 * fVar18);
      if (fVar12 <= DAT_0191476c) {
        if (DAT_098362c7 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a0f88);
          DAT_098362c7 = '\x01';
        }
        pfVar11 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
        fVar19 = *pfVar11;
        fVar18 = pfVar11[1];
        fVar12 = pfVar11[2];
      }
      else {
        fVar19 = -fVar19 / fVar12;
        fVar18 = -fVar18 / fVar12;
        fVar12 = -fVar14 / fVar12;
      }
      fVar14 = *unaff_x21;
      fVar23 = unaff_x21[1];
      fVar15 = unaff_x21[2];
      fVar16 = unaff_x21[3];
      fVar21 = unaff_x21[4];
      fVar17 = unaff_x21[5];
      if (*(char *)(unaff_x20 + 0x3dc) == '\0') {
        FUN_03d2d2b0();
        *(undefined1 *)(unaff_x20 + 0x3dc) = 1;
      }
      fVar17 = fVar12 * fVar17 + fVar19 * fVar16 + fVar18 * fVar21;
      fVar16 = ABS(fVar17);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar16 = fVar16 * *(float *)(unaff_x26 + 0xa48);
      fVar21 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
      if (fVar16 <= fVar21) {
        fVar16 = fVar21;
      }
      if (ABS(0.0 - fVar17) < fVar16) goto LAB_0746e128;
      fVar14 = fVar12 * fVar15 + fVar19 * fVar14 + fVar18 * fVar23;
      param_3 = (ulong)(uint)fVar14;
      fVar14 = (fVar5 * fVar12 + fVar3 * fVar19 + fVar4 * fVar18) - fVar14;
      param_2 = (ulong)(uint)fVar14;
    } while (fVar14 / fVar17 <= 0.0);
    unaff_d10 = FUN_08a157e0();
    FUN_074115cc(&stack0x00000150,&stack0x000000c0,0);
  } while( true );
}


