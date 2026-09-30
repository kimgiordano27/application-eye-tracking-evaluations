/*
FUNCTION_NAME: OVRPlugin$$ShutdownMixedReality
ENTRY_POINT: 051b750c
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__ShutdownMixedReality(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  uint in_w8;
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
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  float fVar14;
  float unaff_s8;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s11;
  float fVar20;
  float unaff_s12;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  float fStack0000000000000084;
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
  
  fStack0000000000000088 = param_1;
  fStack0000000000000084 = param_2;
code_r0x051b750c:
  fStack000000000000008c = in_stack_000000e8;
  if (in_w8 == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum();
    *(undefined1 *)(unaff_x28 + 0x22e) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar9 = SQRT(unaff_s8 * unaff_s8 + unaff_s12 * unaff_s12 + unaff_s11 * unaff_s11);
  if (fVar9 <= DAT_013ddfb8) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar8 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
    fVar20 = *pfVar8;
    fVar21 = pfVar8[1];
    fVar9 = pfVar8[2];
  }
  else {
    fVar20 = -unaff_s12 / fVar9;
    fVar21 = -unaff_s11 / fVar9;
    fVar9 = -unaff_s8 / fVar9;
  }
  fVar14 = *unaff_x21;
  fVar26 = unaff_x21[1];
  fVar15 = unaff_x21[2];
  fVar17 = unaff_x21[3];
  fVar24 = unaff_x21[4];
  fVar19 = unaff_x21[5];
  if (*(char *)(unaff_x20 + 0x231) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum();
    *(undefined1 *)(unaff_x20 + 0x231) = 1;
  }
  fVar19 = fVar9 * fVar19 + fVar20 * fVar17 + fVar21 * fVar24;
  fVar17 = ABS(fVar19);
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar17 = fVar17 * *(float *)(unaff_x26 + 0x160);
  fVar24 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  if (fVar17 <= fVar24) {
    fVar17 = fVar24;
  }
  if (ABS(0.0 - fVar19) < fVar17) goto LAB_051b797c;
  fVar14 = fVar9 * fVar15 + fVar20 * fVar14 + fVar21 * fVar26;
  uVar13 = (ulong)(uint)fVar14;
  fVar14 = (fStack000000000000008c * fVar9 +
           fStack0000000000000084 * fVar20 + fStack0000000000000088 * fVar21) - fVar14;
  uVar6 = (ulong)(uint)fVar14;
  if (fVar14 / fVar19 <= 0.0) goto LAB_051b797c;
  uVar10 = FUN_05eb7ebc();
  FUN_05167a3c(&stack0x00000170,&stack0x000000e0,0);
  do {
    fVar20 = fStack0000000000000178;
    fVar9 = fStack0000000000000174;
    uVar3 = uStack0000000000000170;
    if (*(int *)(*(long *)PTR_DAT_06606500 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_051a9758(uVar10,uVar6,uVar13,uVar3,fVar9,fVar20,&stack0x00000100,0);
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
          uVar10 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
          *(undefined8 *)(unaff_x27 + 0x24) = uStack00000000000000b4;
          *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
          in_stack_00000120 = uVar10;
          if (in_stack_00000168 != '\0') {
            if (in_stack_00000138 == '\0') break;
LAB_051b74d4:
            FUN_051b88b0(&stack0x00000090,&stack0x00000140);
            in_stack_000000e0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
            uStack00000000000000f4 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
            in_w8 = (uint)*(byte *)(unaff_x28 + 0x22e);
            in_stack_000000e8 = fStack0000000000000098;
            uStack00000000000000f0 = uStack00000000000000a0;
            unaff_s12 = unaff_x21[3];
            unaff_s11 = unaff_x21[4];
            unaff_s8 = unaff_x21[5];
            fStack0000000000000088 = fStack0000000000000094;
            fStack0000000000000084 = fStack0000000000000090;
            goto code_r0x051b750c;
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
        fVar15 = fStack0000000000000098;
        fVar21 = fStack0000000000000094;
        fVar9 = fStack0000000000000090;
        uVar12 = (undefined4)uVar10;
        FUN_051b88b0(&stack0x00000090,&stack0x00000110);
        fVar17 = fStack0000000000000098;
        fVar14 = fStack0000000000000094;
        fVar20 = fStack0000000000000090;
        uVar11 = uStack00000000000000a4;
        fVar19 = (float)FUN_051b895c(&stack0x00000140);
        fStack0000000000000084 = fVar17;
        fStack0000000000000088 = fVar14;
        fStack000000000000008c = fVar20;
        fVar20 = fVar19;
        fVar14 = fVar21;
        fVar17 = fVar15;
        fVar24 = (float)FUN_051b79c0(fVar9);
        fVar22 = *unaff_x21;
        fVar26 = unaff_x21[1];
        fVar18 = unaff_x21[2];
        fVar25 = unaff_x21[3];
        fVar23 = unaff_x21[4];
        fVar16 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0x231) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x20 + 0x231) = 1;
        }
        fVar23 = fVar17 * fVar16 + fVar24 * fVar25 + fVar14 * fVar23;
        fVar16 = ABS(fVar23);
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        fVar16 = fVar16 * *(float *)(unaff_x26 + 0x160);
        fVar25 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar16 <= fVar25) {
          fVar16 = fVar25;
        }
      } while (ABS(0.0 - fVar23) < fVar16);
      uVar13 = (ulong)(uint)(fVar17 * fVar18);
      fVar20 = -(fVar17 * fVar18 + fVar22 * fVar24 + fVar14 * fVar26) - fVar20;
      uVar6 = (ulong)(uint)fVar20;
    } while (fVar20 / fVar23 <= 0.0);
    uVar10 = FUN_05eb7ebc();
    FUN_051b6c88(uVar10);
    fStack0000000000000174 = fVar21;
    uStack0000000000000170 = FUN_051b7d20(fVar9,fVar21,fVar15,fVar19,uVar11,uVar12);
    fStack0000000000000178 = fVar15;
    uStack000000000000017c = FUN_05ee9aa8(uVar3,0);
    in_stack_00000188 = uVar5;
    in_stack_00000180 = uVar4;
  } while( true );
}


