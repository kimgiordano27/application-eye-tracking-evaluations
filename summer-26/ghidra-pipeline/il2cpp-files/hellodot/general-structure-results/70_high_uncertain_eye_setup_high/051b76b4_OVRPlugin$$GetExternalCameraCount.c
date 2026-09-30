/*
FUNCTION_NAME: OVRPlugin$$GetExternalCameraCount
ENTRY_POINT: 051b76b4
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


uint OVRPlugin__GetExternalCameraCount
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined8 param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
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
  float fVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
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
  
code_r0x051b76b4:
  uVar17 = (undefined4)param_4;
  FUN_051b88b0(param_1,param_5);
  uVar8 = uStack00000000000000a8;
  uVar7 = uStack00000000000000a0;
  uVar5 = uStack000000000000009c;
  fVar6 = fStack0000000000000098;
  fVar4 = fStack0000000000000094;
  fVar3 = fStack0000000000000090;
  FUN_051b88b0(&stack0x00000090,&stack0x00000110);
  uVar15 = uStack00000000000000a4;
  fVar12 = (float)FUN_051b895c(&stack0x00000140);
  fVar16 = fVar12;
  fVar22 = fVar4;
  fVar23 = fVar6;
  fVar13 = (float)FUN_051b79c0(fVar3);
  fVar24 = *unaff_x21;
  fVar19 = unaff_x21[1];
  fVar21 = unaff_x21[2];
  fVar26 = unaff_x21[3];
  fVar25 = unaff_x21[4];
  fVar20 = unaff_x21[5];
  if (*(char *)(unaff_x20 + 0x231) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum();
    *(undefined1 *)(unaff_x20 + 0x231) = 1;
  }
  fVar25 = fVar23 * fVar20 + fVar13 * fVar26 + fVar22 * fVar25;
  fVar20 = ABS(fVar25);
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar20 = fVar20 * *(float *)(unaff_x26 + 0x160);
  fVar26 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  if (fVar20 <= fVar26) {
    fVar20 = fVar26;
  }
  if (ABS(0.0 - fVar25) < fVar20) goto LAB_051b797c;
  uVar18 = (ulong)(uint)(fVar23 * fVar21);
  fVar16 = -(fVar23 * fVar21 + fVar24 * fVar13 + fVar22 * fVar19) - fVar16;
  uVar9 = (ulong)(uint)fVar16;
  if (fVar16 / fVar25 <= 0.0) goto LAB_051b797c;
  uVar14 = FUN_05eb7ebc();
  FUN_051b6c88(uVar14);
  fStack0000000000000174 = fVar4;
  uStack0000000000000170 = FUN_051b7d20(fVar3,fVar4,fVar6,fVar12,uVar15,uVar17);
  fStack0000000000000178 = fVar6;
  uStack000000000000017c = FUN_05ee9aa8(uVar5,0);
  in_stack_00000188 = uVar8;
  in_stack_00000180 = uVar7;
  do {
    fVar4 = fStack0000000000000178;
    fVar3 = fStack0000000000000174;
    uVar5 = uStack0000000000000170;
    if (*(int *)(*(long *)PTR_DAT_06606500 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_051a9758(uVar14,uVar9,uVar18,uVar5,fVar3,fVar4,&stack0x00000100,0);
    uVar9 = FUN_051b088c(uStack000000000000007c,uStack0000000000000078,in_stack_00000070._4_4_,
                         &stack0x00000100);
    if ((uVar9 & 1) != 0) {
      uStack0000000000000078 = uStack0000000000000104;
      uStack000000000000007c = uStack0000000000000100;
      in_stack_00000070._4_4_ = in_stack_00000108;
      FUN_05167a3c(in_stack_00000038,&stack0x00000170,0);
      in_stack_00000030._4_4_ = 1;
    }
LAB_051b797c:
    do {
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
        param_4 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
        *(undefined8 *)(unaff_x27 + 0x24) = uStack00000000000000b4;
        *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
        in_stack_00000120 = param_4;
        if (in_stack_00000168 == '\0') {
          if (in_stack_00000138 != '\0') goto LAB_051b797c;
LAB_051b74c0:
          if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_051b7984:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) != 1) {
            param_1 = (undefined8 *)&stack0x00000090;
            param_5 = &stack0x00000140;
            goto code_r0x051b76b4;
          }
        }
        else if (in_stack_00000138 == '\0') goto LAB_051b74c0;
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
        fVar16 = unaff_x21[5];
        if (*(char *)(unaff_x28 + 0x22e) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x28 + 0x22e) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        fVar12 = SQRT(fVar16 * fVar16 + fVar23 * fVar23 + fVar22 * fVar22);
        if (fVar12 <= DAT_013ddfb8) {
          if (DAT_06a67148 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
            DAT_06a67148 = '\x01';
          }
          pfVar11 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
          fVar23 = *pfVar11;
          fVar22 = pfVar11[1];
          fVar12 = pfVar11[2];
        }
        else {
          fVar23 = -fVar23 / fVar12;
          fVar22 = -fVar22 / fVar12;
          fVar12 = -fVar16 / fVar12;
        }
        fVar16 = *unaff_x21;
        fVar24 = unaff_x21[1];
        fVar13 = unaff_x21[2];
        fVar19 = unaff_x21[3];
        fVar21 = unaff_x21[4];
        fVar20 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0x231) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x20 + 0x231) = 1;
        }
        fVar20 = fVar12 * fVar20 + fVar23 * fVar19 + fVar22 * fVar21;
        fVar19 = ABS(fVar20);
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        fVar19 = fVar19 * *(float *)(unaff_x26 + 0x160);
        fVar21 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar19 <= fVar21) {
          fVar19 = fVar21;
        }
      } while (ABS(0.0 - fVar20) < fVar19);
      fVar16 = fVar12 * fVar13 + fVar23 * fVar16 + fVar22 * fVar24;
      uVar18 = (ulong)(uint)fVar16;
      fVar16 = (fVar6 * fVar12 + fVar3 * fVar23 + fVar4 * fVar22) - fVar16;
      uVar9 = (ulong)(uint)fVar16;
    } while (fVar16 / fVar20 <= 0.0);
    uVar14 = FUN_05eb7ebc();
    FUN_05167a3c(&stack0x00000170,&stack0x000000e0,0);
  } while( true );
}


