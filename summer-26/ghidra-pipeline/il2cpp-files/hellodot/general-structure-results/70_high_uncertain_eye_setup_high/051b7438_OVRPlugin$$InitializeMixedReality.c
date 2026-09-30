/*
FUNCTION_NAME: OVRPlugin$$InitializeMixedReality
ENTRY_POINT: 051b7438
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__InitializeMixedReality(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  long unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long *plVar12;
  long unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x29;
  float fVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
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
  
  uStack0000000000000074 = *(undefined4 *)(param_1 + 8);
  plVar12 = *(long **)(unaff_x25 + 0xd28);
  do {
    if (*(int *)(param_2 + 0x18) <= unaff_w23) {
      return in_stack_00000030._4_4_ & 1;
    }
    FUN_038c4204(&stack0x00000090,param_2,unaff_w23,*unaff_x29);
    in_stack_00000148 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
    in_stack_00000140 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
    in_stack_00000158 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    in_stack_00000150 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
    *(undefined8 *)(unaff_x27 + 0x54) = uStack00000000000000b4;
    *(ulong *)(unaff_x27 + 0x4c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
    lVar9 = *(long *)(unaff_x22 + 0x20);
    if (lVar9 == 0) break;
    iVar1 = *(int *)(lVar9 + 0x18);
    unaff_w23 = unaff_w23 + 1;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = unaff_w23 / iVar1;
    }
    FUN_038c4204(&stack0x00000090,lVar9,unaff_w23 - iVar2 * iVar1,*unaff_x29);
    in_stack_00000118 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
    in_stack_00000110 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
    in_stack_00000128 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    uVar14 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
    *(undefined8 *)(unaff_x27 + 0x24) = uStack00000000000000b4;
    *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
    in_stack_00000120 = uVar14;
    if (in_stack_00000168 == '\0') {
      if (in_stack_00000138 == '\0') goto LAB_051b74c0;
      goto LAB_051b797c;
    }
    if (in_stack_00000138 == '\0') {
LAB_051b74c0:
      if (*(long *)(unaff_x22 + 0x20) == 0) break;
      if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) == 1) goto LAB_051b74d4;
      FUN_051b88b0(&stack0x00000090,&stack0x00000140);
      uVar8 = uStack00000000000000a8;
      uVar7 = uStack00000000000000a0;
      uVar5 = uStack000000000000009c;
      fVar6 = fStack0000000000000098;
      fVar4 = fStack0000000000000094;
      fVar3 = fStack0000000000000090;
      uVar16 = (undefined4)uVar14;
      FUN_051b88b0(&stack0x00000090,&stack0x00000110);
      uVar15 = uStack00000000000000a4;
      fVar13 = (float)FUN_051b895c(&stack0x00000140);
      fVar18 = fVar13;
      fVar22 = fVar4;
      fVar23 = fVar6;
      fVar19 = (float)FUN_051b79c0(fVar3);
      fVar27 = *unaff_x21;
      fVar20 = unaff_x21[1];
      fVar25 = unaff_x21[2];
      fVar26 = unaff_x21[3];
      fVar24 = unaff_x21[4];
      fVar21 = unaff_x21[5];
      if (*(char *)(unaff_x20 + 0x231) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x20 + 0x231) = 1;
      }
      fVar24 = fVar23 * fVar21 + fVar19 * fVar26 + fVar22 * fVar24;
      fVar21 = ABS(fVar24);
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      fVar21 = fVar21 * *(float *)(unaff_x26 + 0x160);
      fVar26 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
      if (fVar21 <= fVar26) {
        fVar21 = fVar26;
      }
      if (fVar21 <= ABS(0.0 - fVar24)) {
        uVar17 = (ulong)(uint)(fVar23 * fVar25);
        fVar18 = -(fVar23 * fVar25 + fVar27 * fVar19 + fVar22 * fVar20) - fVar18;
        uVar10 = (ulong)(uint)fVar18;
        if (fVar18 / fVar24 <= 0.0) goto LAB_051b797c;
        uVar14 = FUN_05eb7ebc();
        FUN_051b6c88(uVar14);
        fStack0000000000000174 = fVar4;
        uStack0000000000000170 = FUN_051b7d20(fVar3,fVar4,fVar6,fVar13,uVar15,uVar16);
        fStack0000000000000178 = fVar6;
        uStack000000000000017c = FUN_05ee9aa8(uVar5,0);
        in_stack_00000188 = uVar8;
        in_stack_00000180 = uVar7;
LAB_051b78f4:
        fVar4 = fStack0000000000000178;
        fVar3 = fStack0000000000000174;
        uVar5 = uStack0000000000000170;
        if (*(int *)(*(long *)PTR_DAT_06606500 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_051a9758(uVar14,uVar10,uVar17,uVar5,fVar3,fVar4,&stack0x00000100,0);
        uVar10 = FUN_051b088c(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074,
                              &stack0x00000100);
        if ((uVar10 & 1) != 0) {
          uStack0000000000000078 = uStack0000000000000104;
          uStack000000000000007c = uStack0000000000000100;
          uStack0000000000000074 = in_stack_00000108;
          FUN_05167a3c(in_stack_00000038,&stack0x00000170,0);
          in_stack_00000030._4_4_ = 1;
        }
      }
    }
    else {
LAB_051b74d4:
      FUN_051b88b0(&stack0x00000090,&stack0x00000140);
      fVar6 = fStack0000000000000098;
      fVar4 = fStack0000000000000094;
      fVar3 = fStack0000000000000090;
      in_stack_000000e0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
      uStack00000000000000f4 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
      in_stack_000000e8 = fStack0000000000000098;
      uStack00000000000000f0 = uStack00000000000000a0;
      fVar23 = unaff_x21[3];
      fVar22 = unaff_x21[4];
      fVar18 = unaff_x21[5];
      if (DAT_06a6722e == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(plVar12);
        DAT_06a6722e = '\x01';
      }
      if (*(int *)(*plVar12 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fVar13 = SQRT(fVar18 * fVar18 + fVar23 * fVar23 + fVar22 * fVar22);
      if (fVar13 <= DAT_013ddfb8) {
        if (DAT_06a67148 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
          DAT_06a67148 = '\x01';
        }
        pfVar11 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
        fVar23 = *pfVar11;
        fVar22 = pfVar11[1];
        fVar13 = pfVar11[2];
      }
      else {
        fVar23 = -fVar23 / fVar13;
        fVar22 = -fVar22 / fVar13;
        fVar13 = -fVar18 / fVar13;
      }
      fVar18 = *unaff_x21;
      fVar27 = unaff_x21[1];
      fVar19 = unaff_x21[2];
      fVar20 = unaff_x21[3];
      fVar25 = unaff_x21[4];
      fVar21 = unaff_x21[5];
      if (*(char *)(unaff_x20 + 0x231) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x20 + 0x231) = 1;
      }
      fVar21 = fVar13 * fVar21 + fVar23 * fVar20 + fVar22 * fVar25;
      fVar20 = ABS(fVar21);
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar20 = fVar20 * *(float *)(unaff_x26 + 0x160);
      fVar25 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
      if (fVar20 <= fVar25) {
        fVar20 = fVar25;
      }
      if (fVar20 <= ABS(0.0 - fVar21)) {
        fVar18 = fVar13 * fVar19 + fVar23 * fVar18 + fVar22 * fVar27;
        uVar17 = (ulong)(uint)fVar18;
        fVar18 = (fVar6 * fVar13 + fVar3 * fVar23 + fVar4 * fVar22) - fVar18;
        uVar10 = (ulong)(uint)fVar18;
        if (0.0 < fVar18 / fVar21) {
          uVar14 = FUN_05eb7ebc();
          FUN_05167a3c(&stack0x00000170,&stack0x000000e0,0);
          goto LAB_051b78f4;
        }
      }
    }
LAB_051b797c:
    param_2 = *(long *)(unaff_x22 + 0x20);
  } while (param_2 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


