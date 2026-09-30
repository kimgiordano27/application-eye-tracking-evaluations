/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationTracked
ENTRY_POINT: 06009b70
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetNodeOrientationTracked
                (long param_1,undefined1 param_2 [16],float param_3,float param_4,
                undefined1 param_5 [16],undefined1 param_6 [16],undefined1 param_7 [16])

{
  float *pfVar1;
  long unaff_x19;
  long *unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  undefined4 unaff_s11;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 unaff_s14;
  float fVar11;
  undefined4 unaff_s15;
  float fStack0000000000000004;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  undefined4 in_stack_00000038;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float in_stack_000000a8;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  
  uVar6 = param_7._4_4_;
  fVar5 = param_7._0_4_;
  fVar4 = *(float *)(param_1 + 0x9b8);
  fVar2 = SQRT(unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9);
  uStack0000000000000014 = unaff_s15;
  uStack0000000000000018 = unaff_s14;
  uStack000000000000001c = unaff_s11;
  if (fVar2 <= fVar4) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      uVar6 = 0;
      DAT_07a3ca82 = '\x01';
      param_3 = in_stack_00000020._4_4_;
      param_4 = fStack0000000000000028;
      fVar5 = fStack000000000000002c;
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fVar9 = *pfVar1;
    fVar10 = pfVar1[1];
    fVar2 = pfVar1[2];
  }
  else {
    fVar9 = unaff_s10 / fVar2;
    fVar10 = unaff_s9 / fVar2;
    fVar2 = unaff_s8 / fVar2;
  }
  fVar7 = in_stack_000000a8;
  fVar8 = fStack00000000000000a0;
  if (*(char *)(unaff_x19 + 0xa81) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    uVar6 = 0;
    *(undefined1 *)(unaff_x19 + 0xa81) = 1;
    param_3 = in_stack_00000020._4_4_;
    param_4 = fStack0000000000000028;
    fVar5 = fStack000000000000002c;
  }
  fVar8 = fVar8 - fVar5;
  fVar11 = fStack00000000000000a4 - param_3;
  fVar7 = fVar7 - param_4;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    uVar6 = 0;
    param_3 = in_stack_00000020._4_4_;
    param_4 = fStack0000000000000028;
    fVar5 = fStack000000000000002c;
  }
  fVar3 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar11 * fVar11);
  if (fVar3 <= fVar4) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      uVar6 = 0;
      DAT_07a3ca82 = '\x01';
      param_3 = in_stack_00000020._4_4_;
      param_4 = fStack0000000000000028;
      fVar5 = fStack000000000000002c;
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fVar8 = *pfVar1;
    fVar11 = pfVar1[1];
    fVar7 = pfVar1[2];
  }
  else {
    fVar8 = fVar8 / fVar3;
    fVar11 = fVar11 / fVar3;
    fVar7 = fVar7 / fVar3;
  }
  if (ABS(fVar2 * fVar7 + fVar9 * fVar8 + fVar10 * fVar11) <= DAT_014ba8ec) {
    fStack0000000000000004 = fStack00000000000000a4;
    FUN_060193dc(CONCAT44(uVar6,fVar5),param_3,param_4,uStack0000000000000014,uStack0000000000000018
                 ,uStack000000000000001c,&stack0x00000030,0);
  }
  else {
    if (*(char *)(unaff_x19 + 0xa81) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      *(undefined1 *)(unaff_x19 + 0xa81) = 1;
    }
    fVar2 = in_stack_000000b8;
    fVar5 = fStack00000000000000b0;
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar2 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fStack00000000000000b4 * fStack00000000000000b4);
    if (fVar2 <= fVar4) {
      if (DAT_07a3ca82 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3ca82 = '\x01';
      }
      in_stack_00000030 = **(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    }
    else {
      in_stack_00000030 = fVar5 / fVar2;
    }
  }
  return in_stack_00000030;
}


