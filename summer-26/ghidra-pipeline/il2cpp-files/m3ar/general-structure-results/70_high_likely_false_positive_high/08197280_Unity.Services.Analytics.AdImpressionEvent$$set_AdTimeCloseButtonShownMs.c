/*
FUNCTION_NAME: Unity.Services.Analytics.AdImpressionEvent$$set_AdTimeCloseButtonShownMs
ENTRY_POINT: 08197280
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Analytics_AdImpressionEvent__set_AdTimeCloseButtonShownMs
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               float param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float unaff_s10;
  float fVar8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar9;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  float in_stack_00000040;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
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
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  
  puVar1 = PTR_DAT_08f65568;
  fVar7 = *(float *)(param_1 + 0xf28);
  fVar4 = SQRT(unaff_s15 * unaff_s15 + param_4 * param_4 + param_5 * param_5);
  if (fVar4 <= fVar7) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    uVar6 = *puVar2;
    fVar9 = *(float *)(puVar2 + 1);
  }
  else {
    fVar9 = unaff_s15 / fVar4;
    uVar6 = CONCAT44(param_5 / fVar4,param_4 / fVar4);
  }
  if (*(char *)(unaff_x22 + 0xe18) == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    *(undefined1 *)(unaff_x22 + 0xe18) = 1;
  }
  fVar8 = unaff_s10 + unaff_s13;
  fVar4 = unaff_s11 + unaff_s14;
  in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + unaff_s12;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar5 = SQRT(fVar4 * fVar4 + in_stack_00000020._4_4_ * in_stack_00000020._4_4_ + fVar8 * fVar8);
  if (fVar5 <= fVar7) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    in_stack_00000020._4_4_ = *pfVar3;
    fVar8 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  else {
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ / fVar5;
    fVar8 = fVar8 / fVar5;
    fVar4 = fVar4 / fVar5;
  }
  in_stack_000000a8 = *(undefined8 *)(unaff_x20 + 0x98);
  in_stack_000000a0 = *(undefined8 *)(unaff_x20 + 0x90);
  in_stack_000000b8 = *(undefined8 *)(unaff_x20 + 0xa8);
  in_stack_000000b0 = *(undefined8 *)(unaff_x20 + 0xa0);
  in_stack_000000c8 = *(undefined8 *)(unaff_x20 + 0xb8);
  in_stack_000000c0 = *(undefined8 *)(unaff_x20 + 0xb0);
  in_stack_000000d8 = *(undefined8 *)(unaff_x20 + 200);
  in_stack_000000d0 = *(undefined8 *)(unaff_x20 + 0xc0);
  in_stack_00000068 = in_stack_00000168;
  in_stack_00000060 = in_stack_00000160;
  in_stack_00000078 = in_stack_00000178;
  in_stack_00000070 = in_stack_00000170;
  in_stack_00000088 = in_stack_00000188;
  in_stack_00000080 = in_stack_00000180;
  in_stack_00000098 = in_stack_00000198;
  in_stack_00000090 = in_stack_00000190;
  FUN_0857332c(&stack0x000000e0,&stack0x000000a0,&stack0x00000060,0);
  *(float *)(unaff_x19 + 9) = fStack000000000000002c + fStack0000000000000028;
  *(undefined4 *)((long)unaff_x19 + 0x4c) = 0;
  *(float *)(unaff_x19 + 10) = in_stack_00000020._4_4_;
  *(float *)((long)unaff_x19 + 0x54) = fVar8;
  *(float *)(unaff_x19 + 0xb) = fVar4;
  *(undefined4 *)((long)unaff_x19 + 0x5c) = 0;
  unaff_x19[1] = in_stack_000000e8;
  *unaff_x19 = in_stack_000000e0;
  unaff_x19[3] = in_stack_000000f8;
  unaff_x19[2] = in_stack_000000f0;
  unaff_x19[0xc] = uVar6;
  *(float *)(unaff_x19 + 0xd) = fVar9;
  *(undefined4 *)((long)unaff_x19 + 0x6c) = 0;
  unaff_x19[5] = in_stack_00000108;
  unaff_x19[4] = in_stack_00000100;
  unaff_x19[7] = in_stack_00000118;
  unaff_x19[6] = in_stack_00000110;
  unaff_x19[8] = CONCAT44((float)((ulong)in_stack_00000058 >> 0x20) + in_stack_00000030,
                          (float)in_stack_00000058 + in_stack_00000040);
  return;
}


