/*
FUNCTION_NAME: OVRPlugin$$GetControllerState2
ENTRY_POINT: 0531ade0
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


uint OVRPlugin__GetControllerState2(float param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  long unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar10;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float in_s5;
  float in_s7;
  float fVar16;
  float unaff_s8;
  float fVar17;
  float unaff_s10;
  float fVar18;
  float unaff_s11;
  float fVar19;
  float unaff_s12;
  float fVar20;
  float unaff_s13;
  float fVar21;
  float unaff_s14;
  float fVar22;
  float unaff_s15;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  ulong in_stack_00000090;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  char in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined8 uStack00000000000000e4;
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
  ulong in_stack_00000150;
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
  
code_r0x0531ade0:
  fVar12 = unaff_s8 * unaff_s10 + param_1 + unaff_s12 * unaff_s13;
  fVar14 = ABS(fVar12);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar14 = fVar14 * *(float *)(unaff_x26 + 0x568);
  fVar15 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  if (fVar14 <= fVar15) {
    fVar14 = fVar15;
  }
  fVar15 = fStack00000000000000c8;
  iVar10 = unaff_w23;
  if (ABS(0.0 - fVar12) < fVar14) goto LAB_0531afac;
  in_s7 = unaff_s8 * in_s7;
  fVar14 = -(in_s7 + in_s5 * unaff_s11 + unaff_s12 * unaff_s15) - unaff_s14;
  if (fVar14 / fVar12 <= 0.0) goto LAB_0531afac;
  uVar13 = FUN_060ae8a4();
  FUN_0531a29c(uVar13);
  fVar12 = in_stack_00000058._4_4_;
  fVar15 = in_stack_00000048;
  uStack0000000000000180 =
       FUN_0531b3e0(uStack0000000000000060,in_stack_00000058._4_4_,in_stack_00000048,
                    fStack0000000000000044,uStack0000000000000040,in_stack_00000080);
  fStack0000000000000188 = fVar15;
  fStack0000000000000184 = fVar12;
  uVar5 = uStack000000000000006c;
  uVar6 = uStack0000000000000068;
  uStack000000000000018c = FUN_060df37c(uStack0000000000000070,0);
  uStack0000000000000194 = uVar6;
  uStack0000000000000190 = uVar5;
  in_stack_00000198 = uStack0000000000000064;
  do {
    fVar15 = fStack0000000000000188;
    fVar12 = fStack0000000000000184;
    uVar5 = uStack0000000000000180;
    if (*(int *)(*(long *)System_Xml_ReadState___TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05319588(uVar13,fVar14,in_s7,uVar5,fVar12,fVar15,&stack0x00000110,0);
    uVar7 = FUN_05313f18(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074,
                         &stack0x00000110);
    fVar15 = fStack00000000000000c8;
    iVar10 = unaff_w23;
    if ((uVar7 & 1) != 0) {
      uStack0000000000000078 = uStack0000000000000114;
      uStack000000000000007c = uStack0000000000000110;
      uStack0000000000000074 = in_stack_00000118;
      FUN_052c2604(in_stack_00000038,&stack0x00000180,0);
      in_stack_00000030._4_4_ = 1;
      fVar15 = fStack00000000000000c8;
    }
LAB_0531afac:
    do {
      do {
        fStack00000000000000c8 = fVar15;
        lVar8 = *(long *)(unaff_x22 + 0x20);
        unaff_w23 = iVar10 + 1;
        fVar15 = fStack00000000000000c8;
        if (lVar8 == 0) goto LAB_0531afb8;
        if (*(int *)(lVar8 + 0x18) <= unaff_w23) {
          return in_stack_00000030._4_4_ & 1;
        }
        FUN_039ef234(&stack0x000000c0,lVar8,unaff_w23,*unaff_x29);
        in_stack_00000158 = CONCAT44(uStack00000000000000cc,fStack00000000000000c8);
        in_stack_00000168 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
        in_stack_00000160 = CONCAT44(uStack00000000000000d4,uStack00000000000000d0);
        lVar8 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000150 = _uStack00000000000000c0;
        *(undefined8 *)(unaff_x27 + 0x54) = uStack00000000000000e4;
        *(ulong *)(unaff_x27 + 0x4c) = CONCAT44(uStack00000000000000e0,uStack00000000000000dc);
        fVar15 = fStack00000000000000c8;
        if (lVar8 == 0) goto LAB_0531afb8;
        iVar1 = *(int *)(lVar8 + 0x18);
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = (iVar10 + 2) / iVar1;
        }
        FUN_039ef234(&stack0x00000090,lVar8,(iVar10 + 2) - iVar2 * iVar1,*unaff_x29);
        fVar15 = fStack00000000000000c8;
        in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
        in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
        in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
        in_stack_00000140 = in_stack_000000b0;
        in_stack_00000120 = in_stack_00000090;
        fStack00000000000000c8 = (float)in_stack_00000158;
        iVar10 = unaff_w23;
        if (in_stack_00000178 == '\0') {
          if (in_stack_000000b8 != '\0') goto LAB_0531afac;
LAB_0531aac8:
          if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_0531afb8:
            fStack00000000000000c8 = fVar15;
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
            fStack00000000000000c8 = fVar15;
            FUN_052c2dcc(&stack0x000000c0);
            unaff_s8 = fStack00000000000000c8;
            uVar7 = _uStack00000000000000c0;
            uStack0000000000000060 = uStack00000000000000c0;
            unaff_s12 = fStack00000000000000c4;
            uStack000000000000006c = uStack00000000000000d0;
            uStack0000000000000070 = uStack00000000000000cc;
            fStack0000000000000098 = (float)in_stack_00000128;
            in_stack_00000090 = in_stack_00000120;
            uStack0000000000000064 = uStack00000000000000d8;
            uStack0000000000000068 = uStack00000000000000d4;
            uStack00000000000000a4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x14);
            uStack00000000000000a8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x14) >> 0x20);
            uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x27 + 0xc);
            uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0xc) >> 0x20);
            FUN_052c2dcc(&stack0x000000c0);
            uStack0000000000000040 = uStack00000000000000cc;
            in_stack_00000080 = uStack00000000000000d0;
            fStack0000000000000044 = (float)FUN_0531a27c(&stack0x00000150);
            in_stack_00000048 = unaff_s8;
            in_stack_00000058._4_4_ = unaff_s12;
            unaff_s14 = fStack0000000000000044;
            unaff_s11 = (float)FUN_0531aff4(uVar7 & 0xffffffff);
            in_s5 = *unaff_x21;
            unaff_s15 = unaff_x21[1];
            in_s7 = unaff_x21[2];
            param_1 = unaff_x21[3];
            unaff_s13 = unaff_x21[4];
            unaff_s10 = unaff_x21[5];
            if (*(char *)(unaff_x20 + 0x2c0) == '\0') {
              FUN_02f08768();
              *(undefined1 *)(unaff_x20 + 0x2c0) = 1;
            }
            param_1 = unaff_s11 * param_1;
            goto code_r0x0531ade0;
          }
        }
        else if (in_stack_000000b8 == '\0') goto LAB_0531aac8;
        _uStack00000000000000c0 = in_stack_00000150;
        uStack00000000000000d4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x44);
        uStack00000000000000d8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x44) >> 0x20);
        uStack00000000000000cc = (undefined4)*(undefined8 *)(unaff_x27 + 0x3c);
        uStack00000000000000d0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x3c) >> 0x20);
        FUN_052c2dcc(&stack0x00000090);
        fVar14 = fStack0000000000000098;
        fVar15 = unaff_x21[3];
        fVar20 = unaff_x21[4];
        uStack0000000000000104 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
        fVar19 = unaff_x21[5];
        fStack00000000000000f8 = fStack0000000000000098;
        _fStack00000000000000f0 = in_stack_00000090;
        uVar3 = _fStack00000000000000f0;
        fStack00000000000000f0 = (float)in_stack_00000090;
        fVar12 = fStack00000000000000f0;
        fStack00000000000000f4 = (float)(in_stack_00000090 >> 0x20);
        fVar4 = fStack00000000000000f4;
        uStack00000000000000fc = uStack000000000000009c;
        uStack0000000000000100 = uStack00000000000000a0;
        _fStack00000000000000f0 = uVar3;
        if (*(char *)(unaff_x28 + 0x2bf) == '\0') {
          FUN_02f08768();
          *(undefined1 *)(unaff_x28 + 0x2bf) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar11 = SQRT(fVar19 * fVar19 + fVar15 * fVar15 + fVar20 * fVar20);
        if (fVar11 <= DAT_011b06e4) {
          if (DAT_06bb42c1 == '\0') {
            FUN_02f08768(PTR_DAT_067c8f78);
            DAT_06bb42c1 = '\x01';
          }
          pfVar9 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
          fVar18 = *pfVar9;
          fVar20 = pfVar9[1];
          fVar11 = pfVar9[2];
        }
        else {
          fVar18 = -fVar15 / fVar11;
          fVar20 = -fVar20 / fVar11;
          fVar11 = -fVar19 / fVar11;
        }
        fVar22 = *unaff_x21;
        fVar16 = unaff_x21[1];
        fVar19 = unaff_x21[2];
        fVar17 = unaff_x21[3];
        fVar21 = unaff_x21[4];
        fVar15 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0x2c0) == '\0') {
          FUN_02f08768();
          *(undefined1 *)(unaff_x20 + 0x2c0) = 1;
        }
        fVar21 = fVar11 * fVar15 + fVar18 * fVar17 + fVar20 * fVar21;
        fVar17 = ABS(fVar21);
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        fVar17 = fVar17 * *(float *)(unaff_x26 + 0x568);
        fVar15 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar17 <= fVar15) {
          fVar17 = fVar15;
        }
        fVar15 = fStack00000000000000c8;
      } while (ABS(0.0 - fVar21) < fVar17);
      in_s7 = fVar11 * fVar19 + fVar18 * fVar22 + fVar20 * fVar16;
      fVar14 = (fVar14 * fVar11 + fVar12 * fVar18 + fVar4 * fVar20) - in_s7;
    } while (fVar14 / fVar21 <= 0.0);
    uVar13 = FUN_060ae8a4();
    FUN_052c2604(&stack0x00000180,&stack0x000000f0,0);
  } while( true );
}


