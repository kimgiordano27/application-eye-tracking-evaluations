/*
FUNCTION_NAME: OVRPlugin$$GetNodePresent
ENTRY_POINT: 06009b0c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetNodePresent(ulong param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined *puVar2;
  int in_w8;
  float *pfVar3;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s11;
  float unaff_s14;
  float fVar10;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000028;
  uint uStack000000000000002c;
  float fStack0000000000000030;
  undefined8 uStack0000000000000038;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float in_stack_000000a8;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  
  _fStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  uStack000000000000002c = (uint)param_1;
  fStack0000000000000024 = param_2;
  fStack0000000000000028 = param_3;
  if (in_w8 == 0) {
    FUN_031f20f4(PTR_DAT_0759b370);
    param_1 = (ulong)uStack000000000000002c;
    *(undefined1 *)(unaff_x19 + 0xa81) = 1;
  }
  puVar2 = PTR_DAT_0759b370;
  fVar8 = param_4 - (float)param_1;
  fVar7 = unaff_s14 - fStack0000000000000024;
  fVar6 = unaff_s11 - fStack0000000000000028;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    param_1 = (ulong)uStack000000000000002c;
  }
  fVar1 = DAT_014ba9b8;
  fVar4 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
  fStack0000000000000014 = param_4;
  fStack000000000000001c = unaff_s11;
  if (fVar4 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      param_1 = (ulong)uStack000000000000002c;
      DAT_07a3ca82 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fVar8 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar6 = pfVar3[2];
  }
  else {
    fVar8 = fVar8 / fVar4;
    fVar7 = fVar7 / fVar4;
    fVar6 = fVar6 / fVar4;
  }
  fVar9 = in_stack_000000a8;
  fVar4 = fStack00000000000000a0;
  if (*(char *)(unaff_x19 + 0xa81) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    param_1 = (ulong)uStack000000000000002c;
    *(undefined1 *)(unaff_x19 + 0xa81) = 1;
  }
  fVar4 = fVar4 - (float)param_1;
  fVar10 = fStack00000000000000a4 - fStack0000000000000024;
  fVar9 = fVar9 - fStack0000000000000028;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    param_1 = (ulong)uStack000000000000002c;
  }
  fVar5 = SQRT(fVar9 * fVar9 + fVar4 * fVar4 + fVar10 * fVar10);
  if (fVar5 <= fVar1) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      param_1 = (ulong)uStack000000000000002c;
      DAT_07a3ca82 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fVar4 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar9 = pfVar3[2];
  }
  else {
    fVar4 = fVar4 / fVar5;
    fVar10 = fVar10 / fVar5;
    fVar9 = fVar9 / fVar5;
  }
  if (ABS(fVar6 * fVar9 + fVar8 * fVar4 + fVar7 * fVar10) <= DAT_014ba8ec) {
    fStack0000000000000004 = fStack00000000000000a4;
    FUN_060193dc(param_1,fStack0000000000000024,fStack0000000000000028,fStack0000000000000014,
                 unaff_s14,fStack000000000000001c,&stack0x00000030,0);
  }
  else {
    if (*(char *)(unaff_x19 + 0xa81) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      *(undefined1 *)(unaff_x19 + 0xa81) = 1;
    }
    fVar7 = in_stack_000000b8;
    fVar6 = fStack00000000000000b0;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar7 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fStack00000000000000b4 * fStack00000000000000b4);
    if (fVar7 <= fVar1) {
      if (DAT_07a3ca82 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3ca82 = '\x01';
      }
      fStack0000000000000030 = **(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    }
    else {
      fStack0000000000000030 = fVar6 / fVar7;
    }
  }
  return fStack0000000000000030;
}


