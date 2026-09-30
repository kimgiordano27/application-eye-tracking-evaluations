/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.SeverityEntry.<>c__DisplayClass9_0$$.ctor
ENTRY_POINT: 06d8c670
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_SeverityEntry_<>c__DisplayClass9_0___ctor
               (float param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x25;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
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
  
  if (*(char *)(unaff_x25 + 0xff5) == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    *(undefined1 *)(unaff_x25 + 0xff5) = 1;
  }
  puVar3 = PTR_DAT_08e68e18;
  fVar20 = **(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  fVar21 = (*(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8))[2];
  uVar4 = FUN_07d86538(&stack0x00000560,&stack0x000004e0,0);
  fStack0000000000000010 = fVar21;
  fStack0000000000000014 = fVar20;
  if ((uVar4 & 1) != 0) {
    fStack0000000000000010 = (float)*param_3;
    fVar8 = (float)FUN_07d81db8(&stack0x00000560,&stack0x000004a0,0);
    fVar9 = (float)*param_3;
    fStack0000000000000014 = (float)FUN_07d81db8(&stack0x00000560,&stack0x00000460,0);
    fStack0000000000000014 = fVar8 - fStack0000000000000014;
    fStack0000000000000010 = fStack0000000000000010 - fVar9;
  }
  fStack0000000000000018 = fVar21;
  fStack000000000000001c = fVar20;
  if ((0 < *(int *)(param_2 + 0x1e4)) &&
     (uVar4 = FUN_07d86538(&stack0x00000560,&stack0x00000420,0), fStack000000000000001c = fVar20,
     (uVar4 & 1) != 0)) {
    fVar12 = (float)*param_3;
    fVar8 = (float)FUN_07d81db8(&stack0x00000560,&stack0x000003e0,0);
    fVar15 = (float)*param_3;
    fVar9 = (float)FUN_07d81db8(&stack0x00000560,&stack0x000003a0,0);
    fVar18 = (float)*param_3;
    fVar10 = (float)FUN_07d81e28(&stack0x00000550,&stack0x00000360,0);
    fVar17 = (float)*param_3;
    fVar11 = (float)FUN_07d81db8(&stack0x00000560,&stack0x00000320,0);
    fStack000000000000001c = (fVar8 - fVar9) * 0.5 + (fVar10 - fVar11) * 0.5;
    fStack0000000000000018 = (fVar12 - fVar15) * 0.5 + (fVar18 - fVar17) * 0.5;
  }
  if ((0 < *(int *)(param_2 + 0x1e8)) &&
     (uVar4 = FUN_07d86538(&stack0x00000560,&stack0x000002e0,0), (uVar4 & 1) != 0)) {
    fVar10 = (float)*param_3;
    fVar20 = (float)FUN_07d81db8(&stack0x00000560,&stack0x000002a0,0);
    fVar11 = (float)*param_3;
    fVar21 = (float)FUN_07d81db8(&stack0x00000560,&stack0x00000260,0);
    fVar12 = 0.25;
    fVar8 = (float)FUN_07d81e28(&stack0x00000550,&stack0x00000220,0);
    in_stack_000001e8 = param_3[1];
    uVar6 = *param_3;
    in_stack_000001e0 = uVar6;
    fVar9 = (float)FUN_07d81db8(&stack0x00000560,&stack0x000001e0,0);
    fVar20 = (fVar20 - fVar21) * 0.25 + (fVar8 - fVar9) * 0.75;
    fVar21 = (fVar10 - fVar11) * 0.25 + (fVar12 - (float)uVar6) * 0.75;
  }
  iVar1 = *(int *)(param_2 + 0x1e0);
  if (iVar1 <= *(int *)(param_2 + 0x1ec)) {
    fVar8 = param_1;
    if (1.0 < param_1) {
      fVar8 = 1.0;
    }
    if (param_1 < 0.0) {
      fVar8 = 0.0;
    }
    do {
      puVar5 = (undefined8 *)(*(long *)(param_2 + 0x88) + (long)iVar1 * 0x18);
      uVar7 = puVar5[2];
      uVar14 = puVar5[1];
      uVar13 = *puVar5;
      puVar5 = (undefined8 *)(*(long *)(param_2 + 0x78) + (long)iVar1 * 0xc);
      uVar2 = *(undefined4 *)(puVar5 + 1);
      uVar6 = *puVar5;
      in_stack_000001b8 = param_3[3];
      in_stack_000001b0 = param_3[2];
      in_stack_000001c8 = param_3[5];
      in_stack_000001c0 = param_3[4];
      in_stack_000001d0 = param_3[6];
      in_stack_000001a8 = param_3[1];
      in_stack_000001a0 = *param_3;
      uVar4 = FUN_07d86538(&stack0x00000530,&stack0x000001a0,0);
      if ((uVar4 & 1) != 0) {
        if (*(char *)(unaff_x25 + 0xff5) == '\0') {
          FUN_03c8f898(puVar3);
          *(undefined1 *)(unaff_x25 + 0xff5) = 1;
        }
        fVar9 = **(float **)(*(long *)puVar3 + 0xb8);
        fVar10 = (*(float **)(*(long *)puVar3 + 0xb8))[2];
        if (iVar1 == *(int *)(param_2 + 0x1e0)) {
          in_stack_00000190 = param_3[6];
          in_stack_00000178 = param_3[3];
          in_stack_00000170 = param_3[2];
          in_stack_00000188 = param_3[5];
          in_stack_00000180 = param_3[4];
          in_stack_00000168 = param_3[1];
          in_stack_00000160 = *param_3;
          fVar12 = (float)FUN_07d81d44(param_2 + 0x118,&stack0x00000160,0);
          fVar12 = fVar12 * param_1;
          fVar11 = fVar12;
          if (1.0 < fVar12) {
            fVar11 = 1.0;
          }
          if (fVar12 < 0.0) {
            fVar11 = 0.0;
          }
          fVar9 = fVar9 + (fStack0000000000000014 - fVar9) * fVar11;
          fVar10 = fVar10 + (fStack0000000000000010 - fVar10) * fVar11;
        }
        if (iVar1 == *(int *)(param_2 + 0x1e4)) {
          if (*(char *)(unaff_x25 + 0xff5) == '\0') {
            FUN_03c8f898(puVar3);
            *(undefined1 *)(unaff_x25 + 0xff5) = 1;
          }
          in_stack_00000138 = param_3[3];
          in_stack_00000130 = param_3[2];
          in_stack_00000148 = param_3[5];
          in_stack_00000140 = param_3[4];
          in_stack_00000150 = param_3[6];
          in_stack_00000128 = param_3[1];
          in_stack_00000120 = *param_3;
          fVar9 = **(float **)(*(long *)puVar3 + 0xb8);
          fVar10 = (*(float **)(*(long *)puVar3 + 0xb8))[2];
          fVar12 = (float)FUN_07d81d44(param_2 + 0x128,&stack0x00000120,0);
          fVar12 = fVar12 * param_1;
          fVar11 = fVar12;
          if (1.0 < fVar12) {
            fVar11 = 1.0;
          }
          if (fVar12 < 0.0) {
            fVar11 = 0.0;
          }
          fVar9 = fVar9 + (fStack000000000000001c - fVar9) * fVar11;
          fVar10 = fVar10 + (fStack0000000000000018 - fVar10) * fVar11;
        }
        if (iVar1 == *(int *)(param_2 + 0x1e8)) {
          if (*(char *)(unaff_x25 + 0xff5) == '\0') {
            FUN_03c8f898(puVar3);
            *(undefined1 *)(unaff_x25 + 0xff5) = 1;
          }
          in_stack_000000f8 = param_3[3];
          in_stack_000000f0 = param_3[2];
          in_stack_00000108 = param_3[5];
          in_stack_00000100 = param_3[4];
          in_stack_00000110 = param_3[6];
          in_stack_000000e8 = param_3[1];
          in_stack_000000e0 = *param_3;
          fVar9 = **(float **)(*(long *)puVar3 + 0xb8);
          fVar10 = (*(float **)(*(long *)puVar3 + 0xb8))[2];
          fVar12 = (float)FUN_07d81d44(param_2 + 0x138,&stack0x000000e0,0);
          fVar12 = fVar12 * param_1;
          fVar11 = fVar12;
          if (1.0 < fVar12) {
            fVar11 = 1.0;
          }
          if (fVar12 < 0.0) {
            fVar11 = 0.0;
          }
          fVar9 = fVar9 + (fVar20 - fVar9) * fVar11;
          fVar10 = fVar10 + (fVar21 - fVar10) * fVar11;
        }
        in_stack_000000d0 = param_3[6];
        in_stack_000000b8 = param_3[3];
        in_stack_000000b0 = param_3[2];
        in_stack_000000c8 = param_3[5];
        in_stack_000000c0 = param_3[4];
        in_stack_000000a8 = param_3[1];
        uVar19 = *param_3;
        in_stack_000000a0 = uVar19;
        fVar11 = (float)FUN_07d81db8(&stack0x00000530,&stack0x000000a0,0);
        in_stack_00000078 = param_3[3];
        uVar16 = param_3[2];
        in_stack_00000088 = param_3[5];
        in_stack_00000080 = param_3[4];
        in_stack_00000090 = param_3[6];
        in_stack_00000068 = param_3[1];
        in_stack_00000060 = *param_3;
        fVar18 = (float)uVar19;
        fVar10 = fVar10 + fVar18;
        in_stack_00000070 = uVar16;
        fVar12 = (float)FUN_07d81e28(&stack0x00000520,&stack0x00000060,0);
        fVar15 = (float)uVar16;
        in_stack_00000050 = param_3[6];
        in_stack_00000038 = param_3[3];
        in_stack_00000030 = param_3[2];
        in_stack_00000048 = param_3[5];
        in_stack_00000040 = param_3[4];
        in_stack_00000028 = param_3[1];
        in_stack_00000020 = *param_3;
        FUN_07d81e60(fVar12 + fVar8 * ((fVar9 + fVar11) - fVar12),fVar15 + fVar8 * (fVar15 - fVar15)
                     ,fVar18 + fVar8 * (fVar10 - fVar18),&stack0x00000520,&stack0x00000020,0);
      }
      puVar5 = (undefined8 *)(*(long *)(param_2 + 0x88) + (long)iVar1 * 0x18);
      puVar5[2] = uVar7;
      puVar5[1] = uVar14;
      *puVar5 = uVar13;
      puVar5 = (undefined8 *)(*(long *)(param_2 + 0x78) + (long)iVar1 * 0xc);
      *(undefined4 *)(puVar5 + 1) = uVar2;
      *puVar5 = uVar6;
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *(int *)(param_2 + 0x1ec));
  }
  return;
}


