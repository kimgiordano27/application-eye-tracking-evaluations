/*
FUNCTION_NAME: OVRPlugin$$GetMixedRealityCameraInfo
ENTRY_POINT: 051b7868
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


uint OVRPlugin__GetMixedRealityCameraInfo(undefined4 param_1,ulong param_2,ulong param_3)

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
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  ulong unaff_d8;
  float fVar17;
  ulong unaff_d9;
  float fVar18;
  undefined8 unaff_d10;
  float fVar19;
  float fVar20;
  ulong unaff_d12;
  float fVar21;
  ulong unaff_d13;
  float fVar22;
  float fVar23;
  ulong unaff_d14;
  float fVar24;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
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
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000d8;
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
  undefined4 uStack0000000000000174;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined4 uStack0000000000000180;
  uint uStack0000000000000184;
  undefined4 in_stack_00000188;
  
code_r0x051b7868:
  fStack0000000000000004 = (float)unaff_d8;
  fStack0000000000000000 = (float)unaff_d14;
  fStack0000000000000008 = (float)param_1;
  FUN_051b6c88(unaff_d10);
  fVar3 = in_stack_000000d8._4_4_;
  fStack0000000000000004 = fStack0000000000000088;
  fStack0000000000000008 = fStack0000000000000084;
  fStack0000000000000000 = fStack000000000000008c;
  uStack0000000000000170 =
       FUN_051b7d20(unaff_d9,unaff_d12,unaff_d13,unaff_d14,unaff_d8,uStack0000000000000080);
  uStack0000000000000174 = (undefined4)unaff_d12;
  uStack0000000000000178 = (undefined4)unaff_d13;
  fStack0000000000000000 = fVar3;
  uVar7 = uStack000000000000006c;
  uVar13 = uStack0000000000000068;
  uVar8 = in_stack_00000060._4_4_;
  uStack000000000000017c = FUN_05ee9aa8(uStack0000000000000070,0);
  in_stack_00000188 = uVar8;
  uStack0000000000000184 = uVar13;
  uStack0000000000000180 = uVar7;
  do {
    uVar6 = uStack0000000000000178;
    uVar8 = uStack0000000000000174;
    uVar7 = uStack0000000000000170;
    if (*(int *)(*(long *)PTR_DAT_06606500 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_051a9758(unaff_d10,param_2,param_3,uVar7,uVar8,uVar6,&stack0x00000100,0);
    uVar9 = FUN_051b088c(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074,
                         &stack0x00000100);
    if ((uVar9 & 1) != 0) {
      uStack0000000000000078 = uStack0000000000000104;
      uStack000000000000007c = uStack0000000000000100;
      uStack0000000000000074 = in_stack_00000108;
      FUN_05167a3c(in_stack_00000038,&stack0x00000170,0);
      in_stack_00000030._4_4_ = 1;
    }
LAB_051b797c:
    do {
      lVar10 = *(long *)(unaff_x22 + 0x20);
      if (lVar10 == 0) goto LAB_051b7984;
      if (*(int *)(lVar10 + 0x18) <= unaff_w23) {
        return in_stack_00000030._4_4_ & 1;
      }
      FUN_038c4204(&stack0x00000090,lVar10,unaff_w23,*unaff_x29);
      in_stack_00000148 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
      in_stack_00000140 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
      in_stack_00000158 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      in_stack_00000150 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
      *(undefined8 *)(unaff_x27 + 0x54) = uStack00000000000000b4;
      *(ulong *)(unaff_x27 + 0x4c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
      lVar10 = *(long *)(unaff_x22 + 0x20);
      if (lVar10 == 0) goto LAB_051b7984;
      iVar1 = *(int *)(lVar10 + 0x18);
      unaff_w23 = unaff_w23 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = unaff_w23 / iVar1;
      }
      FUN_038c4204(&stack0x00000090,lVar10,unaff_w23 - iVar2 * iVar1,*unaff_x29);
      in_stack_00000118 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
      in_stack_00000110 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
      in_stack_00000128 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      uVar14 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
      *(undefined8 *)(unaff_x27 + 0x24) = uStack00000000000000b4;
      *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
      in_stack_00000120 = uVar14;
      if (in_stack_00000168 == '\0') {
        if (in_stack_00000138 != '\0') goto LAB_051b797c;
LAB_051b74c0:
        if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_051b7984:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) != 1) {
          FUN_051b88b0(&stack0x00000090,&stack0x00000140);
          fVar5 = fStack0000000000000098;
          fVar4 = fStack0000000000000094;
          fVar3 = fStack0000000000000090;
          param_1 = (undefined4)uVar14;
          uStack000000000000006c = uStack00000000000000a0;
          uStack0000000000000070 = uStack000000000000009c;
          in_stack_00000060._4_4_ = uStack00000000000000a8;
          uStack0000000000000068 = uStack00000000000000a4;
          FUN_051b88b0(&stack0x00000090,&stack0x00000110);
          fStack0000000000000084 = fStack0000000000000098;
          fStack0000000000000088 = fStack0000000000000094;
          fStack000000000000008c = fStack0000000000000090;
          uVar13 = uStack00000000000000a4;
          fVar12 = (float)FUN_051b895c(&stack0x00000140);
          fStack0000000000000004 = fStack0000000000000088;
          fStack0000000000000008 = fStack0000000000000084;
          fStack0000000000000000 = fStack000000000000008c;
          fVar15 = fVar12;
          fVar19 = fVar4;
          fVar20 = fVar5;
          fVar16 = (float)FUN_051b79c0(fVar3);
          fVar24 = *unaff_x21;
          fVar17 = unaff_x21[1];
          fVar22 = unaff_x21[2];
          fVar23 = unaff_x21[3];
          fVar21 = unaff_x21[4];
          fVar18 = unaff_x21[5];
          if (*(char *)(unaff_x20 + 0x231) == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum();
            *(undefined1 *)(unaff_x20 + 0x231) = 1;
          }
          fVar21 = fVar20 * fVar18 + fVar16 * fVar23 + fVar19 * fVar21;
          fVar18 = ABS(fVar21);
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          fVar18 = fVar18 * *(float *)(unaff_x26 + 0x160);
          fVar23 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
          if (fVar18 <= fVar23) {
            fVar18 = fVar23;
          }
          if (fVar18 <= ABS(0.0 - fVar21)) {
            param_3 = (ulong)(uint)(fVar20 * fVar22);
            fVar15 = -(fVar20 * fVar22 + fVar24 * fVar16 + fVar19 * fVar17) - fVar15;
            param_2 = (ulong)(uint)fVar15;
            if (0.0 < fVar15 / fVar21) {
              unaff_d10 = FUN_05eb7ebc();
              unaff_d8 = (ulong)uVar13;
              unaff_d14 = (ulong)(uint)fVar12;
              unaff_d12 = (ulong)(uint)fVar4;
              unaff_d9 = (ulong)(uint)fVar3;
              unaff_d13 = (ulong)(uint)fVar5;
              uStack0000000000000080 = param_1;
              goto code_r0x051b7868;
            }
          }
          goto LAB_051b797c;
        }
      }
      else if (in_stack_00000138 == '\0') goto LAB_051b74c0;
      FUN_051b88b0(&stack0x00000090,&stack0x00000140);
      fVar5 = fStack0000000000000098;
      fVar4 = fStack0000000000000094;
      fVar3 = fStack0000000000000090;
      in_stack_000000e0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
      uStack00000000000000f4 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
      in_stack_000000e8 = fStack0000000000000098;
      uStack00000000000000f0 = uStack00000000000000a0;
      fVar20 = unaff_x21[3];
      fVar19 = unaff_x21[4];
      fVar15 = unaff_x21[5];
      if (*(char *)(unaff_x28 + 0x22e) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x28 + 0x22e) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fVar12 = SQRT(fVar15 * fVar15 + fVar20 * fVar20 + fVar19 * fVar19);
      if (fVar12 <= DAT_013ddfb8) {
        if (DAT_06a67148 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
          DAT_06a67148 = '\x01';
        }
        pfVar11 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
        fVar20 = *pfVar11;
        fVar19 = pfVar11[1];
        fVar12 = pfVar11[2];
      }
      else {
        fVar20 = -fVar20 / fVar12;
        fVar19 = -fVar19 / fVar12;
        fVar12 = -fVar15 / fVar12;
      }
      fVar15 = *unaff_x21;
      fVar24 = unaff_x21[1];
      fVar16 = unaff_x21[2];
      fVar17 = unaff_x21[3];
      fVar22 = unaff_x21[4];
      fVar18 = unaff_x21[5];
      if (*(char *)(unaff_x20 + 0x231) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x20 + 0x231) = 1;
      }
      fVar18 = fVar12 * fVar18 + fVar20 * fVar17 + fVar19 * fVar22;
      fVar17 = ABS(fVar18);
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      fVar17 = fVar17 * *(float *)(unaff_x26 + 0x160);
      fVar22 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
      if (fVar17 <= fVar22) {
        fVar17 = fVar22;
      }
      if (ABS(0.0 - fVar18) < fVar17) goto LAB_051b797c;
      fVar15 = fVar12 * fVar16 + fVar20 * fVar15 + fVar19 * fVar24;
      param_3 = (ulong)(uint)fVar15;
      fVar15 = (fVar5 * fVar12 + fVar3 * fVar20 + fVar4 * fVar19) - fVar15;
      param_2 = (ulong)(uint)fVar15;
    } while (fVar15 / fVar18 <= 0.0);
    unaff_d10 = FUN_05eb7ebc();
    FUN_05167a3c(&stack0x00000170,&stack0x000000e0,0);
  } while( true );
}


