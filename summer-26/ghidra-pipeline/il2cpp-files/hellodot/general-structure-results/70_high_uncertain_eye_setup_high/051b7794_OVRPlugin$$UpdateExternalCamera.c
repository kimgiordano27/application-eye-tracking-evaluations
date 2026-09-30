/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 051b7794
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__UpdateExternalCamera(void)

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
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  float in_s7;
  float fVar15;
  float fVar16;
  float unaff_s8;
  float fVar17;
  float unaff_s9;
  float fVar18;
  ulong unaff_d10;
  float fVar19;
  float unaff_s11;
  float fVar20;
  float unaff_s12;
  float unaff_s13;
  float fVar21;
  float unaff_s14;
  float fVar22;
  ulong unaff_d15;
  ulong in_d16;
  uint uStack000000000000002c;
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
  undefined4 uStack0000000000000180;
  undefined4 uStack0000000000000184;
  undefined4 in_stack_00000188;
  
code_r0x051b7794:
  uStack000000000000002c = (uint)in_d16;
  AkMIDIEventCallbackInfo__get_byProgramNum();
  in_d16 = (ulong)uStack000000000000002c;
  *(undefined1 *)(unaff_x20 + 0x231) = 1;
LAB_051b77a8:
  fVar10 = (float)unaff_d10 * unaff_s8 + unaff_s11 * unaff_s14 + (float)unaff_d15 * unaff_s13;
  fVar13 = ABS(fVar10);
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar13 = fVar13 * *(float *)(unaff_x26 + 0x160);
  fVar12 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  if (fVar13 <= fVar12) {
    fVar13 = fVar12;
  }
  if (ABS(0.0 - fVar10) < fVar13) goto LAB_051b797c;
  fVar13 = (float)unaff_d10 * unaff_s9;
  uVar14 = (ulong)(uint)fVar13;
  fVar13 = -(fVar13 + unaff_s12 * unaff_s11 + (float)unaff_d15 * in_s7) - (float)in_d16;
  uVar6 = (ulong)(uint)fVar13;
  if (fVar13 / fVar10 <= 0.0) goto LAB_051b797c;
  uVar11 = FUN_05eb7ebc();
  FUN_051b6c88(uVar11);
  fVar13 = fStack000000000000004c;
  fVar10 = fStack0000000000000048;
  uStack0000000000000170 =
       FUN_051b7d20(in_stack_00000050,fStack000000000000004c,fStack0000000000000048,
                    uStack0000000000000044,uStack0000000000000040,in_stack_00000080);
  fStack0000000000000178 = fVar10;
  fStack0000000000000174 = fVar13;
  uVar3 = uStack000000000000006c;
  uVar4 = uStack0000000000000068;
  uVar5 = in_stack_00000060._4_4_;
  uStack000000000000017c = FUN_05ee9aa8(uStack0000000000000070,0);
  in_stack_00000188 = uVar5;
  uStack0000000000000184 = uVar4;
  uStack0000000000000180 = uVar3;
  do {
    fVar10 = fStack0000000000000178;
    fVar13 = fStack0000000000000174;
    uVar3 = uStack0000000000000170;
    if (*(int *)(*(long *)PTR_DAT_06606500 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_051a9758(uVar11,uVar6,uVar14,uVar3,fVar13,fVar10,&stack0x00000100,0);
    uVar6 = FUN_051b088c(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074,
                         &stack0x00000100);
    if ((uVar6 & 1) != 0) {
      uStack0000000000000078 = uStack0000000000000104;
      uStack000000000000007c = uStack0000000000000100;
      uStack0000000000000074 = in_stack_00000108;
      FUN_05167a3c(in_stack_00000038,&stack0x00000170,0);
      in_stack_00000030._4_4_ = 1;
    }
LAB_051b797c:
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
        uVar11 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
        *(undefined8 *)(unaff_x27 + 0x24) = uStack00000000000000b4;
        *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
        in_stack_00000120 = uVar11;
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
            fStack0000000000000048 = fStack0000000000000098;
            fStack000000000000004c = fStack0000000000000094;
            in_stack_00000050 = fStack0000000000000090;
            in_stack_00000080 = (undefined4)uVar11;
            unaff_d10 = (ulong)(uint)fStack0000000000000098;
            unaff_d15 = (ulong)(uint)fStack0000000000000094;
            uStack000000000000006c = uStack00000000000000a0;
            uStack0000000000000070 = uStack000000000000009c;
            in_stack_00000060._4_4_ = uStack00000000000000a8;
            uStack0000000000000068 = uStack00000000000000a4;
            FUN_051b88b0(&stack0x00000090,&stack0x00000110);
            uStack0000000000000040 = uStack00000000000000a4;
            in_d16 = FUN_051b895c(&stack0x00000140);
            uStack0000000000000044 = (undefined4)in_d16;
            unaff_s11 = (float)FUN_051b79c0(in_stack_00000050);
            unaff_s12 = *unaff_x21;
            in_s7 = unaff_x21[1];
            unaff_s9 = unaff_x21[2];
            unaff_s14 = unaff_x21[3];
            unaff_s13 = unaff_x21[4];
            unaff_s8 = unaff_x21[5];
            if (*(char *)(unaff_x20 + 0x231) != '\0') goto LAB_051b77a8;
            goto code_r0x051b7794;
          }
        }
        else if (in_stack_00000138 == '\0') goto LAB_051b74c0;
        FUN_051b88b0(&stack0x00000090,&stack0x00000140);
        fVar12 = fStack0000000000000098;
        fVar10 = fStack0000000000000094;
        fVar13 = fStack0000000000000090;
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
        fVar9 = SQRT(fVar15 * fVar15 + fVar20 * fVar20 + fVar19 * fVar19);
        if (fVar9 <= DAT_013ddfb8) {
          if (DAT_06a67148 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
            DAT_06a67148 = '\x01';
          }
          pfVar8 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
          fVar20 = *pfVar8;
          fVar19 = pfVar8[1];
          fVar9 = pfVar8[2];
        }
        else {
          fVar20 = -fVar20 / fVar9;
          fVar19 = -fVar19 / fVar9;
          fVar9 = -fVar15 / fVar9;
        }
        fVar15 = *unaff_x21;
        fVar22 = unaff_x21[1];
        fVar16 = unaff_x21[2];
        fVar17 = unaff_x21[3];
        fVar21 = unaff_x21[4];
        fVar18 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0x231) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x20 + 0x231) = 1;
        }
        fVar18 = fVar9 * fVar18 + fVar20 * fVar17 + fVar19 * fVar21;
        fVar17 = ABS(fVar18);
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        fVar17 = fVar17 * *(float *)(unaff_x26 + 0x160);
        fVar21 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar17 <= fVar21) {
          fVar17 = fVar21;
        }
      } while (ABS(0.0 - fVar18) < fVar17);
      fVar15 = fVar9 * fVar16 + fVar20 * fVar15 + fVar19 * fVar22;
      uVar14 = (ulong)(uint)fVar15;
      fVar15 = (fVar12 * fVar9 + fVar13 * fVar20 + fVar10 * fVar19) - fVar15;
      uVar6 = (ulong)(uint)fVar15;
    } while (fVar15 / fVar18 <= 0.0);
    uVar11 = FUN_05eb7ebc();
    FUN_05167a3c(&stack0x00000170,&stack0x000000e0,0);
  } while( true );
}


