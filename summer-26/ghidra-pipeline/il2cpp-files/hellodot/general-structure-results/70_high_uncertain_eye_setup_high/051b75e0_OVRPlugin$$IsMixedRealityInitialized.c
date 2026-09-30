/*
FUNCTION_NAME: OVRPlugin$$IsMixedRealityInitialized
ENTRY_POINT: 051b75e0
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__IsMixedRealityInitialized(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  ulong uVar20;
  float in_s7;
  float fVar21;
  float unaff_s8;
  float fVar22;
  float unaff_s9;
  float fVar23;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar24;
  float unaff_s13;
  float fVar25;
  float unaff_s14;
  float fVar26;
  float unaff_s15;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000e0;
  float in_stack_000000e8;
  undefined4 uStack00000000000000f0;
  undefined8 uStack00000000000000f4;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  char in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  char in_stack_00000168;
  undefined4 uStack0000000000000170;
  float fStack0000000000000174;
  float fStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined4 in_stack_00000180;
  undefined4 in_stack_00000188;
  
code_r0x051b75e0:
  *(undefined1 *)(unaff_x20 + 0x231) = 1;
LAB_051b75e8:
  fVar10 = unaff_s13 * unaff_s10 + unaff_s11 * unaff_s9 + unaff_s12 * unaff_s14;
  fVar17 = ABS(fVar10);
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar17 = fVar17 * *(float *)(unaff_x26 + 0x160);
  fVar14 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  if (fVar17 <= fVar14) {
    fVar17 = fVar14;
  }
  if (ABS(0.0 - fVar10) < fVar17) goto LAB_051b797c;
  fVar17 = unaff_s13 * unaff_s8 + unaff_s11 * in_s7 + unaff_s12 * unaff_s15;
  uVar20 = (ulong)(uint)fVar17;
  fVar17 = (fStack000000000000008c * unaff_s13 +
           in_stack_00000080._4_4_ * unaff_s11 + fStack0000000000000088 * unaff_s12) - fVar17;
  uVar6 = (ulong)(uint)fVar17;
  if (fVar17 / fVar10 <= 0.0) goto LAB_051b797c;
  uVar13 = FUN_05eb7ebc();
  FUN_05167a3c(&stack0x00000170,&stack0x000000e0,0);
  do {
    fVar10 = fStack0000000000000178;
    fVar17 = fStack0000000000000174;
    uVar3 = uStack0000000000000170;
    if (*(int *)(*(long *)PTR_DAT_06606500 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_051a9758(uVar13,uVar6,uVar20,uVar3,fVar17,fVar10,&stack0x00000100,0);
    uVar6 = FUN_051b088c(uStack000000000000007c,uStack0000000000000078,in_stack_00000070._4_4_,
                         &stack0x00000100);
    if ((uVar6 & 1) != 0) {
      uStack0000000000000078 = uStack0000000000000104;
      uStack000000000000007c = uStack0000000000000100;
      in_stack_00000070._4_4_ = in_stack_00000108;
      FUN_05167a3c(in_stack_00000038,&stack0x00000170,0);
      in_stack_00000030._4_4_ = 1;
    }
LAB_051b797c:
    do {
      do {
        do {
          lVar7 = *(long *)(unaff_x22 + 0x20);
          if (lVar7 == 0) goto LAB_051b7984;
          if (*(int *)(lVar7 + 0x18) <= unaff_w23) {
            return in_stack_00000030._4_4_ & 1;
          }
          FUN_038c4204(&stack0x00000090,lVar7,unaff_w23,*unaff_x29);
          in_stack_00000148 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
          in_stack_00000140 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
          in_stack_00000158 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
          in_stack_00000150 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
          *(undefined8 *)(unaff_x27 + 0x54) = uStack00000000000000b4;
          *(ulong *)(unaff_x27 + 0x4c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
          lVar7 = *(long *)(unaff_x22 + 0x20);
          if (lVar7 == 0) goto LAB_051b7984;
          iVar1 = *(int *)(lVar7 + 0x18);
          unaff_w23 = unaff_w23 + 1;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = unaff_w23 / iVar1;
          }
          FUN_038c4204(&stack0x00000090,lVar7,unaff_w23 - iVar2 * iVar1,*unaff_x29);
          in_stack_00000118 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
          in_stack_00000110 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
          in_stack_00000128 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
          uVar13 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
          *(undefined8 *)(unaff_x27 + 0x24) = uStack00000000000000b4;
          *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
          in_stack_00000120 = uVar13;
          if (in_stack_00000168 != '\0') {
            if (in_stack_00000138 == '\0') break;
LAB_051b74d4:
            FUN_051b88b0(&stack0x00000090,&stack0x00000140);
            in_stack_000000e0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
            uStack00000000000000f4 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
            in_stack_000000e8 = fStack0000000000000098;
            uStack00000000000000f0 = uStack00000000000000a0;
            fVar14 = unaff_x21[3];
            fVar10 = unaff_x21[4];
            fVar17 = unaff_x21[5];
            in_stack_00000080._4_4_ = fStack0000000000000090;
            fStack0000000000000088 = fStack0000000000000094;
            fStack000000000000008c = fStack0000000000000098;
            if (*(char *)(unaff_x28 + 0x22e) == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum();
              *(undefined1 *)(unaff_x28 + 0x22e) = 1;
            }
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            fVar9 = SQRT(fVar17 * fVar17 + fVar14 * fVar14 + fVar10 * fVar10);
            if (fVar9 <= DAT_013ddfb8) {
              if (DAT_06a67148 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                DAT_06a67148 = '\x01';
              }
              pfVar8 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
              unaff_s11 = *pfVar8;
              unaff_s12 = pfVar8[1];
              unaff_s13 = pfVar8[2];
            }
            else {
              unaff_s11 = -fVar14 / fVar9;
              unaff_s12 = -fVar10 / fVar9;
              unaff_s13 = -fVar17 / fVar9;
            }
            in_s7 = *unaff_x21;
            unaff_s15 = unaff_x21[1];
            unaff_s8 = unaff_x21[2];
            unaff_s9 = unaff_x21[3];
            unaff_s14 = unaff_x21[4];
            unaff_s10 = unaff_x21[5];
            if (*(char *)(unaff_x20 + 0x231) != '\0') goto LAB_051b75e8;
            AkMIDIEventCallbackInfo__get_byProgramNum();
            goto code_r0x051b75e0;
          }
        } while (in_stack_00000138 != '\0');
        if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_051b7984:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) == 1) goto LAB_051b74d4;
        FUN_051b88b0(&stack0x00000090,&stack0x00000140);
        uVar5 = uStack00000000000000a8;
        uVar4 = uStack00000000000000a0;
        uVar3 = uStack000000000000009c;
        fVar14 = fStack0000000000000098;
        fVar10 = fStack0000000000000094;
        fVar17 = fStack0000000000000090;
        uVar18 = (undefined4)uVar13;
        FUN_051b88b0(&stack0x00000090,&stack0x00000110);
        uVar15 = uStack00000000000000a4;
        fVar11 = (float)FUN_051b895c(&stack0x00000140);
        fVar9 = fVar11;
        fVar16 = fVar10;
        fVar19 = fVar14;
        fVar12 = (float)FUN_051b79c0(fVar17);
        fVar24 = *unaff_x21;
        fVar21 = unaff_x21[1];
        fVar23 = unaff_x21[2];
        fVar26 = unaff_x21[3];
        fVar25 = unaff_x21[4];
        fVar22 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0x231) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x20 + 0x231) = 1;
        }
        fVar25 = fVar19 * fVar22 + fVar12 * fVar26 + fVar16 * fVar25;
        fVar22 = ABS(fVar25);
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        fVar22 = fVar22 * *(float *)(unaff_x26 + 0x160);
        fVar26 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar22 <= fVar26) {
          fVar22 = fVar26;
        }
      } while (ABS(0.0 - fVar25) < fVar22);
      uVar20 = (ulong)(uint)(fVar19 * fVar23);
      fVar9 = -(fVar19 * fVar23 + fVar24 * fVar12 + fVar16 * fVar21) - fVar9;
      uVar6 = (ulong)(uint)fVar9;
    } while (fVar9 / fVar25 <= 0.0);
    uVar13 = FUN_05eb7ebc();
    FUN_051b6c88(uVar13);
    fStack0000000000000174 = fVar10;
    uStack0000000000000170 = FUN_051b7d20(fVar17,fVar10,fVar14,fVar11,uVar15,uVar18);
    fStack0000000000000178 = fVar14;
    uStack000000000000017c = FUN_05ee9aa8(uVar3,0);
    in_stack_00000188 = uVar5;
    in_stack_00000180 = uVar4;
  } while( true );
}


