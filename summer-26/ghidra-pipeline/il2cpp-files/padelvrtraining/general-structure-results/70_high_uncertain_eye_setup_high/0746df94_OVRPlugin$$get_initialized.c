/*
FUNCTION_NAME: OVRPlugin$$get_initialized
ENTRY_POINT: 0746df94
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_initialized
               (float param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5,
               undefined1 param_6 [16],undefined1 param_7 [16],float param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
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
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s9;
  float fVar16;
  ulong unaff_d10;
  float fVar17;
  float unaff_s11;
  float fVar18;
  float unaff_s12;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong unaff_d15;
  ulong in_d16;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  uint in_stack_000000b8;
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
  undefined4 uStack0000000000000104;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  char in_stack_00000148;
  undefined4 uStack0000000000000150;
  float fStack0000000000000154;
  float fStack0000000000000158;
  undefined4 uStack000000000000015c;
  undefined4 uStack0000000000000160;
  undefined4 uStack0000000000000164;
  undefined4 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  
code_r0x0746df94:
  if ((bool)in_ZR || in_NG != in_OV) {
    param_3 = param_2;
  }
  if (ABS(param_5 - param_1) < param_3) goto LAB_0746e128;
  fVar11 = (float)unaff_d10 * unaff_s9;
  uVar12 = (ulong)(uint)fVar11;
  fVar11 = -(fVar11 + unaff_s12 * unaff_s11 + (float)unaff_d15 * param_8) - (float)in_d16;
  uVar6 = (ulong)(uint)fVar11;
  if (fVar11 / param_1 <= 0.0) goto LAB_0746e128;
  uVar10 = FUN_08a157e0();
  FUN_0746d40c(uVar10);
  fVar11 = fStack000000000000004c;
  fVar19 = fStack0000000000000048;
  uStack0000000000000150 =
       FUN_0746e4cc(in_stack_00000050,fStack000000000000004c,fStack0000000000000048,
                    uStack0000000000000044,uStack0000000000000040,in_stack_00000080);
  fStack0000000000000158 = fVar19;
  fStack0000000000000154 = fVar11;
  uVar3 = uStack000000000000006c;
  uVar4 = uStack0000000000000068;
  uVar5 = in_stack_00000060._4_4_;
  uStack000000000000015c = FUN_08a44560(uStack0000000000000070,0);
  in_stack_00000168 = uVar5;
  uStack0000000000000164 = uVar4;
  uStack0000000000000160 = uVar3;
  do {
    fVar19 = fStack0000000000000158;
    fVar11 = fStack0000000000000154;
    uVar3 = uStack0000000000000150;
    if (*(int *)(*(long *)PTR_DAT_09220a10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_0746c6c8(uVar10,uVar6,uVar12,uVar3,fVar11,fVar19,&stack0x000000e0,0);
    uVar6 = FUN_07466a2c(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074,
                         &stack0x000000e0);
    if ((uVar6 & 1) != 0) {
      uStack0000000000000078 = uStack00000000000000e4;
      uStack000000000000007c = uStack00000000000000e0;
      uStack0000000000000074 = in_stack_000000e8;
      FUN_074115cc(in_stack_00000038,&stack0x00000150,0);
      in_stack_00000030._4_4_ = 1;
    }
LAB_0746e128:
    do {
      do {
        lVar7 = *(long *)(unaff_x22 + 0x20);
        if (lVar7 == 0) goto LAB_0746e130;
        if (*(int *)(lVar7 + 0x18) <= unaff_w23) {
          return in_stack_00000030._4_4_ & 1;
        }
        FUN_0592ed18(&stack0x00000090,lVar7,unaff_w23,*unaff_x29);
        in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
        in_stack_00000120 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
        in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
        in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
        *(ulong *)(unaff_x27 + 0x24) = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
        *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
        lVar7 = *(long *)(unaff_x22 + 0x20);
        if (lVar7 == 0) goto LAB_0746e130;
        iVar1 = *(int *)(lVar7 + 0x18);
        unaff_w23 = unaff_w23 + 1;
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = unaff_w23 / iVar1;
        }
        FUN_0592ed18(&stack0x00000090,lVar7,unaff_w23 - iVar2 * iVar1,*unaff_x29);
        in_stack_000000f0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
        in_stack_00000110 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
        in_stack_000000f8 = fStack0000000000000098;
        uStack00000000000000fc = uStack000000000000009c;
        in_stack_00000108 = uStack00000000000000a8;
        in_stack_00000100 = uStack00000000000000a0;
        uStack0000000000000104 = uStack00000000000000a4;
        if (in_stack_00000148 == '\0') {
          if ((in_stack_000000b8 & 0xff) != 0) goto LAB_0746e128;
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
            fStack0000000000000048 = fStack0000000000000098;
            fStack000000000000004c = fStack0000000000000094;
            in_stack_00000050 = fStack0000000000000090;
            unaff_d10 = (ulong)(uint)fStack0000000000000098;
            unaff_d15 = (ulong)(uint)fStack0000000000000094;
            uStack000000000000006c = uStack00000000000000a0;
            uStack0000000000000070 = uStack000000000000009c;
            in_stack_00000060._4_4_ = uStack00000000000000a8;
            uStack0000000000000068 = uStack00000000000000a4;
            in_stack_00000178 = CONCAT44(uStack00000000000000fc,in_stack_000000f8);
            in_stack_00000170 = in_stack_000000f0;
            *(ulong *)(unaff_x27 + 100) = CONCAT44(in_stack_00000108,uStack0000000000000104);
            *(ulong *)(unaff_x27 + 0x5c) = CONCAT44(in_stack_00000100,uStack00000000000000fc);
            in_stack_00000080 = uStack00000000000000a8;
            FUN_07411d10(&stack0x00000090);
            uStack0000000000000040 = uStack00000000000000a4;
            in_d16 = FUN_0746d3e8(&stack0x00000120);
            uStack0000000000000044 = (undefined4)in_d16;
            unaff_s11 = (float)FUN_0746e16c(in_stack_00000050);
            unaff_s12 = *unaff_x21;
            param_8 = unaff_x21[1];
            unaff_s9 = unaff_x21[2];
            fVar21 = unaff_x21[3];
            fVar19 = unaff_x21[4];
            fVar11 = unaff_x21[5];
            if (*(char *)(unaff_x20 + 0x3dc) == '\0') {
              FUN_03d2d2b0();
              in_d16 = in_d16 & 0xffffffff;
              *(undefined1 *)(unaff_x20 + 0x3dc) = 1;
            }
            param_1 = (float)unaff_d10 * fVar11 + unaff_s11 * fVar21 + (float)unaff_d15 * fVar19;
            param_3 = ABS(param_1);
            param_5 = 0.0;
            if (param_3 <= 0.0) {
              param_3 = 0.0;
            }
            param_3 = param_3 * *(float *)(unaff_x26 + 0xa48);
            param_2 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
            in_NG = '\0';
            in_ZR = false;
            in_OV = '\x01';
            if (!NAN(param_3) && !NAN(param_2)) {
              in_NG = param_3 < param_2;
              in_ZR = param_3 == param_2;
              in_OV = '\0';
            }
            goto code_r0x0746df94;
          }
        }
        else if ((in_stack_000000b8 & 0xff) == 0) goto LAB_0746dc44;
        in_stack_00000178 = in_stack_00000128;
        in_stack_00000170 = in_stack_00000120;
        *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
        *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
        FUN_07411d10(&stack0x00000090);
        fVar21 = fStack0000000000000098;
        fVar19 = fStack0000000000000094;
        fVar11 = fStack0000000000000090;
        in_stack_000000c0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
        uStack00000000000000d4 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
        in_stack_000000c8 = fStack0000000000000098;
        uStack00000000000000d0 = uStack00000000000000a0;
        fVar18 = unaff_x21[3];
        fVar17 = unaff_x21[4];
        fVar13 = unaff_x21[5];
        if (*(char *)(unaff_x28 + 0x37d) == '\0') {
          FUN_03d2d2b0();
          *(undefined1 *)(unaff_x28 + 0x37d) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        fVar9 = SQRT(fVar13 * fVar13 + fVar18 * fVar18 + fVar17 * fVar17);
        if (fVar9 <= DAT_0191476c) {
          if (DAT_098362c7 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091a0f88);
            DAT_098362c7 = '\x01';
          }
          pfVar8 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
          fVar18 = *pfVar8;
          fVar17 = pfVar8[1];
          fVar9 = pfVar8[2];
        }
        else {
          fVar18 = -fVar18 / fVar9;
          fVar17 = -fVar17 / fVar9;
          fVar9 = -fVar13 / fVar9;
        }
        fVar13 = *unaff_x21;
        fVar22 = unaff_x21[1];
        fVar14 = unaff_x21[2];
        fVar15 = unaff_x21[3];
        fVar20 = unaff_x21[4];
        fVar16 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0x3dc) == '\0') {
          FUN_03d2d2b0();
          *(undefined1 *)(unaff_x20 + 0x3dc) = 1;
        }
        fVar16 = fVar9 * fVar16 + fVar18 * fVar15 + fVar17 * fVar20;
        fVar15 = ABS(fVar16);
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        fVar15 = fVar15 * *(float *)(unaff_x26 + 0xa48);
        fVar20 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar15 <= fVar20) {
          fVar15 = fVar20;
        }
      } while (ABS(0.0 - fVar16) < fVar15);
      fVar13 = fVar9 * fVar14 + fVar18 * fVar13 + fVar17 * fVar22;
      uVar12 = (ulong)(uint)fVar13;
      fVar13 = (fVar21 * fVar9 + fVar11 * fVar18 + fVar19 * fVar17) - fVar13;
      uVar6 = (ulong)(uint)fVar13;
    } while (fVar13 / fVar16 <= 0.0);
    uVar10 = FUN_08a157e0();
    FUN_074115cc(&stack0x00000150,&stack0x000000c0,0);
  } while( true );
}


