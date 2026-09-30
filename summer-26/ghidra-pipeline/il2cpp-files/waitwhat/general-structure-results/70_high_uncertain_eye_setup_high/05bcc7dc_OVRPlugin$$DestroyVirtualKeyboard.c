/*
FUNCTION_NAME: OVRPlugin$$DestroyVirtualKeyboard
ENTRY_POINT: 05bcc7dc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__DestroyVirtualKeyboard
               (ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
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
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s8;
  float fVar17;
  float fVar18;
  undefined4 unaff_s11;
  float fVar19;
  float unaff_s12;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  ulong in_stack_00000090;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  char in_stack_000000b8;
  ulong in_stack_000000c0;
  float fStack00000000000000c8;
  uint uStack00000000000000cc;
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
  
code_r0x05bcc7dc:
  uStack000000000000018c = FUN_069c4f80(param_1,param_5);
  uStack0000000000000194 = param_3;
  uStack0000000000000190 = param_2;
  in_stack_00000198 = param_4;
  do {
    fVar5 = fStack0000000000000188;
    fVar15 = fStack0000000000000184;
    uVar13 = uStack0000000000000180;
    if (*(int *)(*(long *)PTR_DAT_07113e80 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_05bcae24(unaff_s11,unaff_s12,unaff_s8,uVar13,fVar15,fVar5,&stack0x00000110,0);
    uVar7 = FUN_05bc5120(uStack000000000000007c,uStack0000000000000078,in_stack_00000070._4_4_,
                         &stack0x00000110);
    fVar15 = fStack00000000000000c8;
    iVar10 = unaff_w23;
    if ((uVar7 & 1) != 0) {
      uStack0000000000000078 = uStack0000000000000114;
      uStack000000000000007c = uStack0000000000000110;
      in_stack_00000070._4_4_ = in_stack_00000118;
      FUN_05b74f50(in_stack_00000038,&stack0x00000180,0);
      in_stack_00000030._4_4_ = 1;
      fVar15 = fStack00000000000000c8;
    }
LAB_05bcc878:
    do {
      fStack00000000000000c8 = fVar15;
      lVar8 = *(long *)(unaff_x22 + 0x20);
      unaff_w23 = iVar10 + 1;
      fVar15 = fStack00000000000000c8;
      if (lVar8 == 0) goto LAB_05bcc884;
      if (*(int *)(lVar8 + 0x18) <= unaff_w23) {
                    /* catch() { ... } // from try @ 05bcc4b0 with catch @ 05bcc888 */
                    /* catch() { ... } // from try @ 05bcc538 with catch @ 05bcc88c */
                    /* catch() { ... } // from try @ 05bcc4b4 with catch @ 05bcc890 */
                    /* catch() { ... } // from try @ 05bcc500 with catch @ 05bcc894 */
        return in_stack_00000030._4_4_ & 1;
      }
      FUN_041f12bc(&stack0x000000c0,lVar8,unaff_w23,*unaff_x29);
      in_stack_00000158 = CONCAT44(uStack00000000000000cc,fStack00000000000000c8);
      in_stack_00000168 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
      in_stack_00000160 = CONCAT44(uStack00000000000000d4,uStack00000000000000d0);
      lVar8 = *(long *)(unaff_x22 + 0x20);
      in_stack_00000150 = in_stack_000000c0;
      *(undefined8 *)(unaff_x27 + 0x54) = uStack00000000000000e4;
      *(ulong *)(unaff_x27 + 0x4c) = CONCAT44(uStack00000000000000e0,uStack00000000000000dc);
      fVar15 = fStack00000000000000c8;
      if (lVar8 == 0) goto LAB_05bcc884;
      iVar1 = *(int *)(lVar8 + 0x18);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (iVar10 + 2) / iVar1;
      }
      FUN_041f12bc(&stack0x00000090,lVar8,(iVar10 + 2) - iVar2 * iVar1,*unaff_x29);
      fVar15 = fStack00000000000000c8;
      in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
      in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
      in_stack_00000140 = in_stack_000000b0;
      in_stack_00000120 = in_stack_00000090;
      fStack00000000000000c8 = (float)in_stack_00000158;
      iVar10 = unaff_w23;
      if (in_stack_00000178 == '\0') {
        if (in_stack_000000b8 != '\0') goto LAB_05bcc878;
LAB_05bcc394:
        if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_05bcc884:
          fStack00000000000000c8 = fVar15;
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) != 1) {
          in_stack_00000090 = in_stack_00000150;
          uStack00000000000000a4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x44);
          uStack00000000000000a8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x44) >> 0x20);
          uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x27 + 0x3c);
          uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x3c) >> 0x20);
          fStack0000000000000098 = fStack00000000000000c8;
          fStack00000000000000c8 = fVar15;
          FUN_05b756a8(&stack0x000000c0);
          param_4 = uStack00000000000000d8;
          param_3 = uStack00000000000000d4;
          param_2 = uStack00000000000000d0;
          uVar3 = uStack00000000000000cc;
          fVar6 = fStack00000000000000c8;
          uVar7 = in_stack_000000c0;
          fVar5 = in_stack_000000c0._4_4_;
          fStack0000000000000098 = (float)in_stack_00000128;
          in_stack_00000090 = in_stack_00000120;
          uStack00000000000000a4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x14);
          uStack00000000000000a8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x14) >> 0x20);
          uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x27 + 0xc);
          uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0xc) >> 0x20);
          FUN_05b756a8(&stack0x000000c0);
          uVar12 = uStack00000000000000cc;
          uVar13 = uStack00000000000000d0;
          fVar11 = (float)FUN_05bcbb48(&stack0x00000150);
          fVar14 = fVar11;
          fVar19 = fVar5;
          fVar20 = fVar6;
          fVar18 = (float)FUN_05bcc8c0(uVar7 & 0xffffffff);
          fVar16 = *unaff_x21;
          fVar23 = unaff_x21[1];
          fVar17 = unaff_x21[2];
          fVar15 = unaff_x21[3];
          fVar22 = unaff_x21[4];
          fVar21 = unaff_x21[5];
          if (*(char *)(unaff_x20 + 0xc44) == '\0') {
            FUN_03188a78();
            *(undefined1 *)(unaff_x20 + 0xc44) = 1;
          }
          fVar22 = fVar20 * fVar21 + fVar18 * fVar15 + fVar19 * fVar22;
          fVar21 = ABS(fVar22);
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          fVar21 = fVar21 * *(float *)(unaff_x26 + 0xb94);
          fVar15 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
          if (fVar21 <= fVar15) {
            fVar21 = fVar15;
          }
          fVar15 = fStack00000000000000c8;
          if (fVar21 <= ABS(0.0 - fVar22)) {
            unaff_s8 = fVar20 * fVar17;
            unaff_s12 = -(unaff_s8 + fVar16 * fVar18 + fVar19 * fVar23) - fVar14;
            if (0.0 < unaff_s12 / fVar22) {
              unaff_s11 = FUN_06993e50();
              FUN_05bcbb68(unaff_s11);
              uStack0000000000000180 =
                   FUN_05bcccac(uVar7 & 0xffffffff,fVar5,fVar6,fVar11,uVar12,uVar13);
              fStack0000000000000188 = fVar6;
              fStack0000000000000184 = fVar5;
              param_5 = 0;
              param_1 = (ulong)uVar3;
              goto code_r0x05bcc7dc;
            }
          }
          goto LAB_05bcc878;
        }
      }
      else if (in_stack_000000b8 == '\0') goto LAB_05bcc394;
      in_stack_000000c0 = in_stack_00000150;
      uStack00000000000000d4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x44);
      uStack00000000000000d8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x44) >> 0x20);
      uStack00000000000000cc = (uint)*(undefined8 *)(unaff_x27 + 0x3c);
      uStack00000000000000d0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x3c) >> 0x20);
      FUN_05b756a8(&stack0x00000090);
      fVar5 = fStack0000000000000098;
      fVar15 = unaff_x21[3];
      fVar20 = unaff_x21[4];
      uStack0000000000000104 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
      fVar19 = unaff_x21[5];
      fStack00000000000000f8 = fStack0000000000000098;
      _fStack00000000000000f0 = in_stack_00000090;
      uVar4 = _fStack00000000000000f0;
      fStack00000000000000f0 = (float)in_stack_00000090;
      fVar6 = fStack00000000000000f0;
      fStack00000000000000f4 = (float)(in_stack_00000090 >> 0x20);
      fVar14 = fStack00000000000000f4;
      uStack00000000000000fc = uStack000000000000009c;
      uStack0000000000000100 = uStack00000000000000a0;
      _fStack00000000000000f0 = uVar4;
      if (*(char *)(unaff_x28 + 0xbbf) == '\0') {
        FUN_03188a78();
        *(undefined1 *)(unaff_x28 + 0xbbf) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar11 = SQRT(fVar19 * fVar19 + fVar15 * fVar15 + fVar20 * fVar20);
      if (fVar11 <= DAT_012e3cb4) {
        if (DAT_075457d6 == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          DAT_075457d6 = '\x01';
        }
        pfVar9 = *(float **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
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
      if (*(char *)(unaff_x20 + 0xc44) == '\0') {
        FUN_03188a78();
        *(undefined1 *)(unaff_x20 + 0xc44) = 1;
      }
      fVar21 = fVar11 * fVar15 + fVar18 * fVar17 + fVar20 * fVar21;
      fVar17 = ABS(fVar21);
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      fVar17 = fVar17 * *(float *)(unaff_x26 + 0xb94);
      fVar15 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
      if (fVar17 <= fVar15) {
        fVar17 = fVar15;
      }
      fVar15 = fStack00000000000000c8;
      if (ABS(0.0 - fVar21) < fVar17) goto LAB_05bcc878;
      unaff_s8 = fVar11 * fVar19 + fVar18 * fVar22 + fVar20 * fVar16;
      unaff_s12 = (fVar5 * fVar11 + fVar6 * fVar18 + fVar14 * fVar20) - unaff_s8;
    } while (unaff_s12 / fVar21 <= 0.0);
    unaff_s11 = FUN_06993e50();
    FUN_05b74f50(&stack0x00000180,&stack0x000000f0,0);
  } while( true );
}


