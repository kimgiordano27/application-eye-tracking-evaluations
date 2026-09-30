/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$GetAction
ENTRY_POINT: 06d8cd44
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Member__GetAction(float param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  long unaff_x29;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar11;
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
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
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
  undefined8 in_stack_00000520;
  undefined4 in_stack_00000528;
  undefined8 in_stack_00000530;
  undefined8 in_stack_00000538;
  undefined8 in_stack_00000540;
  
  do {
    fVar11 = param_1;
    if (unaff_s9 < param_1) {
      fVar11 = unaff_s9;
    }
    if (param_1 < 0.0) {
      fVar11 = unaff_s10;
    }
    fVar10 = unaff_s11 + (unaff_s13 - unaff_s11) * fVar11;
    fVar11 = unaff_s15 + (unaff_s14 - unaff_s15) * fVar11;
    do {
      uStack00000000000000d0 = unaff_x19[6];
      uStack00000000000000b8 = unaff_x19[3];
      uStack00000000000000b0 = unaff_x19[2];
      uStack00000000000000c8 = unaff_x19[5];
      uStack00000000000000c0 = unaff_x19[4];
      uStack00000000000000a8 = unaff_x19[1];
      uVar9 = *unaff_x19;
      uStack00000000000000a0 = uVar9;
      fVar4 = (float)FUN_07d81db8(&stack0x00000530,&stack0x000000a0,0);
      in_stack_00000078 = unaff_x19[3];
      uVar7 = unaff_x19[2];
      in_stack_00000088 = unaff_x19[5];
      in_stack_00000080 = unaff_x19[4];
      in_stack_00000090 = unaff_x19[6];
      in_stack_00000068 = unaff_x19[1];
      in_stack_00000060 = *unaff_x19;
      fVar8 = (float)uVar9;
      fVar11 = fVar11 + fVar8;
      in_stack_00000070 = uVar7;
      fVar5 = (float)FUN_07d81e28(&stack0x00000520,&stack0x00000060,0);
      fVar6 = (float)uVar7;
      in_stack_00000050 = unaff_x19[6];
      in_stack_00000038 = unaff_x19[3];
      in_stack_00000030 = unaff_x19[2];
      in_stack_00000048 = unaff_x19[5];
      in_stack_00000040 = unaff_x19[4];
      in_stack_00000028 = unaff_x19[1];
      in_stack_00000020 = *unaff_x19;
      FUN_07d81e60(fVar5 + unaff_s12 * ((fVar10 + fVar4) - fVar5),
                   fVar6 + unaff_s12 * (fVar6 - fVar6),fVar8 + unaff_s12 * (fVar11 - fVar8),
                   &stack0x00000520,&stack0x00000020,0);
      do {
        puVar3 = (undefined8 *)(*(long *)(unaff_x20 + 0x88) + unaff_x29 * unaff_x26);
        puVar3[2] = in_stack_00000540;
        puVar3[1] = in_stack_00000538;
        *puVar3 = in_stack_00000530;
        puVar3 = (undefined8 *)(*(long *)(unaff_x20 + 0x78) + unaff_x29 * unaff_x27);
        *(undefined4 *)(puVar3 + 1) = in_stack_00000528;
        *puVar3 = in_stack_00000520;
        iVar1 = (int)unaff_x29 + 1;
        if (*(int *)(unaff_x20 + 0x1ec) < iVar1) {
          return;
        }
        puVar3 = (undefined8 *)(*(long *)(unaff_x20 + 0x88) + (long)iVar1 * (long)(int)unaff_x26);
        in_stack_00000540 = puVar3[2];
        in_stack_00000538 = puVar3[1];
        in_stack_00000530 = *puVar3;
        unaff_x29 = (long)iVar1;
        puVar3 = (undefined8 *)(*(long *)(unaff_x20 + 0x78) + (long)iVar1 * (long)(int)unaff_x27);
        in_stack_00000528 = *(undefined4 *)(puVar3 + 1);
        in_stack_00000520 = *puVar3;
        in_stack_000001b8 = unaff_x19[3];
        in_stack_000001b0 = unaff_x19[2];
        in_stack_000001c8 = unaff_x19[5];
        in_stack_000001c0 = unaff_x19[4];
        in_stack_000001d0 = unaff_x19[6];
        in_stack_000001a8 = unaff_x19[1];
        in_stack_000001a0 = *unaff_x19;
        uVar2 = FUN_07d86538(&stack0x00000530,&stack0x000001a0,0);
      } while ((uVar2 & 1) == 0);
      if (*(char *)(unaff_x25 + 0xff5) == '\0') {
        FUN_03c8f898();
        *(undefined1 *)(unaff_x25 + 0xff5) = unaff_w28;
      }
      fVar10 = **(float **)(*unaff_x21 + 0xb8);
      fVar11 = (*(float **)(*unaff_x21 + 0xb8))[2];
      if (iVar1 == *(int *)(unaff_x20 + 0x1e0)) {
        in_stack_00000190 = unaff_x19[6];
        in_stack_00000178 = unaff_x19[3];
        in_stack_00000170 = unaff_x19[2];
        in_stack_00000188 = unaff_x19[5];
        in_stack_00000180 = unaff_x19[4];
        in_stack_00000168 = unaff_x19[1];
        in_stack_00000160 = *unaff_x19;
        fVar5 = (float)FUN_07d81d44();
        fVar5 = fVar5 * unaff_s8;
        fVar4 = fVar5;
        if (unaff_s9 < fVar5) {
          fVar4 = unaff_s9;
        }
        if (fVar5 < 0.0) {
          fVar4 = unaff_s10;
        }
        fVar10 = fVar10 + (fStack0000000000000014 - fVar10) * fVar4;
        fVar11 = fVar11 + (fStack0000000000000010 - fVar11) * fVar4;
      }
      if (iVar1 == *(int *)(unaff_x20 + 0x1e4)) {
        if (*(char *)(unaff_x25 + 0xff5) == '\0') {
          FUN_03c8f898();
          *(undefined1 *)(unaff_x25 + 0xff5) = unaff_w28;
        }
        in_stack_00000138 = unaff_x19[3];
        in_stack_00000130 = unaff_x19[2];
        in_stack_00000148 = unaff_x19[5];
        in_stack_00000140 = unaff_x19[4];
        in_stack_00000150 = unaff_x19[6];
        in_stack_00000128 = unaff_x19[1];
        in_stack_00000120 = *unaff_x19;
        fVar10 = **(float **)(*unaff_x21 + 0xb8);
        fVar11 = (*(float **)(*unaff_x21 + 0xb8))[2];
        fVar5 = (float)FUN_07d81d44();
        fVar5 = fVar5 * unaff_s8;
        fVar4 = fVar5;
        if (unaff_s9 < fVar5) {
          fVar4 = unaff_s9;
        }
        if (fVar5 < 0.0) {
          fVar4 = unaff_s10;
        }
        fVar10 = fVar10 + (fStack000000000000001c - fVar10) * fVar4;
        fVar11 = fVar11 + (fStack0000000000000018 - fVar11) * fVar4;
      }
    } while (iVar1 != *(int *)(unaff_x20 + 0x1e8));
    if (*(char *)(unaff_x25 + 0xff5) == '\0') {
      FUN_03c8f898();
      *(undefined1 *)(unaff_x25 + 0xff5) = unaff_w28;
    }
    in_stack_000000f8 = unaff_x19[3];
    in_stack_000000f0 = unaff_x19[2];
    in_stack_00000108 = unaff_x19[5];
    in_stack_00000100 = unaff_x19[4];
    in_stack_00000110 = unaff_x19[6];
    in_stack_000000e8 = unaff_x19[1];
    in_stack_000000e0 = *unaff_x19;
    unaff_s11 = **(float **)(*unaff_x21 + 0xb8);
    unaff_s15 = (*(float **)(*unaff_x21 + 0xb8))[2];
    param_1 = (float)FUN_07d81d44();
    param_1 = param_1 * unaff_s8;
  } while( true );
}


