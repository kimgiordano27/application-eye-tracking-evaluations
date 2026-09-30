/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$set_PillStyle
ENTRY_POINT: 06d8c8a4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Member__set_PillStyle(void)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x25;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s13;
  float unaff_s14;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  fVar16 = (float)*unaff_x19;
  fVar7 = (float)FUN_07d81db8();
  fVar17 = (float)*unaff_x19;
  fVar8 = (float)FUN_07d81e28(&stack0x00000550,&stack0x00000360,0);
  fVar18 = (float)*unaff_x19;
  fVar9 = (float)FUN_07d81db8(&stack0x00000560,&stack0x00000320,0);
  fStack000000000000001c = (unaff_s9 - fVar7) * 0.5 + (fVar8 - fVar9) * 0.5;
  if ((0 < *(int *)(unaff_x20 + 0x1e8)) &&
     (uVar3 = FUN_07d86538(&stack0x00000560,&stack0x000002e0,0), (uVar3 & 1) != 0)) {
    fVar11 = (float)*unaff_x19;
    fVar7 = (float)FUN_07d81db8(&stack0x00000560,&stack0x000002a0,0);
    fVar14 = (float)*unaff_x19;
    fVar8 = (float)FUN_07d81db8(&stack0x00000560,&stack0x00000260,0);
    fVar19 = 0.25;
    fVar9 = (float)FUN_07d81e28(&stack0x00000550,&stack0x00000220,0);
    in_stack_000001e8 = unaff_x19[1];
    uVar5 = *unaff_x19;
    in_stack_000001e0 = uVar5;
    fVar10 = (float)FUN_07d81db8(&stack0x00000560,&stack0x000001e0,0);
    unaff_s13 = (fVar7 - fVar8) * 0.25 + (fVar9 - fVar10) * 0.75;
    unaff_s14 = (fVar11 - fVar14) * 0.25 + (fVar19 - (float)uVar5) * 0.75;
  }
  iVar1 = *(int *)(unaff_x20 + 0x1e0);
  if (iVar1 <= *(int *)(unaff_x20 + 0x1ec)) {
    fVar7 = unaff_s8;
    if (1.0 < unaff_s8) {
      fVar7 = 1.0;
    }
    if (unaff_s8 < 0.0) {
      fVar7 = 0.0;
    }
    do {
      puVar4 = (undefined8 *)(*(long *)(unaff_x20 + 0x88) + (long)iVar1 * 0x18);
      uVar6 = puVar4[2];
      uVar13 = puVar4[1];
      uVar12 = *puVar4;
      puVar4 = (undefined8 *)(*(long *)(unaff_x20 + 0x78) + (long)iVar1 * 0xc);
      uVar2 = *(undefined4 *)(puVar4 + 1);
      uVar5 = *puVar4;
      in_stack_000001b8 = unaff_x19[3];
      in_stack_000001b0 = unaff_x19[2];
      in_stack_000001c8 = unaff_x19[5];
      in_stack_000001c0 = unaff_x19[4];
      in_stack_000001d0 = unaff_x19[6];
      in_stack_000001a8 = unaff_x19[1];
      in_stack_000001a0 = *unaff_x19;
      uVar3 = FUN_07d86538(&stack0x00000530,&stack0x000001a0,0);
      if ((uVar3 & 1) != 0) {
        if (*(char *)(unaff_x25 + 0xff5) == '\0') {
          FUN_03c8f898();
          *(undefined1 *)(unaff_x25 + 0xff5) = 1;
        }
        fVar8 = **(float **)(*unaff_x21 + 0xb8);
        fVar9 = (*(float **)(*unaff_x21 + 0xb8))[2];
        if (iVar1 == *(int *)(unaff_x20 + 0x1e0)) {
          in_stack_00000190 = unaff_x19[6];
          in_stack_00000178 = unaff_x19[3];
          in_stack_00000170 = unaff_x19[2];
          in_stack_00000188 = unaff_x19[5];
          in_stack_00000180 = unaff_x19[4];
          in_stack_00000168 = unaff_x19[1];
          in_stack_00000160 = *unaff_x19;
          fVar11 = (float)FUN_07d81d44(unaff_x20 + 0x118,&stack0x00000160,0);
          fVar11 = fVar11 * unaff_s8;
          fVar10 = fVar11;
          if (1.0 < fVar11) {
            fVar10 = 1.0;
          }
          if (fVar11 < 0.0) {
            fVar10 = 0.0;
          }
          fVar8 = fVar8 + (fStack0000000000000014 - fVar8) * fVar10;
          fVar9 = fVar9 + (fStack0000000000000010 - fVar9) * fVar10;
        }
        if (iVar1 == *(int *)(unaff_x20 + 0x1e4)) {
          if (*(char *)(unaff_x25 + 0xff5) == '\0') {
            FUN_03c8f898();
            *(undefined1 *)(unaff_x25 + 0xff5) = 1;
          }
          in_stack_00000138 = unaff_x19[3];
          in_stack_00000130 = unaff_x19[2];
          in_stack_00000148 = unaff_x19[5];
          in_stack_00000140 = unaff_x19[4];
          in_stack_00000150 = unaff_x19[6];
          in_stack_00000128 = unaff_x19[1];
          in_stack_00000120 = *unaff_x19;
          fVar8 = **(float **)(*unaff_x21 + 0xb8);
          fVar9 = (*(float **)(*unaff_x21 + 0xb8))[2];
          fVar11 = (float)FUN_07d81d44(unaff_x20 + 0x128,&stack0x00000120,0);
          fVar11 = fVar11 * unaff_s8;
          fVar10 = fVar11;
          if (1.0 < fVar11) {
            fVar10 = 1.0;
          }
          if (fVar11 < 0.0) {
            fVar10 = 0.0;
          }
          fVar8 = fVar8 + (fStack000000000000001c - fVar8) * fVar10;
          fVar9 = fVar9 + (((unaff_s10 - fVar16) * 0.5 + (fVar17 - fVar18) * 0.5) - fVar9) * fVar10;
        }
        if (iVar1 == *(int *)(unaff_x20 + 0x1e8)) {
          if (*(char *)(unaff_x25 + 0xff5) == '\0') {
            FUN_03c8f898();
            *(undefined1 *)(unaff_x25 + 0xff5) = 1;
          }
          in_stack_000000f8 = unaff_x19[3];
          in_stack_000000f0 = unaff_x19[2];
          in_stack_00000108 = unaff_x19[5];
          in_stack_00000100 = unaff_x19[4];
          in_stack_00000110 = unaff_x19[6];
          in_stack_000000e8 = unaff_x19[1];
          in_stack_000000e0 = *unaff_x19;
          fVar8 = **(float **)(*unaff_x21 + 0xb8);
          fVar9 = (*(float **)(*unaff_x21 + 0xb8))[2];
          fVar11 = (float)FUN_07d81d44(unaff_x20 + 0x138,&stack0x000000e0,0);
          fVar11 = fVar11 * unaff_s8;
          fVar10 = fVar11;
          if (1.0 < fVar11) {
            fVar10 = 1.0;
          }
          if (fVar11 < 0.0) {
            fVar10 = 0.0;
          }
          fVar8 = fVar8 + (unaff_s13 - fVar8) * fVar10;
          fVar9 = fVar9 + (unaff_s14 - fVar9) * fVar10;
        }
        in_stack_000000d0 = unaff_x19[6];
        in_stack_000000b8 = unaff_x19[3];
        in_stack_000000b0 = unaff_x19[2];
        in_stack_000000c8 = unaff_x19[5];
        in_stack_000000c0 = unaff_x19[4];
        in_stack_000000a8 = unaff_x19[1];
        uVar20 = *unaff_x19;
        in_stack_000000a0 = uVar20;
        fVar10 = (float)FUN_07d81db8(&stack0x00000530,&stack0x000000a0,0);
        in_stack_00000078 = unaff_x19[3];
        uVar15 = unaff_x19[2];
        in_stack_00000088 = unaff_x19[5];
        in_stack_00000080 = unaff_x19[4];
        in_stack_00000090 = unaff_x19[6];
        in_stack_00000068 = unaff_x19[1];
        in_stack_00000060 = *unaff_x19;
        fVar19 = (float)uVar20;
        fVar9 = fVar9 + fVar19;
        in_stack_00000070 = uVar15;
        fVar11 = (float)FUN_07d81e28(&stack0x00000520,&stack0x00000060,0);
        fVar14 = (float)uVar15;
        in_stack_00000050 = unaff_x19[6];
        in_stack_00000038 = unaff_x19[3];
        in_stack_00000030 = unaff_x19[2];
        in_stack_00000048 = unaff_x19[5];
        in_stack_00000040 = unaff_x19[4];
        in_stack_00000028 = unaff_x19[1];
        in_stack_00000020 = *unaff_x19;
        FUN_07d81e60(fVar11 + fVar7 * ((fVar8 + fVar10) - fVar11),fVar14 + fVar7 * (fVar14 - fVar14)
                     ,fVar19 + fVar7 * (fVar9 - fVar19),&stack0x00000520,&stack0x00000020,0);
      }
      puVar4 = (undefined8 *)(*(long *)(unaff_x20 + 0x88) + (long)iVar1 * 0x18);
      puVar4[2] = uVar6;
      puVar4[1] = uVar13;
      *puVar4 = uVar12;
      puVar4 = (undefined8 *)(*(long *)(unaff_x20 + 0x78) + (long)iVar1 * 0xc);
      *(undefined4 *)(puVar4 + 1) = uVar2;
      *puVar4 = uVar5;
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *(int *)(unaff_x20 + 0x1ec));
  }
  return;
}


