/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequency
ENTRY_POINT: 0601090c
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


float OVRPlugin__get_systemDisplayFrequency
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,float param_8)

{
  undefined *puVar1;
  int in_w8;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s9;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s14;
  float in_s16;
  float in_s18;
  float in_s19;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  fVar7 = (param_7 + param_6) - in_s19 * param_1;
  param_5 = param_5 - in_s18 * param_3;
  fVar5 = (in_s18 * param_1 + param_8) - unaff_s9 * param_2;
  fVar8 = ((param_4 - in_s16) - in_s18 * param_2) - in_s19 * param_3;
  if (in_w8 == 0) {
    FUN_031f20f4(PTR_DAT_0759b378);
    *(undefined1 *)(unaff_x19 + 0xba6) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar9 = fVar7;
  fVar10 = fVar5;
  fStack0000000000000008 =
       (float)FUN_06e464bc(param_5,fVar7,fVar5,fVar8,*(undefined4 *)(lVar2 + 0x48),
                           *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_07a44545 == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a44545 = '\x01';
  }
  puVar1 = PTR_DAT_075b9420;
  fVar6 = unaff_s14 * unaff_s14 +
          in_stack_00000010._4_4_ * in_stack_00000010._4_4_ +
          fStack0000000000000018 * fStack0000000000000018;
  if (**(float **)(*(long *)PTR_DAT_075b9420 + 0xb8) <= fVar6) {
    fVar4 = unaff_s14 * fVar10 +
            in_stack_00000010._4_4_ * fStack0000000000000008 + fStack0000000000000018 * fVar9;
    fStack0000000000000008 = fStack0000000000000008 - (in_stack_00000010._4_4_ * fVar4) / fVar6;
    fVar9 = fVar9 - (fStack0000000000000018 * fVar4) / fVar6;
    fVar10 = fVar10 - (unaff_s14 * fVar4) / fVar6;
  }
  if (*(char *)(unaff_x21 + 0xa81) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    *(undefined1 *)(unaff_x21 + 0xa81) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar4 = SQRT(fVar10 * fVar10 + fStack0000000000000008 * fStack0000000000000008 + fVar9 * fVar9);
  fStack000000000000000c = fVar7;
  if (fVar4 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xa82) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      *(undefined1 *)(unaff_x23 + 0xa82) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000008 = *pfVar3;
    fStack0000000000000004 = pfVar3[1];
    fVar10 = pfVar3[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar4;
    fStack0000000000000004 = fVar9 / fVar4;
    fVar10 = fVar10 / fVar4;
  }
  if (*(char *)(unaff_x19 + 0xba6) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    *(undefined1 *)(unaff_x19 + 0xba6) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar7 = (float)FUN_06e464bc(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar2 + 0x48),
                              *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_07a44545 == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a44545 = '\x01';
  }
  fVar9 = fStack000000000000000c;
  if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar6) {
    fVar4 = unaff_s14 * fStack00000000000000a8 +
            in_stack_00000010._4_4_ * fVar7 + fStack0000000000000018 * fStack00000000000000a4;
    fVar7 = fVar7 - (in_stack_00000010._4_4_ * fVar4) / fVar6;
    fStack00000000000000a4 = fStack00000000000000a4 - (fStack0000000000000018 * fVar4) / fVar6;
    fStack00000000000000a8 = fStack00000000000000a8 - (unaff_s14 * fVar4) / fVar6;
  }
  if (*(char *)(unaff_x21 + 0xa81) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    *(undefined1 *)(unaff_x21 + 0xa81) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar6 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar7 * fVar7 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar6 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xa82) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      *(undefined1 *)(unaff_x23 + 0xa82) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar7 = *pfVar3;
    fStack00000000000000a4 = pfVar3[1];
    fStack00000000000000a8 = pfVar3[2];
  }
  else {
    fVar7 = fVar7 / fVar6;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar6;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar6;
  }
  fVar6 = (float)FUN_06e45b4c(fStack0000000000000008,fStack0000000000000004,fVar10,fVar7,
                              fStack00000000000000a4,fStack00000000000000a8,0);
  return (fVar5 * fStack0000000000000004 + param_5 * fVar7 + fVar8 * fVar6) - fVar9 * fVar10;
}


