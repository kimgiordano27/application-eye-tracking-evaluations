/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 051b9f1c
PROGRAM: hellodot-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingLevel(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined8 uVar1;
  undefined4 *unaff_x19;
  float *unaff_x20;
  long unaff_x23;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s9;
  float unaff_s11;
  float fVar12;
  float unaff_s14;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000044;
  float fStack000000000000004c;
  float in_stack_00000050;
  float in_stack_00000060;
  undefined8 in_stack_00000070;
  float in_stack_00000080;
  float in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  float fStack0000000000000170;
  float fStack0000000000000174;
  float in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  float fStack00000000000001e8;
  float fStack00000000000001ec;
  
  puVar2 = *(undefined8 **)(unaff_x23 + 0xa08);
  fVar3 = (float)FUN_05eea23c(0);
  if (DAT_06a67233 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67233 = '\x01';
  }
  fVar4 = (float)FUN_05eea23c(0);
  fStack000000000000002c = unaff_s11;
  FUN_051b94b8();
  fVar9 = in_stack_00000188;
  fVar7 = fStack0000000000000180;
  fVar12 = fStack00000000000001ec * fVar3;
  fVar13 = fStack00000000000001ec * param_2;
  fVar11 = fStack00000000000001ec * param_3;
  fStack0000000000000024 = fStack0000000000000190;
  fStack000000000000001c = in_stack_00000198;
  fStack0000000000000044 = fStack0000000000000184;
  in_stack_00000148 = 0;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  uVar1 = FUN_0419e090(unaff_s9 * fVar3 + fStack0000000000000190,
                       unaff_s9 * param_2 + fStack0000000000000194,
                       unaff_s9 * param_3 + in_stack_00000198,fVar12 + fStack0000000000000180,
                       fVar13 + fStack0000000000000184,fVar11 + in_stack_00000188,&stack0x00000148,
                       *puVar2);
  in_stack_00000138 = in_stack_00000150;
  in_stack_00000130 = in_stack_00000148;
  in_stack_00000140 = in_stack_00000158;
  fVar15 = in_stack_00000080;
  fStack000000000000004c = in_stack_00000090;
  fStack00000000000001ec = (float)FUN_051b96c8(in_stack_00000070,uVar1,&stack0x00000130);
  fStack00000000000001e8 = fVar15;
  fVar16 = in_stack_00000178;
  fVar15 = fStack0000000000000170;
  fStack0000000000000004 = fStack0000000000000160;
  fStack000000000000000c = in_stack_00000168;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  uVar1 = FUN_0419e090(fStack0000000000000170 - fVar12,fStack0000000000000174 - fVar13,
                       in_stack_00000178 - fVar11,fStack0000000000000160 - unaff_s9 * fVar3,
                       fStack0000000000000164 - unaff_s9 * param_2,
                       in_stack_00000168 - unaff_s9 * param_3,&stack0x00000118,*puVar2);
  in_stack_00000108 = in_stack_00000120;
  in_stack_00000100 = in_stack_00000118;
  in_stack_00000110 = in_stack_00000128;
  fStack0000000000000014 = in_stack_00000080;
  fVar11 = in_stack_00000090;
  fVar5 = (float)FUN_051b96c8(in_stack_00000070,uVar1,&stack0x00000100);
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  uVar1 = FUN_0419e090(fStack0000000000000024 - in_stack_00000050 * fVar4,
                       fStack0000000000000194 - in_stack_00000050 * fStack000000000000002c,
                       fStack000000000000001c - in_stack_00000050 * unaff_s14,
                       fVar15 - in_stack_00000060 * fVar4,
                       fStack0000000000000174 - in_stack_00000060 * fStack000000000000002c,
                       fVar16 - in_stack_00000060 * unaff_s14,&stack0x000000e8,*puVar2);
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar12 = in_stack_00000080;
  fVar13 = in_stack_00000090;
  fVar6 = (float)FUN_051b96c8(in_stack_00000070,uVar1,&stack0x000000d0);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  uVar1 = FUN_0419e090(in_stack_00000060 * fVar4 + fVar7,
                       in_stack_00000060 * fStack000000000000002c + fStack0000000000000044,
                       in_stack_00000060 * unaff_s14 + fVar9,
                       in_stack_00000050 * fVar4 + fStack0000000000000004,
                       in_stack_00000050 * fStack000000000000002c + fStack0000000000000164,
                       in_stack_00000050 * unaff_s14 + fStack000000000000000c,&stack0x000000b8,
                       *puVar2);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar15 = in_stack_00000080;
  fVar16 = in_stack_00000090;
  fVar7 = (float)FUN_051b96c8(in_stack_00000070,uVar1,&stack0x000000a0);
  fVar3 = (float)in_stack_00000070;
  fVar14 = (fStack000000000000004c - in_stack_00000090) *
           (fStack000000000000004c - in_stack_00000090) +
           (fStack00000000000001ec - fVar3) * (fStack00000000000001ec - fVar3) +
           (fStack00000000000001e8 - in_stack_00000080) *
           (fStack00000000000001e8 - in_stack_00000080);
  fVar10 = (fVar11 - in_stack_00000090) * (fVar11 - in_stack_00000090) +
           (fVar5 - fVar3) * (fVar5 - fVar3) +
           (fStack0000000000000014 - in_stack_00000080) *
           (fStack0000000000000014 - in_stack_00000080);
  fVar9 = (fVar13 - in_stack_00000090) * (fVar13 - in_stack_00000090) +
          (fVar6 - fVar3) * (fVar6 - fVar3) +
          (fVar12 - in_stack_00000080) * (fVar12 - in_stack_00000080);
  fVar4 = (fVar16 - in_stack_00000090) * (fVar16 - in_stack_00000090) +
          (fVar7 - fVar3) * (fVar7 - fVar3) +
          (fVar15 - in_stack_00000080) * (fVar15 - in_stack_00000080);
  fVar3 = fVar9;
  if (fVar4 <= fVar9) {
    fVar3 = fVar4;
  }
  fVar4 = fVar10;
  if (fVar3 <= fVar10) {
    fVar4 = fVar3;
  }
  fVar3 = fVar14;
  if (fVar4 <= fVar14) {
    fVar3 = fVar4;
  }
  if (fVar14 == fVar3) {
    *unaff_x20 = fStack00000000000001ec;
    uVar8 = 0;
    fVar15 = fStack00000000000001e8;
    fVar16 = fStack000000000000004c;
  }
  else if (fVar10 == fVar3) {
    *unaff_x20 = fVar5;
    uVar8 = 0x43340000;
    fVar15 = fStack0000000000000014;
    fVar16 = fVar11;
  }
  else if (fVar9 == fVar3) {
    *unaff_x20 = fVar6;
    uVar8 = 0x42b40000;
    fVar15 = fVar12;
    fVar16 = fVar13;
  }
  else {
    *unaff_x20 = fVar7;
    uVar8 = 0xc2b40000;
  }
  unaff_x20[1] = fVar15;
  unaff_x20[2] = fVar16;
  *unaff_x19 = uVar8;
  return;
}


