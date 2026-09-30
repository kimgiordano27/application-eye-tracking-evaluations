/*
FUNCTION_NAME: OVRPlugin$$GetControllerState
ENTRY_POINT: 0531ad5c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetControllerState
               (float param_1,float param_2,float param_3,float param_4,float param_5,
               undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  long unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar9;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 unaff_s8;
  float unaff_s9;
  float fVar15;
  float fVar16;
  float unaff_s10;
  float fVar17;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined8 in_stack_00000080;
  float in_stack_00000088;
  float fStack000000000000008c;
  undefined8 in_stack_00000090;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  char in_stack_000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined8 uStack00000000000000e4;
  undefined4 uStack00000000000000ec;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined8 uStack0000000000000104;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  char in_stack_00000178;
  undefined4 uStack0000000000000180;
  float fStack0000000000000184;
  float fStack0000000000000188;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined4 in_stack_00000198;
  
code_r0x0531ad5c:
  fStack0000000000000010 = -param_1;
  fStack0000000000000014 = -param_2;
  fStack0000000000000000 = unaff_s11;
  fStack0000000000000004 = unaff_s12;
  fStack0000000000000008 = unaff_s13;
  fStack0000000000000018 = param_4;
  uStack0000000000000040 = param_6;
  fStack0000000000000044 = param_5;
  fStack0000000000000048 = unaff_s10;
  fStack000000000000005c = unaff_s9;
  fStack000000000000008c = unaff_s11;
  fVar10 = (float)FUN_0531aff4(unaff_s8);
  fVar12 = *unaff_x21;
  fVar21 = unaff_x21[1];
  fVar13 = unaff_x21[2];
  fVar15 = unaff_x21[3];
  fVar18 = unaff_x21[4];
  fVar17 = unaff_x21[5];
  if (*(char *)(unaff_x20 + 0x2c0) == '\0') {
    FUN_02f08768();
    *(undefined1 *)(unaff_x20 + 0x2c0) = 1;
  }
  fVar17 = param_3 * fVar17 + fVar10 * fVar15 + unaff_s9 * fVar18;
  fVar15 = ABS(fVar17);
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar15 = fVar15 * *(float *)(unaff_x26 + 0x568);
  fVar18 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  if (fVar15 <= fVar18) {
    fVar15 = fVar18;
  }
  fVar18 = fStack00000000000000c8;
  iVar9 = unaff_w23;
  if (ABS(0.0 - fVar17) < fVar15) goto LAB_0531afac;
  param_3 = param_3 * fVar13;
  param_5 = -(param_3 + fVar12 * fVar10 + unaff_s9 * fVar21) - param_5;
  if (param_5 / fVar17 <= 0.0) goto LAB_0531afac;
  uVar11 = FUN_060ae8a4();
  fVar13 = fStack000000000000005c;
  fVar12 = fStack0000000000000048;
  fVar10 = fStack0000000000000044;
  uVar4 = uStack0000000000000040;
  fStack0000000000000014 = in_stack_00000088;
  fStack0000000000000018 = in_stack_00000080._4_4_;
  fStack0000000000000000 = fStack0000000000000044;
  fStack0000000000000010 = fStack000000000000008c;
  fStack0000000000000004 = (float)uStack0000000000000040;
  fStack0000000000000008 = (float)param_7;
  FUN_0531a29c(uVar11);
  uVar5 = uStack00000000000000ec;
  fStack0000000000000010 = (float)uStack00000000000000ec;
  fStack0000000000000004 = in_stack_00000088;
  fStack0000000000000008 = in_stack_00000080._4_4_;
  fStack0000000000000000 = fStack000000000000008c;
  uStack0000000000000180 = FUN_0531b3e0(unaff_s8,fVar13,fVar12,fVar10,uVar4,param_7);
  fStack0000000000000188 = fVar12;
  fStack0000000000000184 = fVar13;
  fStack0000000000000000 = (float)uVar5;
  uVar4 = uStack000000000000006c;
  uVar5 = uStack0000000000000068;
  uStack000000000000018c = FUN_060df37c(uStack0000000000000070,0);
  uStack0000000000000194 = uVar5;
  uStack0000000000000190 = uVar4;
  in_stack_00000198 = in_stack_00000060._4_4_;
  do {
    fVar12 = fStack0000000000000188;
    fVar10 = fStack0000000000000184;
    uVar4 = uStack0000000000000180;
    if (*(int *)(*(long *)System_Xml_ReadState___TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05319588(uVar11,param_5,param_3,uVar4,fVar10,fVar12,&stack0x00000110,0);
    uVar6 = FUN_05313f18(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074,
                         &stack0x00000110);
    fVar18 = fStack00000000000000c8;
    iVar9 = unaff_w23;
    if ((uVar6 & 1) != 0) {
      uStack0000000000000078 = uStack0000000000000114;
      uStack000000000000007c = uStack0000000000000110;
      uStack0000000000000074 = in_stack_00000118;
      FUN_052c2604(in_stack_00000038,&stack0x00000180,0);
      in_stack_00000030._4_4_ = 1;
      fVar18 = fStack00000000000000c8;
    }
LAB_0531afac:
    do {
      do {
        fStack00000000000000c8 = fVar18;
        lVar7 = *(long *)(unaff_x22 + 0x20);
        unaff_w23 = iVar9 + 1;
        fVar18 = fStack00000000000000c8;
        if (lVar7 == 0) goto LAB_0531afb8;
        if (*(int *)(lVar7 + 0x18) <= unaff_w23) {
          return in_stack_00000030._4_4_ & 1;
        }
        FUN_039ef234(&stack0x000000c0,lVar7,unaff_w23,*unaff_x29);
        in_stack_00000158 = CONCAT44(uStack00000000000000cc,fStack00000000000000c8);
        in_stack_00000168 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
        in_stack_00000160 = CONCAT44(uStack00000000000000d4,uStack00000000000000d0);
        lVar7 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000150 = _fStack00000000000000c0;
        *(undefined8 *)(unaff_x27 + 0x54) = uStack00000000000000e4;
        *(ulong *)(unaff_x27 + 0x4c) = CONCAT44(uStack00000000000000e0,uStack00000000000000dc);
        fVar18 = fStack00000000000000c8;
        if (lVar7 == 0) goto LAB_0531afb8;
        iVar1 = *(int *)(lVar7 + 0x18);
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = (iVar9 + 2) / iVar1;
        }
        FUN_039ef234(&stack0x00000090,lVar7,(iVar9 + 2) - iVar2 * iVar1,*unaff_x29);
        fVar18 = fStack00000000000000c8;
        in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
        in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
        in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
        in_stack_00000140 = in_stack_000000b0;
        in_stack_00000120 = in_stack_00000090;
        fStack00000000000000c8 = (float)in_stack_00000158;
        iVar9 = unaff_w23;
        if (in_stack_00000178 == '\0') {
          if (in_stack_000000b8 != '\0') goto LAB_0531afac;
LAB_0531aac8:
          if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_0531afb8:
            fStack00000000000000c8 = fVar18;
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) != 1) {
            in_stack_00000090 = in_stack_00000150;
            uStack00000000000000a4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x44);
            uStack00000000000000a8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x44) >> 0x20);
            uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x27 + 0x3c);
            uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x3c) >> 0x20);
            fStack0000000000000098 = fStack00000000000000c8;
            fStack00000000000000c8 = fVar18;
            FUN_052c2dcc(&stack0x000000c0);
            unaff_s10 = fStack00000000000000c8;
            unaff_s8 = fStack00000000000000c0;
            unaff_s9 = fStack00000000000000c4;
            uStack000000000000006c = uStack00000000000000d0;
            uStack0000000000000070 = uStack00000000000000cc;
            fStack0000000000000098 = (float)in_stack_00000128;
            in_stack_00000090 = in_stack_00000120;
            in_stack_00000060._4_4_ = uStack00000000000000d8;
            uStack0000000000000068 = uStack00000000000000d4;
            uStack00000000000000a4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x14);
            uStack00000000000000a8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x14) >> 0x20);
            uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x27 + 0xc);
            uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0xc) >> 0x20);
            FUN_052c2dcc(&stack0x000000c0);
            unaff_s13 = fStack00000000000000c8;
            unaff_s11 = fStack00000000000000c0;
            unaff_s12 = fStack00000000000000c4;
            param_6 = uStack00000000000000cc;
            param_7 = uStack00000000000000d0;
            param_5 = (float)FUN_0531a27c(&stack0x00000150);
            param_1 = unaff_x21[3];
            param_2 = unaff_x21[4];
            param_4 = -unaff_x21[5];
            in_stack_00000080._4_4_ = unaff_s13;
            in_stack_00000088 = unaff_s12;
            param_3 = unaff_s10;
            goto code_r0x0531ad5c;
          }
        }
        else if (in_stack_000000b8 == '\0') goto LAB_0531aac8;
        _fStack00000000000000c0 = in_stack_00000150;
        uStack00000000000000d4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x44);
        uStack00000000000000d8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x44) >> 0x20);
        uStack00000000000000cc = (undefined4)*(undefined8 *)(unaff_x27 + 0x3c);
        uStack00000000000000d0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x3c) >> 0x20);
        FUN_052c2dcc(&stack0x00000090);
        fVar13 = unaff_x21[3];
        fVar17 = unaff_x21[4];
        uStack0000000000000104 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
        fVar15 = unaff_x21[5];
        fStack00000000000000f8 = fStack0000000000000098;
        _fStack00000000000000f0 = in_stack_00000090;
        uVar3 = _fStack00000000000000f0;
        fStack00000000000000f0 = (float)in_stack_00000090;
        fVar10 = fStack00000000000000f0;
        fStack00000000000000f4 = (float)((ulong)in_stack_00000090 >> 0x20);
        fVar12 = fStack00000000000000f4;
        uStack00000000000000fc = uStack000000000000009c;
        uStack0000000000000100 = uStack00000000000000a0;
        fStack000000000000008c = fStack0000000000000098;
        _fStack00000000000000f0 = uVar3;
        if (*(char *)(unaff_x28 + 0x2bf) == '\0') {
          FUN_02f08768();
          *(undefined1 *)(unaff_x28 + 0x2bf) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar21 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar17 * fVar17);
        if (fVar21 <= DAT_011b06e4) {
          if (DAT_06bb42c1 == '\0') {
            FUN_02f08768(PTR_DAT_067c8f78);
            DAT_06bb42c1 = '\x01';
          }
          pfVar8 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
          fVar13 = *pfVar8;
          fVar17 = pfVar8[1];
          fVar21 = pfVar8[2];
        }
        else {
          fVar13 = -fVar13 / fVar21;
          fVar17 = -fVar17 / fVar21;
          fVar21 = -fVar15 / fVar21;
        }
        fVar20 = *unaff_x21;
        fVar14 = unaff_x21[1];
        fVar15 = unaff_x21[2];
        fVar16 = unaff_x21[3];
        fVar19 = unaff_x21[4];
        fVar18 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0x2c0) == '\0') {
          FUN_02f08768();
          *(undefined1 *)(unaff_x20 + 0x2c0) = 1;
        }
        fVar19 = fVar21 * fVar18 + fVar13 * fVar16 + fVar17 * fVar19;
        fVar16 = ABS(fVar19);
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        fVar16 = fVar16 * *(float *)(unaff_x26 + 0x568);
        fVar18 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar16 <= fVar18) {
          fVar16 = fVar18;
        }
        fVar18 = fStack00000000000000c8;
      } while (ABS(0.0 - fVar19) < fVar16);
      param_3 = fVar21 * fVar15 + fVar13 * fVar20 + fVar17 * fVar14;
      param_5 = (fStack000000000000008c * fVar21 + fVar10 * fVar13 + fVar12 * fVar17) - param_3;
    } while (param_5 / fVar19 <= 0.0);
    uVar11 = FUN_060ae8a4();
    FUN_052c2604(&stack0x00000180,&stack0x000000f0,0);
  } while( true );
}


